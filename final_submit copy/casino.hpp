/*********************************************************************
 ** Program Filename: casino.hpp (Final Assignment)
 ** Author: Terezie Schaller (Tera)
 ** Date: 5 - 30 - 2016
 ** Description: text based adventure game
 ** Input: player choices as int
 ** Output: text/story
 *********************************************************************/
#ifndef casino_hpp
#define casino_hpp

#include <stdio.h>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <queue>
#include <stdlib.h>
#include <stdio.h>
#include "room.hpp"

class Casino : public Room{
private:
    std::string msg = "You are in a dimly lit casino. A one-eye croupier sits at a table on the far side of the room. It is impossible to go back the way you came, but you can exit the casino in direction 1.";
    std::string msg2 = "Once again you find yourself in the casino. The now familiar croupier becons to you.";
    
public:
    ~Casino();
    void getMsg();
    void special();
    bool getJPage();
    void jPageOff();
    void diceGame();
    
};


#endif /* casino_hpp */
