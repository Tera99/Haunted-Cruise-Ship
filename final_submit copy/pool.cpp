/*********************************************************************
 ** Program Filename: pool.cpp (Final Assignment)
 ** Author: Terezie Schaller (Tera)
 ** Date: 5 - 30 - 2016
 ** Description: text based adventure game
 ** Input: player choices as int
 ** Output: text/story
 *********************************************************************/

#include "pool.hpp"

Pool::~Pool(){
    dir1 = NULL;
    dir2 = NULL;
    dir3 = NULL;
    dir4 = NULL;
    
}

/*********************************************************************
 ** Function: getMsg
 ** Description: displays the rooms string message
 ** Parameters: none
 ** Pre-Conditions: string message
 ** Post-Conditions: none
 *********************************************************************/

void Pool::getMsg(){
    //delete hallway and cabin here?
    std::cout << "***************" << std::endl;
    std::cout << msg << std::endl;
    std::cout << "***************" << std::endl;
    msg = msg2;
}

/*********************************************************************
 ** Function: special
 ** Description: displays an explore message, activates unique interaction
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: none
 *********************************************************************/

void Pool::special(){
    std::cout << "Water is pouring into the room, and the lights are flickering. You had better find a way out!" << std::endl;
}

/*********************************************************************
 ** Function: getJPage
 ** Description: signals whether the room contains a journal page
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: returns a bool
 *********************************************************************/

bool Pool::getJPage(){
    return jPage;
}

/*********************************************************************
 ** Function: jPageOff
 ** Description: turns off jPAge flag so only 1 page per room
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: jPage = false
 *********************************************************************/

void Pool::jPageOff(){
    jPage = false;
}
