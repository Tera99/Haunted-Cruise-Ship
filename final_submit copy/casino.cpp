/*********************************************************************
 ** Program Filename: casino.cpp (Final Assignment)
 ** Author: Terezie Schaller (Tera)
 ** Date: 5 - 30 - 2016
 ** Description: text based adventure game
 ** Input: player choices as int
 ** Output: text/story
 *********************************************************************/

#include "casino.hpp"

Casino::~Casino(){
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

void Casino::getMsg(){
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

void Casino::special(){
    std::cout << "You approach the one eyed man at the card table. You are wary, but he does not seem threatening. He invites you to sit on a stool" << std::endl;
    diceGame();
}

/*********************************************************************
 ** Function: getJPage
 ** Description: signals whether the room contains a journal page
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: returns a bool
 *********************************************************************/

bool Casino::getJPage(){
    return jPage;
}

/*********************************************************************
 ** Function: jPageOff
 ** Description: turns off jPAge flag so only 1 page per room
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: jPage = false
 *********************************************************************/

void Casino::jPageOff(){
    jPage = false;
}

/*********************************************************************
 ** Function: diceGame
 ** Description: runs a chance based game in the casino
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: none
 *********************************************************************/

void Casino::diceGame(){
    bool gameOn = true;
    
    int user;
    std::cout << "The one eyed croupier cocks his head and looks at you with his good eye. 'You are almost there. Just hang on!' He says, 'Let's play a little game. If you roll a six, then I will let you through. Enter 1 to roll or 2 to quit.' " <<std::endl;
    std::cin >> user;
    while (gameOn==true){
        
        if (user==1){
            int roll = rand() % 6 + 1;
            std::cout << "You rolled: " << roll << std::endl;
            if(roll==6){
                std::cout << "You win!" << std::endl;
                std::cout << "You can exit the casino in direction 1" << std::endl;
                gameOn = false;
            } else {
                std::cout << "Better luck next time! Don't give up yet!" <<std::endl;
                std::cout << "Enter 1 to play again or 2 to quit." << std::endl;
                std::cin >> user;
            }
        }else if (user==2){
            std::cout << "Come back again, soon! You can exit in Direction 1." << std::endl;
            gameOn = false;
        }
        
    }
    
}
