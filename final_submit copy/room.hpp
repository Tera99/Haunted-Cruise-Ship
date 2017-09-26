/*********************************************************************
 ** Program Filename: room.hpp (Final Assignment)
 ** Author: Terezie Schaller (Tera)
 ** Date: 5 - 30 - 2016
 ** Description: text based adventure game
 ** Input: player choices as int
 ** Output: text/story
 *********************************************************************/

#ifndef room_hpp
#define room_hpp

#include <stdio.h>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <queue>
#include <stdlib.h>

class Room{
protected:
    std::string msg = "none";
    Room *dir1 = NULL;
    Room *dir2 = NULL;
    Room *dir3 = NULL;
    Room *dir4 = NULL;
    bool jPage = false;
    
public:
    
    virtual ~Room();
    
    virtual void getMsg() = 0; //prints out room msg
    virtual void special() = 0; //special action for each room
    
    void setD1(Room* dest);
    void setD2(Room* dest);
    void setD3(Room* dest);
    void setD4(Room* dest);
    
    Room * getD1();
    Room * getD2();
    Room * getD3();
    Room * getD4();
    
    virtual bool getJPage();
    virtual void jPageOff();
    
};

#endif /* room_hpp */
