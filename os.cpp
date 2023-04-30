#include <string>

#include "audioSystem/audioSystem.cpp"
#include "commandlineSystem/commandlineSystem.cpp"
#include "decryptionSystem/decryptionSystem.cpp"
#include "encryptionSystem/encryptionSystem.cpp"
#include "fileSystem/fileSystem.cpp"
#include "hashingSystem/hashingSystem.cpp"
#include "interfaceSystem/interfaceSystem.cpp"
#include "threadingSystem/threadingSystem.cpp"
#include "userSystem/userSystem.cpp"

namespace os {
    
    string hddFilesDatas,
           osFilesDatas,
           usersFilesDatas[],
           programsFilesDatas[];
    
    unsigned int start() {
        
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
