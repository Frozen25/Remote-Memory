#include <thread>
#include <iostream>
#include "server/Server.cpp"
#include "interfaceFLTK/interfaz.h"

void runServer(Server& server);
void runCollector(Server& server);
int interfaz(Server* server);

int main()
{
    Server server;
    server.init();

    std::thread serverThread(runServer, std::ref(server));
    serverThread.detach();

   // std::thread collectorThread(runServer, std::ref(server));
    //collectorThread.detach();
    std::thread interfaceThread(interfaz,&server );
    interfaceThread.detach();

    while (true)
    {
        std::string a = "";
        std::cin >> a;

        if (a == "kill")
        {
            server.kill();
        }
        else if (a == "revive")
        {
            server.revive();
        }
    }

    return 0;
}

void runServer(Server& server)
{
    // The server starts
    server.run();
}

void runCollector(Server& server)
{
    server.collect();
}
