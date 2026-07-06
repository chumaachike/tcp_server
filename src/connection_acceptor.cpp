#include "../include/connection_acceptor.hpp"
#include <sys/socket.h>
#include <netinet/in.h>

ConnectionAcceptor::ConnectionAcceptor(Controller& controller)
    :controller(controller){
        listen_fd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    }