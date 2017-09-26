/*********************************************************************
 ** Program Filename: buffet.hpp (Final Assignment)
 ** Author: Terezie Schaller (Tera)
 ** Date: 5 - 30 - 2016
 ** Description: text based adventure game
 ** Input: player choices as int
 ** Output: text/story
 *********************************************************************/
#ifndef buffet_hpp
#define buffet_hpp

#include <stdio.h>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <queue>
#include <stdlib.h>
#include <stdio.h>
#include "room.hpp"

class Buffet : public Room{
private:
    std::string msg = "You are in the ship's all-you-can-eat buffet. The disgusting smell of rotten garbage fills the room. Hundreds of tiny rodent eyes peer at you from the darkness.";
    bool jPage = true;
public:
    ~Buffet();
    void getMsg();
    void special();
    bool getJPage();
    void jPageOff();
    
};



#endif /* buffet_hpp */
