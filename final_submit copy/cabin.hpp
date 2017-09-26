/*********************************************************************
 ** Program Filename: cabin.hpp (Final Assignment)
 ** Author: Terezie Schaller (Tera)
 ** Date: 5 - 30 - 2016
 ** Description: text based adventure game
 ** Input: player choices as int
 ** Output: text/story
 *********************************************************************/

#ifndef cabin_hpp
#define cabin_hpp

#include <stdio.h>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <queue>
#include <stdlib.h>
#include <stdio.h>
#include "room.hpp"

class Cabin : public Room{
private:
    std::string msg = "You are in a small, sparsely furnished room with a round window. Through the window you see the ocean and blue sky. You are in the cabin of a cruise ship. \n\n-Direction 1, there is a doorway leading to the hall.\n";
    
public:
    ~Cabin();
    void getMsg();
    void special();
    bool getJPage();
    void jPageOff();
    
};

#endif /* cabin_hpp */
