#include <iostream>
using namespace std;

#include "student.h"

int main(int argc, char* argv[]) {
  student s1,s2;
  student a[10];
 // s1.name="PUN";  // ERROR, it is in private
   s1.set_name("Pun");  	//s1.set_age(20); 
		s2.set_name("Joe");
		
    s1.print_name();
    s2.print_name(); 
   

    s1.set_age(70); 
    s2.set_age(27); 
		
    s1.get_age()>s2.get_age() ?
    s1.print_name(): s2.print_name();
  
   if( s1.get_age()>s2.get_age() )  s1.print_name();
   else  s2.print_name(); 
  
      cout <<"is older"<<endl;

   s1.set_all("lalida",20,100);
  s1.print_all();
  }
  
  


