#include <map>
#include <string>
#include <vector>

#include "../fileSystem/fileSystem.cpp"

namespace user {
    
    struct userParameters {
        
        uint16_t refreshingrate;
        string username;
        uint2_t userRights; // 0 = temporary user ( the files are delete after the user has stopped its session ), 1 = restricted user ( can only access specific files and folders, can't change its parameters, can't get the access to the network datas ), 2 = non restricted and non admin user ( can create its own files, folders and modify its parameters but can't modify the other users files, folder and parameters ), 3 = admin user ( can create its own files, folderd and modify its parameters and create some filders, folders and modoify the other users parameters )
        uint7_t audioLevel;
        string screenXSize,
               screenYSize;
        
    };
    struct UserData {
        
        UserParameters USERPARAMETERS;
        string files[];
        
    };
    
    UserData UserDatas[];
    
    string CurrentUserid;
    
    unsigned int CreateUser(UserData USERDATAS) {
        
        
        
    };
    
    unsigned int ChangeUserCpuDedicatedCores(string UserId, string CoresAmount) {
        
        
        
    };
    unsigned int ChangeUserCpuDedicatedThreads(string UserId, string ThreadAmount) {
        
        
        
    };
    unsigned int ChangeUserDedicatedGpuThreadsAmount(string UserId, string ThreadsAmount) {
        
        
        
    };
    unsigned int ChangeUserName(string UserId, string username) {
        
        
        
    };
    unsigned int ChangeUserParameters(string UserId) {
        
        
        
    };
    
    unsigned int GetCurrentUserId() {
        
        return CurrentUserId;
        
    };
    unsigned int GetUserDedicatedCpuName(string UserId) {
        
        
        
    };
    unsigned int GetUserDedicatedCpuCoresAmount(string UserId) {
        
        
        
    };
    unsigned int GetUserDedicatedCpuThreadsAmount(string UserId) {
        
        
        
    };
    unsigned int GetUserDedicatedGpuName(string UserId) {
        
        
        
    };
    unsigned int GetUserDedicatedGpuThreadsAmount(string UserId) {
        
        
        
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
    unsigned int GetUserParameters(string UserId) {
        
        
        
    };
    
    unsigned int SaveUserData(string UserId, UserData USERDATAS) {
        
        
        
    };
    unsigned int SaveUsersData() {
        
        
        
    };
    
}
