#include <string>

#include "../fileSystem/fileSystem.cpp"

namespace user {
    
    string CurrentUserid;
    
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
