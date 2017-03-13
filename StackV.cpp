#include "StackV.h"
#include <iostream>
#include <vector>
#include <stack>
#include <string.h>

using namespace std;





int Stack::size(){

  return data.size();
}

int Stack::top(){
	int track = 0;
	
	if(data.size() <= 0){
		cout << "Stack is empty!" << endl;
		
		return -1;
		
		}else{
				for(int x = 0; x < data.size()-1; x++){
				track++;
			}
			cout << "Current top of Stack: " << data[track] << endl;
			return data[track]; 
			
			}
		
	}

void Stack::push(int k){
 
	  data.push_back(k);


  }//end block


void Stack::pop(){

	
	if(data.size() <= 0){
		cout << "Stack is emtpy!" << endl;
		
	}else{
		data.pop_back();
		
		
	}
  
  }

void Stack::clear(){
  int loc = 1;
  
  while(loc != data.size()){
		data.pop_back();
    loc++;
  }
}


	


