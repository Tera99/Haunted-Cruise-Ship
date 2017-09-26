/*********************************************************************
 ** Program Filename: hall.hpp (Final Assignment)
 ** Author: Terezie Schaller (Tera)
 ** Date: 5 - 30 - 2016
 ** Description: text based adventure game
 ** Input: player choices as int
 ** Output: text/story
 *********************************************************************/

#ifndef hall_hpp
#define hall_hpp

#include <stdio.h>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <queue>
#include <stdlib.h>
#include <stdio.h>
#include "room.hpp"

class Hall : public Room{
private:
    std::string msg = "You are in a dimly lit hallway. It moves with the ocean. Most of the lights are out. The ones that are on flicker weakly. In the shadows at the end of the hall, you can make out a figure in a captain's uniform. He disappears out of sight when you take a step towards him. \n\n-Direction 1 leads to the pool. \n-Direction 2 leads back into the cabin.\n";
    
    
public:
    ~Hall();
    void getMsg();
    void special();
    bool getJPage();
    void jPageOff();
};

#endif /* hall_hpp */
