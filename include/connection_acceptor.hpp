#pragma once

class Controller;

class ConnectionAcceptor{
private:
    Controller& controller;
public:
    explicit ConnectionAcceptor(Controller& controller);

    void startNewAcceptor();

    ~ConnectionAcceptor()=default;

};