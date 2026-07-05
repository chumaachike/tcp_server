#pragma once

#include <cstdint>
#include <string>

namespace network_utils {

std::string uint_to_ip(uint32_t ip_addr);
std::uint32_t ip_to_uint(const std::string& ip_addr);

} 