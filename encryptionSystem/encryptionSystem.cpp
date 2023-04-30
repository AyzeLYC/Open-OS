#include <math.h>
#include <string>

namespace encryption {
    
    unsigned int aes256cbc(sring input, string password) {
        
        
        
    };
    unsigned int caesarCode(string input, string number) {
        
        string output;
        output = to_string(stoull(input) + stoull(number));
        return output;
        
    };
    
}
