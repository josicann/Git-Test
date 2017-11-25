/* Author: Joshua Cannon
 * File Name: main.cpp
 * Description: Simple program to practice using git for assignment 8 in CSCI 325 Data Structures.
 */

#include<iostream>

using namespace std;

/******FORWARD DECLARATIONS***********/

int sum(int n);//A method to sum all integer values from 1 to a number provided by user
int product(int n);//A method to multiply  all integer values from 1 to a number provided by user

/************Driver************************/

int main() {
  int user_int;

  cout << "Please enter an integer value: ";
  cin >> user_int;

  cout << "The sum of all integers from 1 to " << user_int << " is: " << sum(user_int) << endl;
  cout << "The product of all integers from 1 " << user_int << " is: " << product(user_int) << endl;
}

/*********Function Implementations********/

int sum(int n) {
  int nsum = 0;
  
  for(int i = 1; i < (n + 1); i++) {
    nsum += i;
  }
  return nsum;
}

int product(int n) {
  int nproduct = 1;
  
  for(int i = 1; i < (n + 1); i++) {
    nproduct *= i;
  }
  return nproduct;
}
