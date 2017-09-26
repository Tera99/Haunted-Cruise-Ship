/*********************************************************************
 ** Program Filename: theater.hpp (Final Assignment)
 ** Author: Terezie Schaller (Tera)
 ** Date: 5 - 30 - 2016
 ** Description: text based adventure game
 ** Input: player choices as int
 ** Output: text/story
 *********************************************************************/

#ifndef theater_hpp
#define theater_hpp

#include <stdio.h>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <queue>
#include <stdlib.h>
#include <stdio.h>
#include "room.hpp"

class Theater : public Room{
private:
    std::string msg = "You are in a darkened theater. An ominous figure in a black cloak stands in the middle of a stage. The door locks behind you. \n\n-Direction 1 leads to the Casino.";
    bool jPage = true;
    
public:
    ~Theater();
    void getMsg();
    void special();
    bool getJPage();
    void jPageOff();
    
};


#endif /* theater_hpp */
