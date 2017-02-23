#!/bin/bash
mkdir sample
g++ main_server.cpp server.cpp common.cpp -o sample/server
g++ main_client.cpp common.cpp -o sample/client

#If installation successful then create a test run script
if [[ $(find ./sample -type f -name "server"  | wc -l) -gt 0  && $(find ./sample -type f -name "client"  | wc -l) -gt 0 ]]; then
    echo "#!/bin/bash" > "Run.sh"  
    echo "gnome-terminal -e ./server " >> "Run.sh" 
    echo "./client" >> "Run.sh" 
    mv Run.sh sample
    cd sample
    chmod +x Run.sh
fi