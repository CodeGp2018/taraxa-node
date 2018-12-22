/*
 * @Copyright: Taraxa.io 
 * @Author: Chia-Chun Lin 
 * @Date: 2018-12-14 15:47:31 
 * @Last Modified by: Chia-Chun Lin
 * @Last Modified time: 2018-12-18 14:11:44
 */
 #ifndef TYPES_HPP
 #define TYPES_HPP
 #include <string> 
 //newtork related
typedef boost::asio::ip::udp::endpoint end_point_udp_t;
typedef boost::asio::ip::udp::socket socket_udp_t;
typedef boost::asio::ip::udp::resolver resolver_udp_t;
namespace taraxa{
typedef std::string key_t;
typedef std::string name_t;
typedef uint64_t	bal_t;
typedef std::string sig_t;
typedef std::string blk_hash_t;
typedef std::string nonce_t;
}

#endif
