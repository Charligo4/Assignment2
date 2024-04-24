# include <iostream>  
#include <string>    
using namespace std;


int main() {
  // Dynamically allocatedan integer and string 
  int * dynamicInteger = new int;  
  string * dynamicString = new string;
   // inputting values of dynamically allocated int and string.
  cout<<" enter the value of dynamically allocated interger"<<endl;
  cin >> *dynamicInteger;

  cout<<" enter the value of dynamically allocated string "<<endl;
  cin>>* dynamicString ;

 
 cout << "Dynamically allocated integer: " << * dynamicInteger << endl;  
  
  cout << "Dynamically allocated string: " << * dynamicString << endl;  

  // Deallocate the memory
  delete dynamicInteger; 
  delete dynamicString;  

  return 0;  
}