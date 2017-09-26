/*********************************************************************
 ** Program Filename: dynQ.cpp (Final Assignment)
 ** Author: Terezie Schaller (Tera)
 ** Date: 5 - 30 - 2016
 ** Description: text based adventure game
 ** Input: player choices as int
 ** Output: text/story
 *********************************************************************/

#include "dynQ.hpp"

/*************************
 **constructor
 *************************/

DynQ::DynQ(){
    front = NULL;
    rear = NULL;
}

/*************************
 **destructor
 ************************/

DynQ::~DynQ(){
    std::cout << "This is the destructor" << std::endl;
    clear();
}

/************************
 **Function: add
 **Description: inserts the value int num
 **at the rear of the queue
 **Parameters: int num is the timestamp
 ************************/

void DynQ::add(std::string page){
    if (isEmpty()){
        front = new qNode(page);
        rear = front;
    } else {
        rear->next = new qNode(page); //create new node at end with timestamp num
        rear->next->prev = rear; //hook up prev pointer
        rear = rear->next; //move rear pointer to the end
    }
}

/*************************
 **Function: peek()
 **Description gives the value of the
 **first element
 **parameters: none
 ************************/

std::string DynQ::peek(){
    if (isEmpty()){
        std::cout << "The queue is empty" << std::endl;
        exit(1);
    } else {
        return front->letter; //return value in first node
    }
}

/**************************
 **Function: remove
 **Description: removes the value at the
 **front of the queue
 **Parameters: none
 **************************/

void DynQ::remove(){
    qNode *temp;
    if (isEmpty()){
        std::cout << "The queue is empty" << std::endl;
        exit(1);
    } else {
        temp = front; //set temp pointer to front node
        front->prev = NULL; //set prev pointer to NULL
        delete front->prev; //remove prev pointer
        front = front->next; //move front pointer to new start of queue
        delete temp; //delete old first node
        
    }
}

/***************************
 **function: isEmpty
 **description: returns true if queue is empty
 **parameters: none
 **************************/

bool DynQ::isEmpty() const{
    if (front == NULL)
        return true;
    else
        return false;
}

/***************************
 **function: clear
 **deques all elements in the queue
 ****************************/

void DynQ::clear(){
    while(!isEmpty())
        remove();
}

int DynQ::length(){
    int n;
    if (isEmpty()){
        n = 0;
    } else {
        n = 1;
        qNode *curr = front;
        
        while (curr != rear){
            n++;
            curr = curr -> next;
        }
        
    }
    
    return n;
}











