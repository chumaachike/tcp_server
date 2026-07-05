#pragma once

class Controller;

class ConnectionAcceptor{
private:
    Controller& controller;
public:
    explicit ConnectionAcceptor(Controller& controller);
    ~ConnectionAcceptor()=default;

};