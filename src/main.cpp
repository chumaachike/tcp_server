#include "../include/controller.hpp"

int main(){
    Controller server1{"127.0.0.1", 4000, "Default Server"};
    server1.start();
    scanf("\n");
    return 0;
}

