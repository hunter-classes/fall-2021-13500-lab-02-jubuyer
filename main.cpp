/*
Author: Jubayer Ahmed
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab02-B

Utilizes the print_interval function prototyped and created in funcs.h
and funcs.cpp respectively to print the interval of numbers given the
lower (L) and upper (U) bounds. The program will print all numbers x, for
L <= x < U.
*/

#include <iostream>
#include "funcs.h"

int main () {
  print_interval(1, 10);
  std::cout << "\n";
  print_interval(-6, 6);
  std::cout << "\n";
  print_interval(100,114);
  std::cout << std::endl;

  return 0;
}
