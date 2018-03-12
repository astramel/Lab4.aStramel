/* File: VectorDriver.cpp
 * Athr: Dimitri Zarzhitsky
 * Date: October 16, 2002
 *
 * Desc: provides the basic framework and examples for an introduction to
 *       the STL::vector, iterators, and the algorithms facilities.
 *
 * Edited by: Rafer Cooley
 * Date: Oct. 1, 2017
 */
//
typedef unsigned long ulong;

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>

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

// example of how to use a vector iterator
short compute_sum(const vector<short> &data) {
  std::vector<short>::const_iterator iter = data.begin();

  short sum = 0;
  while (iter != data.end()) {
    sum += *iter;
    iter++;
  }

  return sum;
}


// TODO:
// add 10 numbers to the data vector
// for loops allowed
// test by creating empty vec in main, call add
/// then print out
void add_numbers (vector<short> &data)
{
	for (short i = 0; i < 10; i++) 
	{
		short random = rand() % 101;
		data.push_back(random);
	}
}

// TODO:
// print the value at all the even locations of the vector
void print_even(const vector<short>& data)
{
	if (data.empty())
	{
		cout << "<empty>";
	}
	else 
	{
		cout << "<" << data.at(0);
		for (short i = 1; i<data.size(); i++)
		{
			if (i % 2 == 0)
			cout << ", " << data.at(i);
		}
		cout << ">";
	}
}


// TODO:
// return true if the value is present in the data vector, false otherwise
bool is_present(const vector<short> &data, short value)
{
	std::vector<short>::const_iterator iterator = data.begin();
	bool present = false;
	while (iterator != data.end())
	{
		if (*iterator == value)
		{
			present = true;
		}
		iterator++;
	}

	return present;
}
