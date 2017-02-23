# Simple Server Class
The SimpleServerClass provides a simple way to establish TCP server connection to send and receive messages from other programs.

## Examples:
`main_server.cpp`: waits for and displays a message from a connected client at port 1500 then prompts the user to type in a response and finally send the response to the client.

`main_client.cpp`: eastablishes a connection to server in port 1500 then prompts the user to type in a message to send to the server and finally displays out the server's response.

## How to use
1. Copy server.h and common.h to your project's headers directory.
2. Copy server.cpp and common.cpp to your project's cpp directory.
3. If the project is compiled using Cmake or Makefile, remember to include server.cpp and common.cpp with other cpp files and link to the headers directory.

## Install examples
1. Open the terminal and locate it to the repository.
2. Run command `bash Install.sh` to install the client and server programs.

## Run examples
1. Open the terminal and locate it to the "sample" folder in the repository
2. Run command "./Run.sh" to run the client program and create another terminal that runs the server program
3. Type a message into the client and program and then press "Enter/return" to send it to server.
4. Repeat 3.
