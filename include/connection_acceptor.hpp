#pragma once

#include <thread>

class Controller;

class ConnectionAcceptor{
private:
    Controller& controller;
    int listen_fd;
    std::thread session_thread;
public:
    explicit ConnectionAcceptor(Controller& controller);

    void startNewAcceptor();

    ~ConnectionAcceptor()=default;

};