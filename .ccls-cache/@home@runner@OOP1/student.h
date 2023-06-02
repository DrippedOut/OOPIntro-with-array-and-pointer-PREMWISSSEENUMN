#ifndef student_h
#define student_h
#include <iostream>
using namespace std;
/* In the C Programming Language, the #ifndef directive allows for conditional compilation. The preprocessor determines if the provided macro does not exist before including the subsequent code in the compilation process.
ref:https://www.techonthenet.com/c_language/directives/ifndef.php
*/

class student{
   private: string name;
            int age;
            float score;
   public: 
        student(int,string); //constructor
        void set_name(string);
		    void print_name();
        void set_age(int);
        int get_age();
        void set_float(float s){s>100?score=100:score=s;  }
        float get_float(){ return score;}
        void print_all(); // new function --> print all details
        void set_all(string,int,float);
};

student::student(int a,string n){
  age=a;
  name=n;
}
void student::print_all(){// new function --> print all details
         print_name();
         cout<<"age:"<<age<<" score:"<<score <<endl;
}

void student::set_all(string n,int a,float s){
  
   set_age(a);
   set_name(n);
   set_float(s);
   
}
void student::print_name(){
 		cout<<"Name:"<<name<<endl;
}
void student::set_name(string n){
  name=n;
}
int student::get_age(){ return age;}

void student::set_age(int n){ age=n;}
#endif