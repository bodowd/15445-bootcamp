/**
 * @file references.cpp
 * @author Abigale Kim (abigalek)
 * @brief Tutorial code for references.
 */

// A reference in C++ is a method of creating an alias to a variable, where
// these aliases refer to the same data in memory. References are useful for
// keeping track of state, passing arguments into functions, and for general
// performance improvements. In general, it is important to understand
// references to do well in this class.

// Includes std::cout (printing) for demo purposes.
#include <iostream>

// A function that takes an int reference and adds 3 to it.
void add_three(int &a) { a = a + 3; }

int main() {
  // Take this expression. Note that b has type int& (int reference),
  // since it is a reference to a. This means that a and b both refer to the
  // same data. You can declare references by setting your variables type via
  // the single ampersand syntax.
  int a = 10;
  int &b = a;

  // As stated, if we try to print b, we will get 10.
  std::cout << "a should be 10: " << a << std::endl;
  std::cout << "b should be 10: " << b << std::endl;

  // References can also be passed into functions. Take the function add_three,
  // which takes in an int reference and adds 3 to it. If we call this function,
  // on a, since a is being taken as a reference, then a's value in the caller
  // context will change value.
  add_three(a);
  std::cout << "After add_three on a..." << std::endl;
  std::cout << "a should be 13: " << a << std::endl; // a is now 13
  std::cout << "b should be 13: " << b << std::endl; // b is now 13

  add_three(b);
  std::cout << "After add_three on b..." << std::endl;
  std::cout << "a should be 16: " << a << std::endl;
  std::cout << "b should be 16: " << b << std::endl;

  return 0;
}
