#include <iostream>
using namespace std;

#include "student.h"

int main(int argc, char* argv[]) {
 student a[3];
  a[0].set_name("Bright");
   a[1].set_name("Michale");
   a[2].set_name("Mason");
  a[0].print_all();
  student *p;
  p=&a[1];
  p->print_all();
  (p+1)->set_age(15);
  //(*(p+1)).set_age(15);
  p++;
  p->print_all();
  
  
  }
  
  


