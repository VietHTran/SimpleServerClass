#include <iostream>
#include <string>
#include <string.h>
#include<functional>
#include <unistd.h>
#include <strings.h>
#include <stdlib.h>
#include <errno.h>
#include <stdio.h>

#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <arpa/inet.h>

#include "common.h"

char buffer[BUFF_SIZE];

using namespace std;

/*
This is an example application of how the client communicate with server.
The program prompts the user to enter a message to the server then waits and prints the server's response
*/

int main() {
    int sockfd,status;
    struct sockaddr_in server_address;

    sockfd=socket(AF_INET,SOCK_STREAM,0);
    if (sockfd<0) {
        cout << "Error initializing socket" <<endl;
        exit(1);
    }

    server_address.sin_family=AF_INET;
    server_address.sin_port=htons(SERVER_PORT);
    status=connect(sockfd,(struct sockaddr *) &server_address, sizeof(server_address));
    checkError(status,"Error connecting server","Successfully connecting to server");
    cout << "Say something: ";
    sendMessageCLI(sockfd);
    cout << "Waiting for server\'s response..." << endl;
    getMessage(sockfd,buffer);
    cout <<"Server: "<<buffer<<endl;
    cout << "Closing connection..." << endl;
    close(sockfd);
    exit(0);
}