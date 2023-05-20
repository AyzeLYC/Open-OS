#include <string>

#include "audioSystem/audioSystem.cpp"
#include "commandlineSystem/commandlineSystem.cpp"
#include "decryptionSystem/decryptionSystem.cpp"
#include "derivationSystem/derivationSystem.cpp"
#include "encryptionSystem/encryptionSystem.cpp"
#include "fileSystem/fileSystem.cpp"
#include "hashingSystem/hashingSystem.cpp"
#include "interfaceSystem/interfaceSystem.cpp"
#include "threadingSystem/threadingSystem.cpp"
#include "userSystem/userSystem.cpp"

namespace os {
    
    uint1_t running;
    uint16_t refreshingrate;
    
    string hddFilesDatas,
           osFilesDatas,
           usersFilesDatas[],
           programsFilesDatas[];
    
    unsigned int start() {
        
        fs.start();
        threading.start();
        user.start();
        cli.start();
        interface.application.start();
        interface.system.start();
        audio.start();
        
    };
    unsigned int stop() {
        
        audio.stop();
        interface.application.stop();
        cli.stop();
        user.stop();
        interface.system.stop();
        threading.stop();
        fs.stop();
        
    };
    
    start();
    running = 1;
    
    while (running == 1) {
        
        sleep(1 / refreshingrate);
        
    };
    
}
