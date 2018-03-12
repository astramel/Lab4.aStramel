/* File: VectorDriver.cpp
 * Athr: Dimitri Zarzhitsky
 * Date: October 16, 2002
 *
 * Desc: provides the basic framework and examples for an introduction to
 *       the STL::vector, iterators, and the algorithms facilities.
 */
typedef unsigned long ulong;

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

void fill_vector(vector<short> &data) {
  for (ulong i=0; i<data.size(); i++) {
    data.at(i) = i;
  }
}

void print(const vector<short> &data) {
  if (data.empty()) {
    cout << "<empty>";
  } else {
    cout << "<" << data.at(0);
    for (ulong i=1; i<data.size(); i++) {
      cout << ", " << data.at(i);
    }
    cout << ">";
  }
}

short compute_sum(const vector<short> &data) {
  std::vector<short>::const_iterator iter = data.begin();

  short sum = 0;
  while (iter != data.end()) {
    sum += *iter;
    iter++;
  }

  return sum;
}

int main() {
  //cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
  vector<short> sample_vector(5);

  cout << "new vector: ";
  print(sample_vector);
  cout << endl;

  fill_vector(sample_vector);

  cout << "filled vector: ";
  print(sample_vector);
  cout << endl;

  cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl;
  //cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl;
  //TODO:
  //test your 3 new functions here
  vector<short> new_vector(0);

  cout << "New vector: ";
  print(new_vector);
  cout << endl;
  
  cout << "10 random numbers have been added to the vector.\n";
  add_numbers(new_vector);

  cout << "Filled vector: ";
  print(new_vector);
  cout << endl;

  cout << "The even indexes of the vector: ";
  print_even(new_vector);
  cout << endl;
  //TODO:
  //use iterators to sort a vector of 5 random elements

   if (is_present(new_vector, 420))
  {
	  cout << "420 is present in this vector." << endl;
  }
  else
  {
	  cout << "420 is not present in this vector." << endl;
  }
  return 0;
}
 new_vector.push_back(7);
  cout << "7 has been added to this vector.\n";
  cout << "Filled vector: ";
  print(new_vector);
  cout << endl;

if (is_present(new_vector, 7))
  {
	  cout << "7 is present in this vector." << endl;
  }
  else
  {
	  cout << "7 is not present in this vector." << endl;
  }
cout << "30 more numbers have been added to the vector.\n";
  add_numbers(new_vector);
  add_numbers(new_vector);
  add_numbers(new_vector);

  sortVector(new_vector);
  cout << "This vector has been sorted: ";
  print(new_vector);
  cout << endl;

  cout << "Sum of this vector's elements: " << compute_sum(new_vector) << endl;
 return 0;
}
