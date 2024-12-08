#ifndef EMPLOYEE_H
#define EMPLOYEE_H

/**
 * @class Employee
 * @brief Represents a generic employee.
 *
 */
class Employee {
 private:
  int ID; /// Employee ID
  int years; /// Years employed

 protected:
  double hourlyRate; /// Employee's hourly wage
  float hoursWorked; /// Hours worked in the current period

 public:
  /**
   * @brief Prints the employee's information.
   */
  virtual void print();

  /**
   * @brief Calculates the employee's pay.
   * @return The calculated pay.
   */
  virtual double calculatePay();

  /**
   * @brief Increases the years of service and applies a raise to the hourly rate.
   */
  void anniversary();

  /**
   * @brief Default constructor.
   */
  Employee();

  /**
   * @brief Parameterized constructor to initialize an employee with given data.
   * @param ID Employee ID
   * @param years Years the employee has worked
   * @param hourlyRate Employee's hourly rate
   * @param hoursWorked Total hours worked by the employee
   */
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H
