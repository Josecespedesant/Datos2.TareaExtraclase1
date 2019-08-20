#include <unistd.h>
#include <stdio.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <string.h>
#include <sstream>
#include "linkedlist/LinkedList.h"
#include "binarysearchtree/BinarySearchTree.h"
#define PORT 8080

/**
 * Método main del servidor.
 * @param argc
 * @param argv
 * @return
 */
int main(int argc, char const *argv[]) {
    int server_fd, new_socket, valread;
    struct sockaddr_in address;
    int opt = 1;
    int addrlen = sizeof(address);
    char buffer[1024] = {0};

    // Creating socket file descriptor
    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0)
    {
        perror("socket failed");
        exit(EXIT_FAILURE);
    }

    // Forcefully attaching socket to the port 8080
    if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT,
                   &opt, sizeof(opt)))
    {
        perror("setsockopt");
        exit(EXIT_FAILURE);
    }
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons( PORT );

    // Forcefully attaching socket to the port 8080
    if (bind(server_fd, (struct sockaddr *)&address,
             sizeof(address))<0)
    {
        perror("bind failed");
        exit(EXIT_FAILURE);
    }
    if (listen(server_fd, 9) < 0)
    {
        perror("listen");
        exit(EXIT_FAILURE);
    }

    LinkedList *l = new LinkedList();
    BinarySearchTree *bst = new BinarySearchTree();
    for(;;){

        memset(buffer,0,255);

        new_socket = accept(server_fd, (struct sockaddr *)&address,
                                (socklen_t*)&addrlen);
        valread = read( new_socket , buffer, 1024);

        if(buffer[0] == 'i'){
            string bufferstring = buffer;
            string cutstring = bufferstring.substr(1, strlen(buffer)-1);
            int number;
            std::istringstream iss (cutstring);
            iss>>number;
            l->addFirst(number);
            cout<<""<<endl;
            l->printList();
            cout<<""<<endl;
        }

        if(strcmp(buffer, "delete") == 0){
            l->deleteFirst();
            cout<<""<<endl;
            l->printList();
            cout<<""<<endl;
        }

        if(buffer[0]=='a'){
            string bufferstring = buffer;
            string cutstring = bufferstring.substr(1, strlen(buffer)-1);
            istringstream iss (cutstring);
            int data;
            iss>>data;
            bst->insert(data);

            cout<<""<<endl;
            bst->print_inorder();
            cout<<""<<endl;
        }

        if(buffer[0]=='m'){
            string bufferstring = buffer;
            string cutstring = bufferstring.substr(1, strlen(buffer)-1);
            istringstream iss (cutstring);
            int data;
            iss>>data;
            bst->remove(data);
            cout<<""<<endl;
            bst->print_inorder();
            cout<<""<<endl;
        }

        if(buffer[0] == 'c'){
            string bufferstring = buffer;
            string cutstring = bufferstring.substr(1, strlen(buffer)-1);

            string posS;
            string valueS;

            int i = 0;
            while(i< sizeof(cutstring)){
                while(cutstring[i]!='_'){
                    posS += cutstring[i];
                    i++;
                }
                valueS+=cutstring[i];
                i++;
            }

            istringstream iss (posS);
            istringstream iss2 (valueS);

            int pos;
            int value;

            iss>>pos;
            iss2>>value;

            l->editByPos(value,pos);
            cout<<""<<endl;
            l->printList();
            cout<<""<<endl;
        }

        if(buffer[0] == 'g'){
            string bufferstring = buffer;
            string cutstring = bufferstring.substr(1, strlen(buffer)-1);
            istringstream iss (cutstring);
            int pos;
            iss>>pos;
            cout<<""<<endl;
            cout<<l->getByPos(pos)<<endl;
            cout<<""<<endl;
        }

        if(buffer[0] == 'p'){
            cout<<""<<endl;
            l->printList();
            cout<<""<<endl;
        }

        sleep(1);
    }

}