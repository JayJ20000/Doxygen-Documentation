#include "Officer.h"
#include <iostream>

using namespace std;

/**
 * @brief Default constructor for Officer.
 *
 * Initializes the officer's evilness to a default value of 500.
 */
Officer::Officer() {
  evilness = 500;
}

/**
 * @brief Parameterized constructor to initialize an officer with specific data.
 * @param ID Officer's ID
 * @param years Years the officer has worked
 * @param hourlyRate Officer's hourly rate
 * @param hoursWorked Total hours worked by the officer
 * @param evilness The officer's "evilness" factor
 */
Officer::Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness) 
  : Employee(ID, years, hourlyRate, hoursWorked) {
  this->evilness = evilness;
}

/**
 * @brief Prints the officer's information, including the evilness.
 */
void Officer::print() {
  Employee::print();
  cout << "Evilness: " << evilness << endl;
}

/**
 * @brief Calculates the officer's pay.
 * @return The officer's pay, based on the hourly rate and evilness factor.
 */
double Officer::calculatePay() {
  return (hourlyRate + evilness) * hoursWorked;
}
