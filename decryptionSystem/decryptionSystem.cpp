#include <math.h>
#include <string>

namespace decryption {
    
    unsigned int aes256cbc(string input, string password) {
        
        
        
    };
    unsigned int caesarCode(string input, string number) {
        
        string output;
        output = to_string(stoull(input) - stoull(number));
        return output;
        
    };
    
}
