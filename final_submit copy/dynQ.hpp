/*********************************************************************
 ** Program Filename: dynQ.hpp (Final Assignment)
 ** Author: Terezie Schaller (Tera)
 ** Date: 5 - 30 - 2016
 ** Description: text based adventure game
 ** Input: player choices as int
 ** Output: text/story
 *********************************************************************/

#ifndef dynQ_hpp
#define dynQ_hpp

#include <stdio.h>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <queue>
#include <stdlib.h>


class DynQ{
private:
    class qNode{
        friend class DynQ;
        std::string letter;
        qNode *next;
        qNode *prev;
        qNode (std::string letter1, qNode *next1 = NULL, qNode *prev1 = NULL){
            letter = letter1;
            next = next1;
            prev = prev1;
        }
    };
    
    //track the front and rear of que
    qNode *front;
    qNode *rear;
    
public:
    //constructor and destructor
    DynQ();
    ~DynQ();
    
    //member functions
    void add(std::string); //adds node with timestamp num
    std::string peek();
    void remove();
    bool isEmpty() const;
    void clear();
    int length();
    
    
};

#endif /* dynQ_hpp */
