//Implementing a Stack ADT with a vector

#ifndef STACK_H
#define STACK_H

#include <vector>
using namespace std;

class Stack
{
private:
	  int first = 0;
      vector<int> data;
  

public:

    // No default c'tor needs to be declared 
    // The vector "knows" how to initialize itself


   // No d'tor needs to be declared
   // The vector "knows" how to destroy itself

   int size();

   void push(int);

   void pop();

   int top();

   void clear();

};

#endif
