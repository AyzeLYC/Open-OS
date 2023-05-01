#include <string>

#include "../fileSystem/fileSystem.cpp"

namespace user {
    
    struct UserDatas {
        
        string username;
        uint1_t userRights; // 0 = non admin ( can create its own files, folders and modify its parameters but can't modify the other users files, folder and parameters ), 1 = admin ( can create its own files, folderd and modify its parameters and create some filders, folders and modoify the other users parameters )
        string files[];
        
    }
    
    string CurrentUserid;
    
    unsigned int parameters(string UserId) {
        
        
        
    };
    
    unsigned int GetCurrentUserId() {
        
        return userid;
        
    };
    unsigned int GetUserName(string UserId) {
        
        fstream USER;
        USER.open("C:\Users\users.datas", fstream::in);
        if (USER.length() >= stoull(UserId)) {
            
            return USER[to_string(UserId)] && USER.close();
            
        } else {
            
            return "error";
            
        };
        
    };
    unsigned int GetUserCpuName() {
        
        
        
    };
    unsigned int GetUserCpuCoresAmount() {
        
        
        
    };
    unsigned int GetUserCpuThreadsAmount() {
        
        
        
    };
    unsigned int GetUserGpuName() {
        
        
        
    };
    unsigned int GetUserGpuThreadsAmount() {
        
        
        
    };
    
}
