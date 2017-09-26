/*********************************************************************
 ** Program Filename: gym.cpp (Final Assignment)
 ** Author: Terezie Schaller (Tera)
 ** Date: 5 - 30 - 2016
 ** Description: text based adventure game
 ** Input: player choices as int
 ** Output: text/story
 *********************************************************************/

#include "gym.hpp"

Gym::~Gym(){
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

void Gym::getMsg(){
    std::cout << "***************" << std::endl;
    std::cout << msg << std::endl;
    std::cout << "***************" << std::endl;
}

/*********************************************************************
 ** Function: special
 ** Description: displays an explore message, activates unique interaction
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: none
 *********************************************************************/

void Gym::special(){
    std::cout << "Why on earth is this place such a mess!?!" << std::endl;
}

/*********************************************************************
 ** Function: getJPage
 ** Description: signals whether the room contains a journal page
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: returns a bool
 *********************************************************************/

bool Gym::getJPage(){
    return jPage;
}

/*********************************************************************
 ** Function: jPageOff
 ** Description: turns off jPAge flag so only 1 page per room
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: jPage = false
 *********************************************************************/

void Gym::jPageOff(){
    jPage = false;
}
