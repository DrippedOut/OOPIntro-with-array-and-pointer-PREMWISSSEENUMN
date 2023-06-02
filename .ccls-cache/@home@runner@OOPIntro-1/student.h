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
      //  student(int,string); //constructor
        void set_name(string);
		    void print_name();
        void set_age(int);
        int get_age(){ return age;}
       void set_all(string,int,float=0);
       void print_all();
       
};
void student::set_all(string n,int a,float s){
  name=n;
  age=a;
  score=s;
}
void student::print_all(){
 		cout<<"---Name:"<<name<<"---"<<endl;
   cout<<"Age:"<<age<<endl;
  cout<<"score:"<<score<<endl;
}

void student::set_age(int x){
 if(x>50|| x<10) cout<<"Incorrect age";
   else age=x;
}
void student::print_name(){
 		cout<<"Name:"<<name<<endl;
}
void student::set_name(string n){
  name=n;
  age=0;
  score=0;
}
#endif