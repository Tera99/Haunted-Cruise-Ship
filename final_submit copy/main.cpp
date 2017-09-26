/*********************************************************************
 ** Program Filename: main.cpp (Final Assignment)
 ** Author: Terezie Schaller (Tera)
 ** Date: 5 - 30 - 2016
 ** Description: text based adventure game
 ** Input: player choices as int
 ** Output: text/story
 *********************************************************************/


#include <iostream>
#include "room.hpp"
#include "cabin.hpp"
#include "hall.hpp"
#include "pool.hpp"
#include "lounge.hpp"
#include "buffet.hpp"
#include "theater.hpp"
#include "gym.hpp"
#include "casino.hpp"
#include "dynQ.hpp"
#include "finalScene.hpp"

//player pointer
Room *player;

//Journal
DynQ pJournal;
DynQ lostPages;

//Journal entries
std::string pg1 = "~~ You see a page from the journal. It says,'Page 1: My wedding was so amazing. I can't believe we are married.' It seems to be written in your handwriting, or at least what you think is your handwriting";
std::string pg2 = "~~ Another page from the journal catches your eye. 'Page 2: When M. popped the question it was the best day of my life. I cannot wait for the honeymoon.' M? Who is M, you wonder. That must be your new husband. ";
std::string pg3 = "~~ In the corner, you find the next page in your journal. 'Page 3: Our software company has really taken off! Our success has blown my mind. Who would have guessed that there was such an enormous demand for text based games and traffic intersection simulators? I can't believe how rich we are going to be! ";
std::string pg4 = "~~ The final missing page is lying at your feet: 'Page 4: M has been acting odd all week. He seems nervous and won't look me in the eye. I wonder what is bothering him? I am going to take a bath and hoepfully figure out something to cheer him up.' Something is very disturbing and frighteningly familiar about that last sentence. Suddenly, images of two hands forcing you beneath the water forms in your mind. Through the watery haze a face with a hawk like nose, dark eyes, and wild hair looks down at you. You cannot shake the feeling of dread. You know you are drowning! You try not to panic. Your instincts tell you that you should talk to the one eyed man in the casino!";

//final scene
Room *r9;

//timer: sinking queue
DynQ sinking;
std::string s1 = "** An ominous voice over the intercom announces: 'I should have finished the job when I had the chance! But no matter. You are done for.' The water in the hallway has risen significantly. ";
std::string s2 = "** You see a mother and a young child. She is reprimanding the child harshly, but you cannot tell for what. When you call out to them, the mother looks up at you with an expression of surprise. She grabs the child roughly by the arm and drags him into a nearby cabin, locking the door behind her.";
std::string s3 = "** The voice over the intercom growls out, 'You will never make it! Just give up! Stop fighting this!' the voice sounds familiar, but you cannot quite place it.";
std::string s4 = "As you return to the pool, you see the woman and the child again. You watch in shock as she raises her hand and slaps the child. She looks at you, but her eyes are dead and souless! You are frozen with fear as she drags the child behind a barrier.";
std::string s5 = "** The ship rocks violently. Water sloshes about the room.";
std::string s6 = "** The water is up to your knees now.";
std::string s7 = "** Only the emergancy lights are on now. They cast a red glow over the violently sloshing water.";
std::string s8 = "** The ship lists hard in the other direction. The water is waist high, and you have to fight through floating debris";
std::string s9 = "** The water is chest high and you can barely see in the dark!";
std::string s10 = "** You struggle for breath as the water begins to close over your head!";


//declare functions
void menu1();
void menu2();
bool gameLoop1(int);
Room *move(int);
void readJournal();
void removeRoom();
void addRoom();

