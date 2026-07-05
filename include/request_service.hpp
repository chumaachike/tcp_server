#pragma once

class Controller;

class RequestService {
private:
    Controller& controller;
public:
    explicit RequestService(Controller& controller);
    void startServiceManager();
};