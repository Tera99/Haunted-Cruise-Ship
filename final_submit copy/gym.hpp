/*********************************************************************
 ** Program Filename: gym.hpp (Final Assignment)
 ** Author: Terezie Schaller (Tera)
 ** Date: 5 - 30 - 2016
 ** Description: text based adventure game
 ** Input: player choices as int
 ** Output: text/story
 *********************************************************************/

#ifndef gym_hpp
#define gym_hpp

#include <stdio.h>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <queue>
#include <stdlib.h>
#include <stdio.h>
#include "room.hpp"

class Gym : public Room{
private:
    std::string msg = "You are in the ship's exercise room. Workout equipment is scattered everywhere, and there are large holes punched into the walls. It smells like dirty socks and moldy towels.";
    bool jPage = true;
    
public:
    ~Gym();
    void getMsg();
    void special();
    bool getJPage();
    void jPageOff();
    
};

#endif /* gym_hpp */
