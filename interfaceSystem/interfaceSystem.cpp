#include <string>

namespace interface {
    
    string apps[];
    
    unsigned long long system() {
        
        unsigned int start() {
            
            
            
        };
        unsigned int pause() {
            
            
            
        };
        unsigned int stop() {
            
            
            
        };
        
    };
    unsigned long long application() {
        
        unsigned int create(uint1_t type) { // if type == 0 then the app is a command line based app, if type == 1 then the app is a user interface based app
            
            
            
        };
        unsigned int modify(uint2_t appPart) {
            
            
            
        };
        
        unsigned int start() {
            
            
            
        };
        unsigned int pause() {
            
            
            
        };
        unsigned int stop() {
            
            
            
        };
        
    };
    
}
