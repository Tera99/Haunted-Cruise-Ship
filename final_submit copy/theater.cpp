/*********************************************************************
 ** Program Filename: theater.cpp (Final Assignment)
 ** Author: Terezie Schaller (Tera)
 ** Date: 5 - 30 - 2016
 ** Description: text based adventure game
 ** Input: player choices as int
 ** Output: text/story
 *********************************************************************/

#include "theater.hpp"

Theater::~Theater(){
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

void Theater::getMsg(){
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

void Theater::special(){
    std::cout << "The mysterious figure on the stage glares at you but does not move! You approach him, but he vanishes in a cloud of foul black smoke." << std::endl;
}

/*********************************************************************
 ** Function: getJPage
 ** Description: signals whether the room contains a journal page
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: returns a bool
 *********************************************************************/

bool Theater::getJPage(){
    return jPage;
}

/*********************************************************************
 ** Function: jPageOff
 ** Description: turns off jPAge flag so only 1 page per room
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: jPage = false
 *********************************************************************/

void Theater::jPageOff(){
    jPage = false;
}
