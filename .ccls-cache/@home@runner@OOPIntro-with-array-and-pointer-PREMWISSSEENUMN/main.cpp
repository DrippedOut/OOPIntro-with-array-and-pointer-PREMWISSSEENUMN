#include <iostream>
using namespace std;

#include "student.h"

// argc should be always be in [multiple of 3] + 1(./student)
int main(int argc, char *argv[]) {
  int n = (argc - 1) / 3; // # of students
  student *pt_std =
      new student[n]; // Declare pointer to an array size n of student objects

  //./student monkey 20 3.5 Art 15 2.5
  // Input: must be 3 for every student {*name*, *age*, *score*}

  float highest_score = 0.0;
  
  int i;
  for (i = 1; i < argc; i += 3) {
    (*pt_std).set_all(
      argv[i], // name
      atoi(argv[i + 1]), // age
      atof(argv[i + 2])); // score

    if(pt_std->get_score() > highest_score){
      highest_score = (*pt_std).get_score();
    }

    pt_std++; // next student
  }

  // Move the pointer back to start
  pt_std -= n;
  
  // LOOP: Print student info
  for (i = 0; i < n; i++) {
    
    // (*(pt_std+i)).print_all(); <-- Alt.
    // *(pt_std+i)->print_all(); <-- Alt.1
    // pt_std[i].print_all() <-- Alt. 2
    
    pt_std->print_all();
    pt_std++;
  }

  // Move the pointer back to start
  pt_std -= n;

  // Assignment 5 :: Print only student(s) with the highest score

  cout << "\nStudents with the highest score: " << endl;
  
  for(i=0;i<n;i++){  
    if(pt_std->get_score() == highest_score) {
      pt_std->print_all();
    }
    pt_std++;
  }  

  // Move the pointer back to start
  pt_std -= n;
  
  delete[] pt_std;
}
