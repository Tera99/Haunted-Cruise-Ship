/*********************************************************************
 ** Program Filename: lounge.hpp (Final Assignment)
 ** Author: Terezie Schaller (Tera)
 ** Date: 5 - 30 - 2016
 ** Description: text based adventure game
 ** Input: player choices as int
 ** Output: text/story
 *********************************************************************/

#ifndef lounge_hpp
#define lounge_hpp

#include <stdio.h>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <queue>
#include <stdlib.h>
#include <stdio.h>
#include "room.hpp"

class Lounge : public Room{
private:
    std::string msg = "You are in a dark room with a mahogany bar and a piano. You hear eerie piano music but cannot tell where it comes from.";
    bool jPage = true;
    
public:
    ~Lounge();
    void getMsg();
    void special();
    bool getJPage();
    void jPageOff();
    
};


#endif /* lounge_hpp */
