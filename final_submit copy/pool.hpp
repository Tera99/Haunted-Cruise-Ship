/*********************************************************************
 ** Program Filename: pool.hpp (Final Assignment)
 ** Author: Terezie Schaller (Tera)
 ** Date: 5 - 30 - 2016
 ** Description: text based adventure game
 ** Input: player choices as int
 ** Output: text/story
 *********************************************************************/

#ifndef pool_hpp
#define pool_hpp

#include <stdio.h>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <queue>
#include <stdlib.h>
#include <stdio.h>
#include "room.hpp"

class Pool : public Room{
private:
    std::string msg = "You are in a large indoor pool at the center of the ship. The water in the pool sloshes violently as the ship seems to tilt. The ship shudders and groans. The hallway behind you fills with water! The ship is sinking! \n\n-Direction 1 leads to the Piano Lounge. \n-Direction 2 leads to the All-You-Can-Eat Buffet.\n-Direction 3 leads to the Theater.\n-Direction 4 leads to the Exercise Room.\n";
    std::string msg2 = "You are back in the indoor pool. The ship rocks and groans. It is taking on more water! \n\n-Direction 1 leads to the Piano Lounge. \n-Direction 2 leads to the All-You-Can-Eat Buffet.\n-Direction 3 leads to the Theater.\n-Direction 4 leads to the Exercise Room.\n";
    
public:
    ~Pool();
    void getMsg();
    void special();
    bool getJPage();
    void jPageOff();
};


#endif /* pool_hpp */
