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
1. Create a folder name "sample" in the cloned or downloaded repository.
2. Open the terminal and locate it to the repository.
3. Run command `bash Install.sh` to install the client and server programs.

## Run examples
1. Open 2 terminals and locate both of them to the "sample" folder created earlier.
2. Enter command `./server` on one of the terminal.
3. Enter command `./client` on the other terminal.
4. Enter a message in the client terminal and press "enter/return" to send it to the server.
5. Enter a response in the server terminal and press "enter/return" to send the message back to the client.
