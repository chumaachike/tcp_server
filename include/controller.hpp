#pragma once

#include <memory>
#include <cstdint>
#include <string>

class ConnectionAcceptor;
class DBManager;
class RequestService;

class Controller {
private:
    std::unique_ptr<ConnectionAcceptor> tcp_new_conn_acc;
    std::unique_ptr<DBManager> database_manager;
    std::unique_ptr<RequestService> service_manager;

public:
    uint32_t ip_addr;
    uint16_t port_no;
    std::string name;

    Controller(std::string ip_addr, uint16_t port_no, std::string name);
    ~Controller(); 

    void start();
    void stop();
};