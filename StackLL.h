//With a (raw) linked-list 
#include <iostream>
using namespace std;
#ifndef STACK_H
#define STACK_H

class Stack
{
private:

   class Node;

   Node* frontPtr = nullptr;
   int num_elements = 0;

public:

    // No default c'tor needs to be declared 
    // We initialized the attributes above

   ~Stack(); //d'tor

   int size();

   void push(int);

   int pop();

   int top();

   void clear();

};

#endif
