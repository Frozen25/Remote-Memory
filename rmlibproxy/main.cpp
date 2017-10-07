#include <iostream>
#include <thread>
#include "proxy/Proxy.cpp"

void runServer(Proxy& proxy);

int main() {

    Proxy proxy;
    proxy.init();
    proxy.initMainServer();

    std::thread serverThread(runServer, std::ref(proxy));
    serverThread.join();

    return 0;
}

void runServer(Proxy& proxy)
{
    // The proxy starts
    proxy.run();
}