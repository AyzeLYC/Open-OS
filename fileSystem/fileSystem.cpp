#include <fstream>

namespace fs {
    
    struct pngFileDatas {
        
        struct metadatas {
            
            uint8_t signature = 0x89504E470D0A1A0A;
            string width,
                   height;
            uint4_t bitsDepth;
            uint3_t colorType;
            uint1_t compressionMethod,
                    filteringMethod,
                    interlacingMethod;
            
        }
        string lastModificationDate[5],
               internationalTextualData,
               textualData,
               compressedTextualData,
               colorsPalette,
               pixelsColor[metadatas.width * metadatas.height],
               imageTrailer;
        
    }
    struct jpgFileDatas {
        
        struct metadatas {
            
            string name;
            
        }
        string datas;
        
    }
    struct jpegFileDatas {
        
        struct metadatas {
            
            string name;
            
        }
        string datas;
        
    }
    struct webpFileDatas {
        
        struct metadatas {
            
            string name;
            
        }
        string datas;
        
    }
    
    struct gifFileDatas {
        
        struct metadatas {
            
            string name;
            
        }
        string datas;
        
    }
    
    struct mp4FileDatas {
        
        struct metadatas {
            
            string name;
            
        }
        string datas;
        
    }
    struct webmFileDatas {
        
        struct metadatas {
            
            string name;
            
        }
        string datas;
        
    }
    
    
    unsigned int createFile() {
        
        
        
    };
    unsigned int readFile() {
        
        
        
    };
    unsigned int writeFile() {
        
        
        
    };
    unsigned int deleteFileContent() {
        
        
        
    };
    unsigned int deleteFile() {
        
        
        
    };
    
}
