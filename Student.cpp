#include "Student.h"
#include <iostream>
#include <cstring>
// Assign studentId and name
Student::assignDetails(int no, char name[]) {
  studentID = no;
  strcpy(studentName, name);
}

// Display StudentId and Name
Student::display() {
  cout<<"Student ID: "<<studentID<<endl;

  cout<<"Student name: "<<studentName<<endl;
}
