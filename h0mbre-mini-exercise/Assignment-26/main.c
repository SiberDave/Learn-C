#include <sys/socket.h>
#include <netinet/in.h>

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
    // change the typee into struct pointer of sockaddr which have memory address of server_address.
    // third parameter is lenght of struct sockaddr, which is length of server_address.
    // if it return -1, its having error.
    return 0;
}