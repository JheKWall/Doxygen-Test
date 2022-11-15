/**
 * @file Employee.h
 * @author Kenneth Wallace
 * @date 2022-11-14
 * @brief Employee class header file
 * 
 * File containing definitions for all Employee class variables and methods
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H


/**
 * Employee main class, holds basic employee information
 *
 * @class Employee Employee.h "Doxygen-Test/Employee.h"
 * @brief Stores and calculates basic employee information.
 *
 */
class Employee {
 private:
  int ID; //employee ID
  int years; //total years worked
  
 protected:
  double hourlyRate; //employee hourly pay
  float hoursWorked; //employee hours working

 public:

/**
 * Prints all basic employee information.
 *
 * @pre An Employee
 * @return virtual 
 * @post prints all employee info to console.
 * 
 */
  virtual void print();

/**
 * A method that calculates pay by multiplying hourlyRate * hoursWorked.
 *
 * @pre An Employee
 * @return virtual double The Employee's pay.
 * @post 
 * 
 */
  virtual double calculatePay();

/**
 * A method that increments an Employee's years by 1 and increases their hourlyRate by 2%. Also prints a congratulatory statement.
 *
 * @pre A good Employee
 * @return void 
 * @post The given Employee will be given a 2% hourlyRate increase for their continued year of work.
 * 
 */
  void anniversary();

/**
 * Employee class default constructor.
 *
 * @pre An Employee
 * @post An empty Employee will be generated, hollow like the rest of us.
 * 
 */
  Employee();

/**
 * Employee class paramaterized constructor.
 *
 * @param int ID Employee ID
 * @param int years Years Employee has worked
 * @param double hourlyRate Employee Hourly Pay
 * @param float hoursWorked Employee Hours Working
 * @pre An Employee
 * @post An Employee with the given information will be generated.
 * 
 */
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H
