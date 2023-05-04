#include <fstream>

namespace fs {
    
    struct txtFileDatas {
        
        struct metadatas {
            
            
            
        }
        string datas;
        
    }
    struct odxFileDatas {
        
        struct metadatas {
            
            
            
        }
        string datas;
        
    }
    struct pdfFileDatas {
        
        struct metadatas {
            
            
            
        }
        string datas;
        
    }
    struct docxFileDatas {
        
        struct metadatas {
            
            
            
        }
        string datas;
        
    }
    struct dfxFileDatas {
        
        struct metadatas {
            
            
            
        }
        string datas;
        
    }
    
    struct pngFileDatas {
        
        struct metadatas {
            
            uint8_t signature;
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
    
    struct threedsFileDatas {
        
        struct metadatas {
            
            
            
        }
        string datas;
        
    }
    struct blendFileDatas {
        
        struct metadatas {
            
            
            
        }
        string datas;
        
    }
    struct fbxFileDatas {
        
        struct metadatas {
            
            
            
        }
        string datas;
        
    }
    struct maxFileDatas {
        
        struct metadatas {
            
            
            
        }
        string datas;
        
    }
    struct mtlFileDatas {
        
        struct metadatas {
            
            
            
        }
        string datas;
        
    }
    struct objFileDatas {
        
        struct metadatas {
            
            
            
        }
        string datas;
        
    }
    struct stlFileDatas {
        
        struct metadatas {
            
            
            
        }
        string datas;
        
    }
    struct stpFileDatas {
        
        struct metadatas {
            
            
            
        }
        string datas;
        
    }
    struct gitfFileDatas {
        
        struct metadatas {
            
            
            
        }
        string datas;
        
    }
    
    struct grblFileDatas {
        
        struct metadatas {
            
            
            
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
