#include <array>
#include <map>
#include <memory>
#include <string>

namespace internet {
    
    struct socketAddress {
        
        string address;
        uint1_t port;
        
    }
    
    struct socketDatas {
        
        int domain,
        string type;
        uint1_t protocol;
        
    }
    struct socketBindDatas {
        
        
        
    }
    
    map<string, socketDatas> sockets;
    
    unsigned int socket(int domain, string type, uint8_t protocol) {
        
        if (type == "SOCK_STREAM") {
            
            
            
        } else if (type == "SOCK_DGRAM") {
            
            
            
        } else if (type == "UNIX") {
            
            
            
        };
        
    };
    unsigned int bind(int sockfd, const socketAddress *address, uint8_t addrlen) {
        
        
        
    };
    unsigned int connect() {
        
        
        
    };
    unsigned int listen(int sockfd, int backlog) {
        
        
        
    };
    unsigned int accept(socketDatas SOCKET, socketAddress *addr, uint8_t addrlen) {
        
        
        
    };
    unsigned int send() {
        
        
        
    };
    unsigned int recv() {
        
        
        
    };
    unsigned int shutdown() {
        
        
        
    };
    unsigned int close() {
        
        
        
    };
    
}
