/**
 * @file Supervisor.h
 * @author Kenneth Wallace
 * @date 2022-11-14
 * @brief Header file for the Supervisor Class
 * 
 * Contains definitions for the Supervisor class's methods and variables.
 */

#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"


/**
 * Derived Employee class for Supervisor employees.
 *
 * @class Supervisor Supervisor.h "Doxygen-Test/Supervisor.h"
 * @brief Stores and calculates Supervisor information.
 *
 */
class Supervisor : public Employee {
 private:
  int numSupervised; //Number of Employees Supervised
  
 public:

/**
 * Prints all basic employee information alongside Supervisor-specific information.
 *
 * @pre A Supervisor
 * @return void 
 * @post Prints all Supervisor information to console.
 * 
 */
  void print();

/**
 * Calculates pay: (hourlyRate * hoursWorked + numSupervised / 100)
 *
 * @pre A Supervisor
 * @return double The Supervisor's Pay
 * @post 
 * 
 */
  double calculatePay();

/**
 * Default constructor for the Supervisor class.
 *
 * @pre A Supervisor
 * @post An empty Supervisor will be created.
 * 
 */
  Supervisor();

/**
 * Paramaterized constructor for the Supervisor class.
 *
 * @param int ID Supervisor's ID
 * @param int years Supervisor's Years Worked
 * @param double hourlyRate Supervisor's Hourly Pay
 * @param float hoursWorked Supervisor's Work Hours
 * @param int numSupervised Supervisor's # of employees supervised
 * @pre A Supervisor
 * @post A Supervisor will be created with the given information.
 * 
 */
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H
