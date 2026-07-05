#pragma once
#include <vector>

struct Client{};
class Controller;

class DBManager{
private:
    std::vector<Client>client_db;
    Controller& controller;
public:
    explicit DBManager(Controller& controller);
};