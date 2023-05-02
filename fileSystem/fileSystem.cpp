#include <fstream>

namespace fs {
    
    struct pngFileDatas {
        
        struct metadatas {
            
            uint8_t signature = 89 50 4E 47 0D 0A 1A 0A;
            string width,
                   height;
            uint4_t bitsDepth;
            uint3_t colorType;
            uint1_t compressionMethod,
                    filteringMethod,
                    interlacingMethod;
            string lastModificationDate[5];
                   colorsPalette,
                   pixelsColor[width * height],
                   imageTrailer;
            
        }
        string datas;
        
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