int main() {
    //seed random generator ONCE
    unsigned seed;
    seed = time(0);
    srand(seed);
    
    //Journal
    
    lostPages.add(pg1);
    lostPages.add(pg2);
    lostPages.add(pg3);
    lostPages.add(pg4);
    
    //sinking timer
    
    sinking.add(s1);
    sinking.add(s2);
    sinking.add(s3);
    sinking.add(s4);
    sinking.add(s5);
    sinking.add(s6);
    sinking.add(s7);
    sinking.add(s8);
    sinking.add(s9);
    sinking.add(s10);
    
    //initialize rooms and pointers
    
    //dynamic cabin so it can be deleted
    Room *r1;
    r1 = new Cabin;
    
    //static rooms
    Hall myHall;
    Room *r2;
    r2 = &myHall;
    
    Pool myPool;
    Room *r3;
    r3 = &myPool;
    
    Lounge myLounge;
    Room *r4;
    r4 = &myLounge;
    
    Buffet myBuffet;
    Room *r5;
    r5 = &myBuffet;
    
    Theater myTheater;
    Room *r6;
    r6 = &myTheater;
    
    Gym myGym;
    Room *r7;
    r7 = &myGym;
    
    Casino myCasino;
    Room *r8;
    r8 = &myCasino;

    
    //connect pointers to rooms
    
    r1->setD1(r2); //cabin to hall
    
    myHall.setD1(r3); //to Pool
    myHall.setD2(r1); //to Cabin
    
    myPool.setD1(r4); //to lounge
    myPool.setD2(r5); //to buffet
    myPool.setD3(r6); //to theater
    myPool.setD4(r7); //to gym
    
    myLounge.setD1(r8); //to casino
    myBuffet.setD1(r8); //to casino
    myTheater.setD1(r8); //to casino
    myGym.setD1(r8); //to casino
    
    myCasino.setD1(r3); //to pool
    
    //Begin game
    std::cout << "You awake feeling confused and groggy, and you have a pounding headache." << std::endl;
    std::cout << "You cannot remember who you are, or how you got here. Dazed you look around." << std::endl;
    std::cout << "Next to the bed is a tattered leather journal. You pick it up. It seems very familiar to you." << std::endl;
    
    
    //starting in Cabin
    player = r1;
    player->getMsg();
    
    //game loop # 1
    bool myGame;
    do {
        
        int choice1 = 0;
        menu1();
        
        //validate input
        while (true)
        {
            std::cin >> choice1;
            
            if (std::cin && choice1 > 0 && choice1 < 4)
                break;
            
            std::cin.clear();
            std::cin.ignore( 1000, '\n' );
            std::cout << "Try again. Please enter a positive integer from 1 to 3." << std::endl;
        }
        
        //main game loop
        myGame = gameLoop1(choice1);
        
        //remove a room
        //if player explores hallway, then remove cabin
        if (choice1==2 && player==r2 && r2->getD2()==r1){
           
            delete r2->getD2(); //delete dynamically allocated room
            r2->setD2(NULL);    //set hall direction 2 to NULL
            std::cout << "The cabin door closes and locks behind you!" << std::endl;
            
            //add room
            //final scene
        } else if (player==r8 && choice1==2 && lostPages.isEmpty()==true){
            addRoom();
        } else if (player==r9){ //exit loop for final scene
            myGame = false;
            choice1 = 4;
        }
        
        //sinking timer ticks (reads out messages) if player enters pool or explores pool
        if (player == r3){
            std::cout << sinking.peek() << std::endl;
            sinking.remove();
        }
        
        if (sinking.isEmpty()==true){
            choice1 = 4;
            myGame = false;
        }
        
    } while(myGame==true);
    
    if (player==r9){
        
        //some kind of ending here
        std::cout << "As you hit the water, you feel yourself jolted awake! You open your eyes to find yourself lying in a hospital bed. Faces swim into view. The first face has a patch over his eye and looks at you intently with his good eye. He is wearing scrubs and a white coat. His badge identifies him as Dr. Crowder. 'I knew you could make it!' He says. Shockingly, the other two people in the room are the crazed ship captain and the evil woman, but suddenly you recognize them as your mother in law and your new husband! The events from you journal rush back into your head, and your brain is able to stitch the events back together. Your new husband tried to drown you! You yell, 'MURDERER! MURDERER!' " <<std::endl;
        
    }

    
    return 0;
}

/*********************************************************************
 ** Function: menu1
 ** Description: displays the move/explore/quit menu
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: none
 *********************************************************************/

