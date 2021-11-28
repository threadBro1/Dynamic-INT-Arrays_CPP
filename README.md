# Dynamic-INT-Arrays_CPP
Ypu have Dynamic_INTEGER_Arrays. Yes-Yes,there is "vector".Dynamic_Integer_Arrays-Low .h file,for learn C++.

How to use it?

Okey.

#include <iostream>
#include "dynamic_arrays.h"
using namespace std;
  
int main(){
  
  dynamic_INT_array Array;//new instance of the class
  int SIZE = 5; //Set start SIZE array
  int *arr = new int[SIZE]//Create arr and Memory Allocation
  
  Array.FillArray(arr,SIZE);
  /*
    FilArray(You Array,SIZE arr);
    Fill you arr,to random numbers
  */
  
  Array.ShowArray(arr,SIZE);
  /*
    ShowArray(You Array,SIZE arr);
    Show you array: Index   Value   Adress
  */
  
  Array.exchange(arr,SIZE,2,0);
 /*
  exchange(You Array,SIZE arr,value,index); 
  set new value,for set index;
 */
  
  Array.push_back(arr,SIZE,5);
  /*
    push_back(You Array,SIZE arr);
    push back new value;
  */
  
  Array.pop_back(arr,SIZE);
   /*
    pop_back(You Array,SIZE arr);
    delete last value;
  */
  
  Array.push_start(arr,SIZE);
  /*
    push_start(You Array,SIZE arr);
    push new first value;
  */
  
  Array.pop_start(arr,SIZE);
   /*
    pop_start(You Array,SIZE arr);
    delete first value;
  */
  
  Array.sort(arr,SIZE);
  /*
    sort(You Array,SIZE arr);
    Sort you array;
  */
  delete [] arr;//Delete arr from Memory
}
  
