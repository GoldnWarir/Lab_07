#ifndef TESTER_H
#define TESTER_H

#include "LinkedListOfInts.h"

using namespace std;

class Tester
{

public:

  //Constructor
  Tester()
  {};

  //Called from Main to run all the tests
  bool runTests();

  //Creates a list and returns it's true since it's empty
  //Elements are added and it returns false.
  bool isEmpty_Test();

  //Creates a list and returns 0 as it's size
  //Elementes are added to it, an it returns the size of the list
  bool size_Test();


  //Creates a list and searches for an element: returns false
  //Creates elements in the list and searches for an element: returns true
  bool search_Test();

  //Creates a list and add an element to the back of it
  //Uses toVector to return the size of the vector: 1
  //Last element should be the last element added
  bool addBack_Test();


  //Creates a list and adds 5 elements to it
  //Removes the last element of the list and size should return 4
  //First element should be the same
  bool removeBack_Test();


  //Creates a list and adds an element to it
  //The list should not be empty and the size should return 1
  //Retested with extra elements added
  bool addFront_Test();

  //Creates a list and adds 5 elements to it
  //Removes the first 4 elements of the list and size should return 1
  //Last element should be the same
  bool removeFront_Test();
};

#endif