void menu1(){
    std::cout << "***********************" << std::endl;
    std::cout << "What would you like to do? Enter an integer + ENTER to make your choice." << std::endl;
    std::cout << "1 - Move to a different room." << std::endl;
    std::cout << "2 - Explore this room." << std::endl;
    std::cout << "3 - Quit." << std::endl;
    std::cout << "***********************" << std::endl;
    
}

/*********************************************************************
 ** Function: menu2
 ** Description: displays the direction menu
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: none
 *********************************************************************/

void menu2(){
    std::cout << "***********************" << std::endl;
    std::cout << "What direction would you like to go? Enter an integer + ENTER to make your choice." << std::endl;
    std::cout << "Direction 1" << std::endl;
    std::cout << "Direction 2" << std::endl;
    std::cout << "Direction 3" << std::endl;
    std::cout << "Direction 4" << std::endl;
    std::cout << "***********************" << std::endl;
    
}

/*********************************************************************
 ** Function: gameLoop1
 ** Description: turns the room structures into a playable game; moves the 
 ** player pointer through the different rooms and activates special 
 ** functions if the player decides to explore.
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: none
 *********************************************************************/

bool gameLoop1(int user){
    bool game = true;
    
    if (user == 2){
        
        //calls special() to explore the room
        std::cout << "You decide to explore." << std::endl;
        player->special();
        
        //reveals journal page if room is supposed to have a page
        //turns off after 1 page/room is found
        if (player->getJPage()==true && lostPages.isEmpty()==false){
            std::cout << "You found a journal page!" << std::endl;
            std::cout << lostPages.peek() << std::endl;
            pJournal.add(lostPages.peek());
            lostPages.remove();
            player->jPageOff();
            std::cout << "Pages to find: " << lostPages.length() << std::endl;
        }
        
        //moves player to new room if player chooses to move
    } else if ( user == 1){
        std::cout << "You decide to move." << std::endl;
        menu2();
        int direction;
        
        //validate input
        while (true)
        {
            std::cin >> direction;
            
            if (std::cin && direction > 0 && direction < 5)
                break;
            
            std::cin.clear();
            std::cin.ignore( 1000, '\n' );
            std::cout << "Try again. Please enter a positive integer from 1 to 4." << std::endl;
        }
        
        player = move(direction);
        player->getMsg();
    
    //allows player to quit if they get bored or timer runs out
    } else if (user==3){
        std::cout << "Water closes in over your head and everything goes dark!" << std::endl;
        game = false;
    }
    
    return game;
    
}

/*********************************************************************
 ** Function: move
 ** Description: returns the appropriate room pointer
 ** Parameters: int
 ** Pre-Conditions: none
 ** Post-Conditions: none
 *********************************************************************/

Room *move(int dir){
    
    switch (dir) {
            
        case 1 :
            
            return player->getD1();
            break;
            
        case 2 :
            
            if (player->getD2()==NULL){
                std::cout << "Ouch! You bumped into a wall." << std::endl;
                return player;
                break;
            } else {
                return player->getD2();
                break;
            }
            
        case 3 :
            
            if (player->getD3()==NULL){
                std::cout << "Ouch! You bumped into a wall." << std::endl;
                return player;
                break;
            } else {
                return player->getD3();
                break;
            }
            
        case 4 :
            
            if (player->getD4()==NULL){
                std::cout << "Ouch! You bumped into a wall." << std::endl;
                return player;
                break;
            } else {
                return player->getD4();
                break;
            }
            
            
        default :
            // Process for all other cases.
            std::cout << "Error. You cannot go that way. Go Direction 1 instead" << std::endl;
            return player->getD1();
            
    }
}

/*********************************************************************
 ** Function: addRoom
 ** Description: adds new room for final scene
 ** Parameters: none
 ** Pre-Conditions: room pointer, room with NULL ptr at direction 2
 ** Post-Conditions: room is added
 *********************************************************************/

void addRoom(){
    std::cout << "Adding room" << std::endl;
    r9 = new FinalScene; // create new room
    player->setD2(r9); //connect direction 2 to new room
    std::cout << "In direction 2, you see an elevator that was not there before!" << std::endl;
    
}
