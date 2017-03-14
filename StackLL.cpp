#include "StackLL.h"
#include <iostream>
#include <string.h>

//Command:  make stackll && make run-stackll

using namespace std;


class Stack::Node //self-referential Node class
{
	public:
	   int data = 0;
	   Node* link = nullptr;
	   //link is a data member which is a pointer 
	   //to an object of the same type (i.e. Node)
	
	};//end Node class definition (can only be seen by the List class)


void Stack::push(int k){
	
	Node* newPtr = new Node{k};
	char ch = '\0';
	
	
		newPtr -> link = frontPtr;
		frontPtr = newPtr;
		
		//cout << frontPtr -> data << endl;
	//	ch = frontPtr -> data;
	//	cout << ch << endl; //Check to see if the elements are being linked
		
		
		
		num_elements++; //Incrementing num_elements crashes the program (Nothing to do with the for or if statement)
	
	}
	
int Stack::size(){
	
	return num_elements;
	
	}
	
		
int Stack::pop(){
	Node* delPtr = frontPtr;
	int data2 = 0;

		frontPtr = frontPtr -> link;
		data2 = delPtr -> data;
		delete delPtr;
		num_elements--;
		
			return 0;
	}


	
int Stack::top(){
	
	Node* trackPtr = frontPtr;

		return trackPtr -> data;
	}

void Stack::clear(){
	while(num_elements != 0){
		pop();
		
		num_elements--;
		}
	
	
	}
	
Stack::~Stack()
{/*
    while(num_elements > 0){
      pop();
       
      num_elements--;
  }*/
}
	
