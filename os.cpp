#include <string>

#include "audioSystem/audioSystem.cpp"
#include "commandlineSystem/commandlineSystem.cpp"
#include "fileSystem/fileSystem.cpp"
#include "interfaceSystem/interfaceSystem.cpp"
#include "threadingSystem/threadingSystem.cpp"
#include "userSystem/userSystem.cpp"

namespace os {
    
    unsigned int start() {
        
        string hddDatas,
               osDatas,
               usersDatas[],
               programsDatas[];
        
        fs.start();
        threading.start();
        user.start();
        cli.start();
        interface.start();
        audio.start();
        
    };
    unsigned int stop() {
        
        audio.stop();
        interface.stop();
        cli.stop();
        user.stop();
        threading.stop();
        fs.stop();
        
    };
    
    start();
    
}
