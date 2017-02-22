#include <iostream>
#include "server.h"

using namespace std;

/*
This is an example application of how the server class works.
The program prints the client message and then prompt the user to write a response in terminal. 
*/

int main() {
    char buff[BUFF_SIZE];
    Server server(1500);
    server.waitForClient();
    cout << "Waiting for client\'s message..." << endl;
    server.getClientMessage(buff);
    cout <<"Client: "<<buff << endl;
    cout <<"Say something back: ";
    server.sendToClientCLI();
    cout << "Closing connection..." << endl;
    server.closeConnection();
}