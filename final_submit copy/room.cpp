/*********************************************************************
 ** Program Filename: room.cpp (Final Assignment)
 ** Author: Terezie Schaller (Tera)
 ** Date: 5 - 30 - 2016
 ** Description: text based adventure game
 ** Input: player choices as int
 ** Output: text/story
 *********************************************************************/

#include "room.hpp"

Room::~Room(){
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

void Room::getMsg(){
    std::cout << msg << std::endl;
}

/*********************************************************************
 ** Function: special
 ** Description: displays an explore message, activates unique interaction
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: none
 *********************************************************************/

void Room::special(){
    //This is the special function.
    std::cout << " " << std::endl;
}

/*********************************************************************
 ** Function: setD1
 ** Description: sets room D1
 ** Parameters: room pointer
 ** Pre-Conditions: none
 ** Post-Conditions: room's D1 is connected to another room
 *********************************************************************/

void Room::setD1(Room *dest){
    dir1 = dest;
}

/*********************************************************************
 ** Function: getD1
 ** Description: gets room D1 ptr
 ** Parameters: none
 ** Pre-Conditions: returns a ptr
 ** Post-Conditions: none
 *********************************************************************/

Room * Room::getD1(){
    return dir1;
}

/*********************************************************************
 ** Function: setD2
 ** Description: sets room D2
 ** Parameters: room pointer
 ** Pre-Conditions: none
 ** Post-Conditions: room's D2 is connected to another room
 *********************************************************************/

void Room::setD2(Room *dest){
    dir2 = dest;
}

/*********************************************************************
 ** Function: getD2
 ** Description: gets room D2 ptr
 ** Parameters: none
 ** Pre-Conditions: returns a ptr
 ** Post-Conditions: none
 *********************************************************************/

Room * Room::getD2(){
    return dir2;
}

/*********************************************************************
 ** Function: setD3
 ** Description: sets room D3
 ** Parameters: room pointer
 ** Pre-Conditions: none
 ** Post-Conditions: room's D3 is connected to another room
 *********************************************************************/

void Room::setD3(Room *dest){
    dir3 = dest;
}

/*********************************************************************
 ** Function: getD3
 ** Description: gets room D3 ptr
 ** Parameters: none
 ** Pre-Conditions: returns a ptr
 ** Post-Conditions: none
 *********************************************************************/

Room * Room::getD3(){
    return dir3;
}

/*********************************************************************
 ** Function: setD4
 ** Description: sets room D4
 ** Parameters: room pointer
 ** Pre-Conditions: none
 ** Post-Conditions: room's D4 is connected to another room
 *********************************************************************/

void Room::setD4(Room *dest){
    dir4 = dest;
}

/*********************************************************************
 ** Function: getD4
 ** Description: gets room D4 ptr
 ** Parameters: none
 ** Pre-Conditions: returns a ptr
 ** Post-Conditions: none
 *********************************************************************/

Room * Room::getD4(){
    return dir4;
}

/*********************************************************************
 ** Function: getJPage
 ** Description: signals whether the room contains a journal page
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: returns a bool
 *********************************************************************/

bool Room::getJPage(){
    std::cout << "getJPage()" << std::endl;
    std::cout << jPage << std::endl;
    return jPage;
}

/*********************************************************************
 ** Function: jPageOff
 ** Description: turns off jPAge flag so only 1 page per room
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: jPage = false
 *********************************************************************/

void Room::jPageOff(){
    jPage = false;
}

