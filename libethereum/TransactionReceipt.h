/*
 This file is a modified version of cpp-ethereum TransactionReceipt.
 */

#pragma once

#include <libethcore/Common.h>
#include <libethcore/LogEntry.h>
#include <libdevcore/RLP.h>

#include <boost/variant/variant.hpp>
#include <array>

namespace dev
{
namespace eth
{

/// Transaction receipt, constructed either from RLP representation or from individual values.
/// Either a state root or a status code is contained.  m_hasStatusCode is true when it contains a status code.
/// Empty state root is not included into RLP-encoding.
class TransactionReceipt
{
public:
	TransactionReceipt(bytesConstRef _rlp);
	TransactionReceipt(h256 const& _root, u256 const& _gasUsed, LogEntries const& _log);
	TransactionReceipt(uint8_t _status, u256 const& _gasUsed, LogEntries const& _log);

	/// @returns true if the receipt has a status code.  Otherwise the receipt has a state root (pre-EIP658).
	bool hasStatusCode() const;
	/// @returns the state root.
	/// @throw TransactionReceiptVersionError when the receipt has a status code instead of a state root.
	h256 const& stateRoot() const;
	/// @returns the status code.
	/// @throw TransactionReceiptVersionError when the receipt has a state root instead of a status code.
	uint8_t statusCode() const;
	u256 const& cumulativeGasUsed() const { return m_gasUsed; }
	LogBloom const& bloom() const { return m_bloom; }
	LogEntries const& log() const { return m_log; }

	void streamRLP(RLPStream& _s) const;

	bytes rlp() const { RLPStream s; streamRLP(s); return s.out(); }

private:
	boost::variant<uint8_t,h256> m_statusCodeOrStateRoot;
	u256 m_gasUsed;
	LogBloom m_bloom;
	LogEntries m_log;
};

using TransactionReceipts = std::vector<TransactionReceipt>;

std::ostream& operator<<(std::ostream& _out, eth::TransactionReceipt const& _r);
} // eth
} // dev