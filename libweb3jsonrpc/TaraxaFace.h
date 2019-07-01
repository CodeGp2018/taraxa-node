/**
 * This file is generated by jsonrpcstub, DO NOT CHANGE IT MANUALLY!
 */

#ifndef JSONRPC_CPP_STUB_DEV_RPC_TARAXAFACE_H_
#define JSONRPC_CPP_STUB_DEV_RPC_TARAXAFACE_H_

#include "ModularServer.h"

namespace dev {
    namespace rpc {
        class TaraxaFace : public ServerInterface<TaraxaFace>
        {
            public:
                TaraxaFace()
                {
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_protocolVersion", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING,  NULL), &dev::rpc::TaraxaFace::taraxa_protocolVersionI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_hashrate", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING,  NULL), &dev::rpc::TaraxaFace::taraxa_hashrateI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_coinbase", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING,  NULL), &dev::rpc::TaraxaFace::taraxa_coinbaseI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_mining", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_BOOLEAN,  NULL), &dev::rpc::TaraxaFace::taraxa_miningI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_gasPrice", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING,  NULL), &dev::rpc::TaraxaFace::taraxa_gasPriceI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_accounts", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_ARRAY,  NULL), &dev::rpc::TaraxaFace::taraxa_accountsI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_blockNumber", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING,  NULL), &dev::rpc::TaraxaFace::taraxa_blockNumberI);
                    this->bindAndAddMethod(jsonrpc::Procedure("eth_blockNumber", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING,  NULL), &dev::rpc::TaraxaFace::taraxa_blockNumberI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_getBalance", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING, "param1",jsonrpc::JSON_STRING,"param2",jsonrpc::JSON_STRING, NULL), &dev::rpc::TaraxaFace::taraxa_getBalanceI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_getStorageAt", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING, "param1",jsonrpc::JSON_STRING,"param2",jsonrpc::JSON_STRING,"param3",jsonrpc::JSON_STRING, NULL), &dev::rpc::TaraxaFace::taraxa_getStorageAtI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_getStorageRoot", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING, "param1",jsonrpc::JSON_STRING,"param2",jsonrpc::JSON_STRING, NULL), &dev::rpc::TaraxaFace::taraxa_getStorageRootI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_getTransactionCount", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING, "param1",jsonrpc::JSON_STRING,"param2",jsonrpc::JSON_STRING, NULL), &dev::rpc::TaraxaFace::taraxa_getTransactionCountI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_pendingTransactions", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_ARRAY,  NULL), &dev::rpc::TaraxaFace::taraxa_pendingTransactionsI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_getBlockTransactionCountByHash", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param1",jsonrpc::JSON_STRING, NULL), &dev::rpc::TaraxaFace::taraxa_getBlockTransactionCountByHashI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_getBlockTransactionCountByNumber", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param1",jsonrpc::JSON_STRING, NULL), &dev::rpc::TaraxaFace::taraxa_getBlockTransactionCountByNumberI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_getUncleCountByBlockHash", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param1",jsonrpc::JSON_STRING, NULL), &dev::rpc::TaraxaFace::taraxa_getUncleCountByBlockHashI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_getUncleCountByBlockNumber", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param1",jsonrpc::JSON_STRING, NULL), &dev::rpc::TaraxaFace::taraxa_getUncleCountByBlockNumberI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_getCode", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING, "param1",jsonrpc::JSON_STRING,"param2",jsonrpc::JSON_STRING, NULL), &dev::rpc::TaraxaFace::taraxa_getCodeI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_sendTransaction", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING, "param1",jsonrpc::JSON_OBJECT, NULL), &dev::rpc::TaraxaFace::taraxa_sendTransactionI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_call", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING, "param1",jsonrpc::JSON_OBJECT,"param2",jsonrpc::JSON_STRING, NULL), &dev::rpc::TaraxaFace::taraxa_callI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_flush", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_BOOLEAN,  NULL), &dev::rpc::TaraxaFace::taraxa_flushI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_getBlockByHash", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param1",jsonrpc::JSON_STRING,"param2",jsonrpc::JSON_BOOLEAN, NULL), &dev::rpc::TaraxaFace::taraxa_getBlockByHashI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_getBlockByNumber", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param1",jsonrpc::JSON_STRING,"param2",jsonrpc::JSON_BOOLEAN, NULL), &dev::rpc::TaraxaFace::taraxa_getBlockByNumberI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_getTransactionByHash", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param1",jsonrpc::JSON_STRING, NULL), &dev::rpc::TaraxaFace::taraxa_getTransactionByHashI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_getTransactionByBlockHashAndIndex", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param1",jsonrpc::JSON_STRING,"param2",jsonrpc::JSON_STRING, NULL), &dev::rpc::TaraxaFace::taraxa_getTransactionByBlockHashAndIndexI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_getTransactionByBlockNumberAndIndex", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param1",jsonrpc::JSON_STRING,"param2",jsonrpc::JSON_STRING, NULL), &dev::rpc::TaraxaFace::taraxa_getTransactionByBlockNumberAndIndexI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_getTransactionReceipt", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param1",jsonrpc::JSON_STRING, NULL), &dev::rpc::TaraxaFace::taraxa_getTransactionReceiptI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_getUncleByBlockHashAndIndex", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param1",jsonrpc::JSON_STRING,"param2",jsonrpc::JSON_STRING, NULL), &dev::rpc::TaraxaFace::taraxa_getUncleByBlockHashAndIndexI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_getUncleByBlockNumberAndIndex", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param1",jsonrpc::JSON_STRING,"param2",jsonrpc::JSON_STRING, NULL), &dev::rpc::TaraxaFace::taraxa_getUncleByBlockNumberAndIndexI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_newFilter", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING, "param1",jsonrpc::JSON_OBJECT, NULL), &dev::rpc::TaraxaFace::taraxa_newFilterI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_newFilterEx", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING, "param1",jsonrpc::JSON_OBJECT, NULL), &dev::rpc::TaraxaFace::taraxa_newFilterExI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_newBlockFilter", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING,  NULL), &dev::rpc::TaraxaFace::taraxa_newBlockFilterI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_newPendingTransactionFilter", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING,  NULL), &dev::rpc::TaraxaFace::taraxa_newPendingTransactionFilterI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_uninstallFilter", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_BOOLEAN, "param1",jsonrpc::JSON_STRING, NULL), &dev::rpc::TaraxaFace::taraxa_uninstallFilterI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_getFilterChanges", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_ARRAY, "param1",jsonrpc::JSON_STRING, NULL), &dev::rpc::TaraxaFace::taraxa_getFilterChangesI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_getFilterChangesEx", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_ARRAY, "param1",jsonrpc::JSON_STRING, NULL), &dev::rpc::TaraxaFace::taraxa_getFilterChangesExI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_getFilterLogs", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_ARRAY, "param1",jsonrpc::JSON_STRING, NULL), &dev::rpc::TaraxaFace::taraxa_getFilterLogsI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_getFilterLogsEx", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_ARRAY, "param1",jsonrpc::JSON_STRING, NULL), &dev::rpc::TaraxaFace::taraxa_getFilterLogsExI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_getLogs", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_ARRAY, "param1",jsonrpc::JSON_OBJECT, NULL), &dev::rpc::TaraxaFace::taraxa_getLogsI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_getLogsEx", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_ARRAY, "param1",jsonrpc::JSON_OBJECT, NULL), &dev::rpc::TaraxaFace::taraxa_getLogsExI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_getWork", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_ARRAY,  NULL), &dev::rpc::TaraxaFace::taraxa_getWorkI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_submitWork", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_BOOLEAN, "param1",jsonrpc::JSON_STRING,"param2",jsonrpc::JSON_STRING,"param3",jsonrpc::JSON_STRING, NULL), &dev::rpc::TaraxaFace::taraxa_submitWorkI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_submitHashrate", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_BOOLEAN, "param1",jsonrpc::JSON_STRING,"param2",jsonrpc::JSON_STRING, NULL), &dev::rpc::TaraxaFace::taraxa_submitHashrateI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_register", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING, "param1",jsonrpc::JSON_STRING, NULL), &dev::rpc::TaraxaFace::taraxa_registerI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_unregister", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_BOOLEAN, "param1",jsonrpc::JSON_STRING, NULL), &dev::rpc::TaraxaFace::taraxa_unregisterI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_fetchQueuedTransactions", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_ARRAY, "param1",jsonrpc::JSON_STRING, NULL), &dev::rpc::TaraxaFace::taraxa_fetchQueuedTransactionsI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_signTransaction", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param1",jsonrpc::JSON_OBJECT, NULL), &dev::rpc::TaraxaFace::taraxa_signTransactionI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_inspectTransaction", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param1",jsonrpc::JSON_STRING, NULL), &dev::rpc::TaraxaFace::taraxa_inspectTransactionI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_sendRawTransaction", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING, "param1",jsonrpc::JSON_STRING, NULL), &dev::rpc::TaraxaFace::taraxa_sendRawTransactionI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_notePassword", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_BOOLEAN, "param1",jsonrpc::JSON_STRING, NULL), &dev::rpc::TaraxaFace::taraxa_notePasswordI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_syncing", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT,  NULL), &dev::rpc::TaraxaFace::taraxa_syncingI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_estimateGas", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING, "param1",jsonrpc::JSON_OBJECT, NULL), &dev::rpc::TaraxaFace::taraxa_estimateGasI);
                    this->bindAndAddMethod(jsonrpc::Procedure("taraxa_chainId", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING,  NULL), &dev::rpc::TaraxaFace::taraxa_chainIdI);
                }

                inline virtual void taraxa_protocolVersionI(const Json::Value &request, Json::Value &response)
                {
                    (void)request;
                    response = this->taraxa_protocolVersion();
                }
                inline virtual void taraxa_hashrateI(const Json::Value &request, Json::Value &response)
                {
                    (void)request;
                    response = this->taraxa_hashrate();
                }
                inline virtual void taraxa_coinbaseI(const Json::Value &request, Json::Value &response)
                {
                    (void)request;
                    response = this->taraxa_coinbase();
                }
                inline virtual void taraxa_miningI(const Json::Value &request, Json::Value &response)
                {
                    (void)request;
                    response = this->taraxa_mining();
                }
                inline virtual void taraxa_gasPriceI(const Json::Value &request, Json::Value &response)
                {
                    (void)request;
                    response = this->taraxa_gasPrice();
                }
                inline virtual void taraxa_accountsI(const Json::Value &request, Json::Value &response)
                {
                    (void)request;
                    response = this->taraxa_accounts();
                }
                inline virtual void taraxa_blockNumberI(const Json::Value &request, Json::Value &response)
                {
                    (void)request;
                    response = this->taraxa_blockNumber();
                }
                inline virtual void taraxa_getBalanceI(const Json::Value &request, Json::Value &response)
                {
                    response = this->taraxa_getBalance(request[0u].asString(), request[1u].asString());
                }
                inline virtual void taraxa_getStorageAtI(const Json::Value &request, Json::Value &response)
                {
                    response = this->taraxa_getStorageAt(request[0u].asString(), request[1u].asString(), request[2u].asString());
                }
                inline virtual void taraxa_getStorageRootI(const Json::Value &request, Json::Value &response)
                {
                    response = this->taraxa_getStorageRoot(request[0u].asString(), request[1u].asString());
                }
                inline virtual void taraxa_getTransactionCountI(const Json::Value &request, Json::Value &response)
                {
                    response = this->taraxa_getTransactionCount(request[0u].asString(), request[1u].asString());
                }
                inline virtual void taraxa_pendingTransactionsI(const Json::Value &request, Json::Value &response)
                {
                    (void)request;
                    response = this->taraxa_pendingTransactions();
                }
                inline virtual void taraxa_getBlockTransactionCountByHashI(const Json::Value &request, Json::Value &response)
                {
                    response = this->taraxa_getBlockTransactionCountByHash(request[0u].asString());
                }
                inline virtual void taraxa_getBlockTransactionCountByNumberI(const Json::Value &request, Json::Value &response)
                {
                    response = this->taraxa_getBlockTransactionCountByNumber(request[0u].asString());
                }
                inline virtual void taraxa_getUncleCountByBlockHashI(const Json::Value &request, Json::Value &response)
                {
                    response = this->taraxa_getUncleCountByBlockHash(request[0u].asString());
                }
                inline virtual void taraxa_getUncleCountByBlockNumberI(const Json::Value &request, Json::Value &response)
                {
                    response = this->taraxa_getUncleCountByBlockNumber(request[0u].asString());
                }
                inline virtual void taraxa_getCodeI(const Json::Value &request, Json::Value &response)
                {
                    response = this->taraxa_getCode(request[0u].asString(), request[1u].asString());
                }
                inline virtual void taraxa_sendTransactionI(const Json::Value &request, Json::Value &response)
                {
                    response = this->taraxa_sendTransaction(request[0u]);
                }
                inline virtual void taraxa_callI(const Json::Value &request, Json::Value &response)
                {
                    response = this->taraxa_call(request[0u], request[1u].asString());
                }
                inline virtual void taraxa_flushI(const Json::Value &request, Json::Value &response)
                {
                    (void)request;
                    response = this->taraxa_flush();
                }
                inline virtual void taraxa_getBlockByHashI(const Json::Value &request, Json::Value &response)
                {
                    response = this->taraxa_getBlockByHash(request[0u].asString(), request[1u].asBool());
                }
                inline virtual void taraxa_getBlockByNumberI(const Json::Value &request, Json::Value &response)
                {
                    response = this->taraxa_getBlockByNumber(request[0u].asString(), request[1u].asBool());
                }
                inline virtual void taraxa_getTransactionByHashI(const Json::Value &request, Json::Value &response)
                {
                    response = this->taraxa_getTransactionByHash(request[0u].asString());
                }
                inline virtual void taraxa_getTransactionByBlockHashAndIndexI(const Json::Value &request, Json::Value &response)
                {
                    response = this->taraxa_getTransactionByBlockHashAndIndex(request[0u].asString(), request[1u].asString());
                }
                inline virtual void taraxa_getTransactionByBlockNumberAndIndexI(const Json::Value &request, Json::Value &response)
                {
                    response = this->taraxa_getTransactionByBlockNumberAndIndex(request[0u].asString(), request[1u].asString());
                }
                inline virtual void taraxa_getTransactionReceiptI(const Json::Value &request, Json::Value &response)
                {
                    response = this->taraxa_getTransactionReceipt(request[0u].asString());
                }
                inline virtual void taraxa_getUncleByBlockHashAndIndexI(const Json::Value &request, Json::Value &response)
                {
                    response = this->taraxa_getUncleByBlockHashAndIndex(request[0u].asString(), request[1u].asString());
                }
                inline virtual void taraxa_getUncleByBlockNumberAndIndexI(const Json::Value &request, Json::Value &response)
                {
                    response = this->taraxa_getUncleByBlockNumberAndIndex(request[0u].asString(), request[1u].asString());
                }
                inline virtual void taraxa_newFilterI(const Json::Value &request, Json::Value &response)
                {
                    response = this->taraxa_newFilter(request[0u]);
                }
                inline virtual void taraxa_newFilterExI(const Json::Value &request, Json::Value &response)
                {
                    response = this->taraxa_newFilterEx(request[0u]);
                }
                inline virtual void taraxa_newBlockFilterI(const Json::Value &request, Json::Value &response)
                {
                    (void)request;
                    response = this->taraxa_newBlockFilter();
                }
                inline virtual void taraxa_newPendingTransactionFilterI(const Json::Value &request, Json::Value &response)
                {
                    (void)request;
                    response = this->taraxa_newPendingTransactionFilter();
                }
                inline virtual void taraxa_uninstallFilterI(const Json::Value &request, Json::Value &response)
                {
                    response = this->taraxa_uninstallFilter(request[0u].asString());
                }
                inline virtual void taraxa_getFilterChangesI(const Json::Value &request, Json::Value &response)
                {
                    response = this->taraxa_getFilterChanges(request[0u].asString());
                }
                inline virtual void taraxa_getFilterChangesExI(const Json::Value &request, Json::Value &response)
                {
                    response = this->taraxa_getFilterChangesEx(request[0u].asString());
                }
                inline virtual void taraxa_getFilterLogsI(const Json::Value &request, Json::Value &response)
                {
                    response = this->taraxa_getFilterLogs(request[0u].asString());
                }
                inline virtual void taraxa_getFilterLogsExI(const Json::Value &request, Json::Value &response)
                {
                    response = this->taraxa_getFilterLogsEx(request[0u].asString());
                }
                inline virtual void taraxa_getLogsI(const Json::Value &request, Json::Value &response)
                {
                    response = this->taraxa_getLogs(request[0u]);
                }
                inline virtual void taraxa_getLogsExI(const Json::Value &request, Json::Value &response)
                {
                    response = this->taraxa_getLogsEx(request[0u]);
                }
                inline virtual void taraxa_getWorkI(const Json::Value &request, Json::Value &response)
                {
                    (void)request;
                    response = this->taraxa_getWork();
                }
                inline virtual void taraxa_submitWorkI(const Json::Value &request, Json::Value &response)
                {
                    response = this->taraxa_submitWork(request[0u].asString(), request[1u].asString(), request[2u].asString());
                }
                inline virtual void taraxa_submitHashrateI(const Json::Value &request, Json::Value &response)
                {
                    response = this->taraxa_submitHashrate(request[0u].asString(), request[1u].asString());
                }
                inline virtual void taraxa_registerI(const Json::Value &request, Json::Value &response)
                {
                    response = this->taraxa_register(request[0u].asString());
                }
                inline virtual void taraxa_unregisterI(const Json::Value &request, Json::Value &response)
                {
                    response = this->taraxa_unregister(request[0u].asString());
                }
                inline virtual void taraxa_fetchQueuedTransactionsI(const Json::Value &request, Json::Value &response)
                {
                    response = this->taraxa_fetchQueuedTransactions(request[0u].asString());
                }
                inline virtual void taraxa_signTransactionI(const Json::Value &request, Json::Value &response)
                {
                    response = this->taraxa_signTransaction(request[0u]);
                }
                inline virtual void taraxa_inspectTransactionI(const Json::Value &request, Json::Value &response)
                {
                    response = this->taraxa_inspectTransaction(request[0u].asString());
                }
                inline virtual void taraxa_sendRawTransactionI(const Json::Value &request, Json::Value &response)
                {
                    response = this->taraxa_sendRawTransaction(request[0u].asString());
                }
                inline virtual void taraxa_notePasswordI(const Json::Value &request, Json::Value &response)
                {
                    response = this->taraxa_notePassword(request[0u].asString());
                }
                inline virtual void taraxa_syncingI(const Json::Value &request, Json::Value &response)
                {
                    (void)request;
                    response = this->taraxa_syncing();
                }
                inline virtual void taraxa_estimateGasI(const Json::Value &request, Json::Value &response)
                {
                    response = this->taraxa_estimateGas(request[0u]);
                }
                inline virtual void taraxa_chainIdI(const Json::Value &request, Json::Value &response)
                {
                    (void)request;
                    response = this->taraxa_chainId();
                }
                virtual std::string taraxa_protocolVersion() = 0;
                virtual std::string taraxa_hashrate() = 0;
                virtual std::string taraxa_coinbase() = 0;
                virtual bool taraxa_mining() = 0;
                virtual std::string taraxa_gasPrice() = 0;
                virtual Json::Value taraxa_accounts() = 0;
                virtual std::string taraxa_blockNumber() = 0;
                virtual std::string taraxa_getBalance(const std::string& param1, const std::string& param2) = 0;
                virtual std::string taraxa_getStorageAt(const std::string& param1, const std::string& param2, const std::string& param3) = 0;
                virtual std::string taraxa_getStorageRoot(const std::string& param1, const std::string& param2) = 0;
                virtual std::string taraxa_getTransactionCount(const std::string& param1, const std::string& param2) = 0;
                virtual Json::Value taraxa_pendingTransactions() = 0;
                virtual Json::Value taraxa_getBlockTransactionCountByHash(const std::string& param1) = 0;
                virtual Json::Value taraxa_getBlockTransactionCountByNumber(const std::string& param1) = 0;
                virtual Json::Value taraxa_getUncleCountByBlockHash(const std::string& param1) = 0;
                virtual Json::Value taraxa_getUncleCountByBlockNumber(const std::string& param1) = 0;
                virtual std::string taraxa_getCode(const std::string& param1, const std::string& param2) = 0;
                virtual std::string taraxa_sendTransaction(const Json::Value& param1) = 0;
                virtual std::string taraxa_call(const Json::Value& param1, const std::string& param2) = 0;
                virtual bool taraxa_flush() = 0;
                virtual Json::Value taraxa_getBlockByHash(const std::string& param1, bool param2) = 0;
                virtual Json::Value taraxa_getBlockByNumber(const std::string& param1, bool param2) = 0;
                virtual Json::Value taraxa_getTransactionByHash(const std::string& param1) = 0;
                virtual Json::Value taraxa_getTransactionByBlockHashAndIndex(const std::string& param1, const std::string& param2) = 0;
                virtual Json::Value taraxa_getTransactionByBlockNumberAndIndex(const std::string& param1, const std::string& param2) = 0;
                virtual Json::Value taraxa_getTransactionReceipt(const std::string& param1) = 0;
                virtual Json::Value taraxa_getUncleByBlockHashAndIndex(const std::string& param1, const std::string& param2) = 0;
                virtual Json::Value taraxa_getUncleByBlockNumberAndIndex(const std::string& param1, const std::string& param2) = 0;
                virtual std::string taraxa_newFilter(const Json::Value& param1) = 0;
                virtual std::string taraxa_newFilterEx(const Json::Value& param1) = 0;
                virtual std::string taraxa_newBlockFilter() = 0;
                virtual std::string taraxa_newPendingTransactionFilter() = 0;
                virtual bool taraxa_uninstallFilter(const std::string& param1) = 0;
                virtual Json::Value taraxa_getFilterChanges(const std::string& param1) = 0;
                virtual Json::Value taraxa_getFilterChangesEx(const std::string& param1) = 0;
                virtual Json::Value taraxa_getFilterLogs(const std::string& param1) = 0;
                virtual Json::Value taraxa_getFilterLogsEx(const std::string& param1) = 0;
                virtual Json::Value taraxa_getLogs(const Json::Value& param1) = 0;
                virtual Json::Value taraxa_getLogsEx(const Json::Value& param1) = 0;
                virtual Json::Value taraxa_getWork() = 0;
                virtual bool taraxa_submitWork(const std::string& param1, const std::string& param2, const std::string& param3) = 0;
                virtual bool taraxa_submitHashrate(const std::string& param1, const std::string& param2) = 0;
                virtual std::string taraxa_register(const std::string& param1) = 0;
                virtual bool taraxa_unregister(const std::string& param1) = 0;
                virtual Json::Value taraxa_fetchQueuedTransactions(const std::string& param1) = 0;
                virtual Json::Value taraxa_signTransaction(const Json::Value& param1) = 0;
                virtual Json::Value taraxa_inspectTransaction(const std::string& param1) = 0;
                virtual std::string taraxa_sendRawTransaction(const std::string& param1) = 0;
                virtual bool taraxa_notePassword(const std::string& param1) = 0;
                virtual Json::Value taraxa_syncing() = 0;
                virtual std::string taraxa_estimateGas(const Json::Value& param1) = 0;
                virtual std::string taraxa_chainId() = 0;
        };

    }
}
#endif //JSONRPC_CPP_STUB_DEV_RPC_TARAXAFACE_H_