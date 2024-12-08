#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"

/**
 * @class Officer
 * @brief Represents an officer, which is a type of employee with an additional "evilness" factor.
 *
 * The Officer class inherits from the Employee class and adds an attribute 
 * called "evilness," which affects the officer's pay.
 */
class Officer : public Employee {
 private:
  double evilness; ///< The "evilness" factor that influences the officer's pay

 public:
  /**
   * @brief Prints the officer's information, including the evilness.
   */
  void print();

  /**
   * @brief Calculates the officer's pay.
   * @return The calculated pay considering both hourly rate and evilness.
   */
  double calculatePay();

  /**
   * @brief Default constructor for Officer.
   */
  Officer();

  /**
   * @brief Parameterized constructor to initialize an officer with specific data.
   * @param ID Officer's ID
   * @param years Years the officer has worked
   * @param hourlyRate Officer's hourly rate
   * @param hoursWorked Total hours worked by the officer
   * @param evilness The officer's "evilness" factor
   */
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H
