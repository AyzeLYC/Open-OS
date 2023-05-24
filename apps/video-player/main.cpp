#include <fstream>
#include <string>

#include <os.cpp>

namespace main {
    
    uint1_t playingVideo = 0,
            stopApp = 0;
    
    unsigned int play(string videoContent) {
        
        string video = {
            
            "name": "",
            "title": "",
            "subtitle": "",
            "author": "",
            "gps": {
                
                "latitude": "",
                "longitude": "",
                
            },
            "comments": "",
            "framesXSize": 0,
            "framesYSize": 0,
            "framerate": 0,
            "images": "",
            "sounds": []
            
        };
        
        playingVideo = 1;
        
        while(playingVideo == 1) {
            
            if (stopApp == 1) {
                
                break;
                
            } else {
                
                
                
            };
            sleep();
            
        }
        
    };
    
}
