/**
 * @file main.cpp
 * @brief This file contains the main driver for testing the Employee, Supervisor, and Officer classes.
 *
 * The main function demonstrates the usage of different constructors for the Employee, Supervisor, and Officer classes.
 */

#include <iostream>
#include "Employee.h"
#include "Supervisor.h"
#include "Officer.h"

using namespace std;

/**
 * @brief Runs a series of tests for an Employee.
 *
 * This function takes an Employee object by reference and tests its functionality, 
 * including printing, calculating pay, and testing the anniversary method.
 * 
 * @param e The Employee object to be tested.
 */
void runEmployeeTests(Employee &e);

int main() {
  // Test default Employee constructor
  Employee defaultE;
  cout << "Testing Employee default constructor:" << endl;
  runEmployeeTests(defaultE);

  cout << endl << endl;

  // Test parameterized Employee constructor
  // ID: 1248, years: 2, hourlyRate: 15.23, hoursWorked: 3
  Employee parameterizedE(1248, 2, 15.23, 3);
  cout << "Testing Employee parameterized constructor:" << endl;
  runEmployeeTests(parameterizedE);

  cout << endl << endl;
  
  // Test default Supervisor constructor
  Supervisor defaultS;
  cout << "Testing Supervisor default constructor:" << endl;
  runEmployeeTests(defaultS);

  cout << endl << endl;

  // Test parameterized Supervisor constructor
  // ID: 422, years: 9, hourlyRate: 55.44, hoursWorked: 20, numSupervised 52
  cout << "Testing Supervisor parameterized constructor:" << endl;
  Supervisor parameterizedS(422, 9, 55.44, 20, 52);
  runEmployeeTests(parameterizedS);

  cout << endl << endl;

  // Test default Officer constructor
  Officer defaultO;
  cout << "Testing Officer default constructor:" << endl;
  runEmployeeTests(defaultO);

  cout << endl << endl;

  // Test parameterized Officer constructor
  // ID: 2, years = 94, hourlyRate: 10.859, hoursWorked: 2, evilness 9000.1
  Officer parameterizedO(2, 94, 10.859, 2, 9000.1);
  cout << "Testing Officer parameterized constructor:" << endl;
  runEmployeeTests(parameterizedO);
  
  return 0;
}

/**
 * @brief Executes a set of tests on the provided Employee object.
 * 
 * This function tests the following methods of the Employee class:
 * - `print()`: Outputs the employee details.
 * - `calculatePay()`: Calculates and outputs the employee's pay.
 * - `anniversary()`: Increments the employee's years worked and updates the hourly rate.
 * 
 * @param e The Employee object to be tested.
 */
void runEmployeeTests(Employee &e) {
  
  cout << "Initial print():" << endl;
  e.print();
  cout << "Calculated Pay: " << e.calculatePay() << endl;
  cout << "Anniversary Test: ";
  e.anniversary();
  cout << "Final print():" << endl;
  e.print();
}
