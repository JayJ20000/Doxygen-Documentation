/**
 *  @file Employee.cpp
 *  @author Jalen Jones
 *  @date 2024-12-06
 *  @brief Class for initializing employee members
 *
 *  Employee class used to initialize variables for the empoyee and anniversary
 */

#include "Employee.h"
#include <iostream>

using namespace std;

//default constructor to initialize all member variables
Employee::Employee() {
  ID = years = hoursWorked = hourlyRate = -1;
}

//Method to initialize all pointers in the header to variables included in the parameters
Employee::Employee(int ID, int years, double hourlyRate, float hoursWorked) {
  this->ID = ID;
  this->years = years;
  this->hourlyRate = hourlyRate;
  this->hoursWorked = hoursWorked;
}

//Print method to output the all work information for the employee
void Employee::print() {
  cout << "Printing information for employee " << ID << ":\n Years Employed: " << years
       << "\n Hourly Rate: " << hourlyRate << "\n Hours Worked: " << hoursWorked
       << endl;
}

//FUnction used to calculate the years worked for the employee
void Employee::anniversary() {
  years++;
  hourlyRate = hourlyRate + hourlyRate * .002;
  cout << "Congratulations to employee " << ID << " on " << years << " year(s) at company!"
       << endl;
}

//Function for calculating the pay for the employee
double Employee::calculatePay() {
  return hourlyRate * hoursWorked;
}

