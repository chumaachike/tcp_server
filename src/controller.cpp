#include <memory>
#include <iostream>

#include "../include/controller.hpp"
#include "../include/connection_acceptor.hpp"
#include "../include/db_manager.hpp"
#include "../include/request_service.hpp"
#include "../include/network_utils.hpp"

Controller::Controller(std::string ip_addr, uint16_t port_no, std::string name)
    :tcp_new_conn_acc(std::make_unique<ConnectionAcceptor>(*this)),
    database_manager(std::make_unique<DBManager>(*this)),
    service_manager(std::make_unique<RequestService>(*this)),
    ip_addr(network_utils::ip_to_uint(ip_addr)),
    port_no(port_no),
    name(name){}

void Controller::start(){
    tcp_new_conn_acc->startNewAcceptor();
    service_manager->startServiceManager();
    database_manager->startDbManger();

    std::cout << "server has started on port: " << port_no << '\n';
}