/*********************************************************************
 ** Program Filename: finalScene.hpp (Final Assignment)
 ** Author: Terezie Schaller (Tera)
 ** Date: 5 - 30 - 2016
 ** Description: text based adventure game
 ** Input: player choices as int
 ** Output: text/story
 *********************************************************************/

#ifndef finalScene_hpp
#define finalScene_hpp


#include <stdio.h>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <queue>
#include <stdlib.h>
#include <stdio.h>
#include "room.hpp"

class FinalScene : public Room{
private:
    std::string msg = "The elevator doors open and a wave of blood washes out! As quickly as it appeared, the hallucination vanishes and the blood is gone. Pushing back your fear, you step aboard the elevator. The elevator doors slide open to reveal a horrifying scene. The mother from the pool with the dead eyes hoists her child above her head and tosses him overboard! You are stunned but you know you must act. You grab a lifeguard buoy off the wall and jump overboard after the toddler.";
    
public:
    ~FinalScene();
    void getMsg();
    void special();
    //void menu();
    //Room *toHall();
    bool getJPage();
    void jPageOff();
    
};


#endif /* finalScene_hpp */
