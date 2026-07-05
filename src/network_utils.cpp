#include <cstdint>
#include <string>
#include <arpa/inet.h>
#include <stdexcept>

#include "../include/network_utils.hpp"

std::uint32_t network_utils::ip_to_uint(const std::string& ip){
    in_addr addr{};
    if (inet_pton(AF_INET, ip.c_str(), &addr) != 1)
        throw std::runtime_error("Invalid IP");
    return ntohl(addr.s_addr);
}

std::string network_utils::uint_to_ip(std::uint32_t ip){
    in_addr addr{};
    addr.s_addr = htonl(ip);
    char buffer[INET_ADDRSTRLEN];
    inet_ntop(AF_INET, &addr, buffer, sizeof(buffer));
    return buffer;
}