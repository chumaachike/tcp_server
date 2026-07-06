#pragma once
#include <thread>

class Controller;

class ClientSession {
private:
    int client_fd;             
    Controller& service;    
    std::thread session_thread;

public:
    explicit ClientSession(Controller& controller);
};