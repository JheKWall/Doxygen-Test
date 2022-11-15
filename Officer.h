/**
 * @file Officer.h
 * @author Kenneth Wallace
 * @date 2022-11-14
 * @brief Officer class header file
 * 
 * Contains the definitions for the Officer class's methods and variables.
 */

#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"


/**
 * Derived Employee class for Officer employees.
 *
 * @class Officer Officer.h "Doxygen-Test/Officer.h"
 * @brief Stores and calculates Officer information.
 *
 */
class Officer : public Employee {
 private:
  double evilness; //Level of Evilness
  
 public:

/**
 * Prints all basic employee information alongside Officer-specific information.
 *
 * @pre An Officer
 * @return void 
 * @post Prints all Officer information
 * 
 */
  void print();

/**
 * Calculates Officer pay: (hourlyRate * hoursWorked + evilness)
 *
 * @pre An Officer
 * @return double The Officer's pay.
 * @post 
 * 
 */
  double calculatePay();

/**
 * Officer class default constructor.
 *
 * @pre An Officer
 * @post Creates an empty Officer, not that different from a complete one.
 * 
 */
  Officer();

/**
 * Officer class paramaterized constructor.
 *
 * @param int ID Officer ID
 * @param int years Officer's Years Worked
 * @param double hourlyRate Officer's Hourly Pay
 * @param float hoursWorked Officer's Hours Working
 * @param double evilness Officer's Evilness
 * @pre An Officer
 * @post An Officer with the given information will be created.
 * 
 */
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H
