#include "Tester.h"

bool Tester::runTests()
{

   int pass = 0;
   int fail = 0;
   cout << "BEGINNING TESTS ON THE LINKED LIST\n";

   //Tests isEmpty()
   cout << "BEGINNING THE isEmpty() TEST.\n";
   if(isEmpty_Test())
   {
     pass++;
   }
   else
   {
     fail++;
   }
   cout << "\n";

   //Tests size()
   cout << "BEGINNING THE size() TEST.\n";
   if(size_Test())
   {
     pass++;
   }
   else
   {
     fail++;
   }
   cout << "\n";

   //Tests search()
   cout << "BEGINNING THE search() TEST.\n";
   if(search_Test())
   {
     pass++;
   }
   else
   {
     fail++;
   }
   cout << "\n";

   //Tests addBack()
   cout << "BEGINNING THE addBack() TEST.\n";
   if(addBack_Test())
   {
     pass++;
   }
   else
   {
     fail++;
   }
   cout << "\n";

   //Tests removeBack()
   cout << "BEGINNING THE removeBack() TEST.\n";
   if(removeBack_Test())
   {
     pass++;
   }
   else
   {
     fail++;
   }
   cout << "\n";

   //Tests addFront()
   cout << "BEGINNING THE addFront() TEST.\n";
   if(addFront_Test())
   {
     pass++;
   }
   else
   {
     fail++;
   }
   cout << "\n";

   //Tests removeFront()
   cout << "BEGINNING THE removeFront() TEST.\n";
   if(removeFront_Test())
   {
     pass++;
   }
   else
   {
     fail++;
   }
   cout << "\n";

//TESTS ARE FINISHED
  cout << "\n";
  cout << "TESTS ARE COMPLETED: Calculating grade.\n";

  if(pass == pass+fail)
  {
    cout << "All tests have been passed!";
    return true;
  }
  else
  {
    cout << pass <<" Passed / " << fail << " Failed. Correct the errors.\n";
    return false;
  }

  return false;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// ACTUAL TEST FUNCTIONS
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool Tester::isEmpty_Test()
{
  LinkedListOfInts test;
  bool outcome = true;

  if(!test.isEmpty())
  {
    cout << "FAILED: RETURNING EMPTY ON A NEW LIST.\n";
    outcome = false;
  }

  test.addFront(5);

  if(test.isEmpty())
  {
    cout << "FAILED: RETURNING TRUE ON A NON-EMPTY LIST.\n";
    outcome = false;
  }

  if(outcome)
  {
    cout << "PASSED.\n";
  }

  return outcome;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool Tester::size_Test()
{
  LinkedListOfInts test;
  bool outcome = true;

  if(test.size() != 0)
  {
    cout << "FAILED: RETURNING NON-ZERO ON A NEW LIST.\n";
    outcome = false;
  }

  for(int i = 0; i <= 5; i++)
	{
		test.addFront(i);
  }

  if(test.size() != 6)
  {
    cout << "FAILED: RETURNING NON-FIVE AFTER 5 CALLED OF ADDFRONT.\n";
    outcome = false;
  }

  if(outcome)
  {
    cout <<"PASSED\n";
  }

  return outcome;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool Tester::search_Test()
{
	LinkedListOfInts test;
	bool outcome = true;

	if(test.search(5))
	{
		cout << "FAILED: RETURNS TRUE WHEN SEARCHING EMPTY LIST.\n";
		outcome = false;
	}

	for(int i = 0; i <= 5; i++)
	{
		test.addFront(i);
	}

	if(!test.search(5))
	{
		cout << "FAILED: RETURNS FALSE AFTER ADDING SEARCHED VALUES TO THE LIST";
		outcome = false;
	}

	if(outcome)
  {
    cout << "PASSED\n";
  }

	return outcome;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool Tester::addBack_Test()
{
  LinkedListOfInts test;
  bool outcome = true;

  test.addBack(5);

  std::vector<int> vecTest = test.toVector();

  if(vecTest.size() != 1)
  {
    cout << "FAILED: SIZE DOESN'T INCREASE AFTER ONE ADDBACK CALL. \n";
    outcome = false;
  }

  for(int i = 0; i <= 5; i++)
	{
		test.addBack(i);
  }

  vecTest = test.toVector();

  if(vecTest.size() != 7)
  {
    cout <<"FAILED: SIZE DOESN'T MATCH THE AMOUNT OF TIMES ADDBACK IS CALLED.\n";
    outcome = false;
  }

  if(vecTest.back() != 5)
  {
    cout<<"FAILED: LAST ELEMENT DOES NOT MATCH THE LAST ELEMENT ADDED.\n";
    outcome = false;
  }

  if(outcome)
  {
    cout << "PASSED.\n";
  }

  return outcome;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool Tester::removeBack_Test()
{
  LinkedListOfInts test;
  bool outcome = true;

  test.addFront(5);
  test.removeBack();

  std::vector<int> vecTest = test.toVector();

  if(vecTest.size() != 0)
  {
    cout << "FAILED: SIZE DOESN'T RETURN TO ZERO AFTER A REMOVEBACK CALL. \n";
    outcome = false;
  }

  for(int i = 0; i < 5; i++)
	{
		test.addFront(i);
  }

  vecTest = test.toVector();

  int front = vecTest.front();

  for(int j = 0; j < 4; j++)
  {
    test.removeBack();
  }

  vecTest = test.toVector();

  if(vecTest.size() != 1)
  {
    cout <<"FAILED: SIZE DOESN'T RETURN 1 AFTER 5 ADDFRONT and 4 REMOVEBACK CALLS.\n";
    outcome = false;
  }

  if(vecTest.front() != front)
  {
    cout<<"FAILED: FIRST ELEMENT CHANGED.\n";
    outcome = false;
  }

  if(outcome)
  {
    cout << "PASSED.\n";
  }

  return outcome;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool Tester::addFront_Test()
{
  LinkedListOfInts test;
  bool outcome = true;

  test.addFront(5);

  std::vector<int> vecTest = test.toVector();

  if(vecTest.size() != 1)
  {
    cout << "FAILED: SIZE DOESN'T INCREASE AFTER ONE ADDFRONT CALL. \n";
    outcome = false;
  }

  for(int i = 0; i <= 5; i++)
	{
		test.addFront(i);
  }

  vecTest = test.toVector();

  if(vecTest.size() != 7)
  {
    cout <<"FAILED: SIZE DOESN'T MATCH THE AMOUNT OF TIMES ADDBACK IS CALLED.\n";
    outcome = false;
  }

  if(vecTest.front() != 5)
  {
    cout<<"FAILED: LAST ELEMENT DOES NOT MATCH THE LAST ELEMENT ADDED.\n";
    outcome = false;
  }

  if(outcome)
  {
    cout << "PASSED.\n";
  }

  return outcome;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool Tester::removeFront_Test()
{
  LinkedListOfInts test;
  bool outcome = true;

  test.addFront(5);
  test.removeFront();

  std::vector<int> vecTest = test.toVector();

  if(vecTest.size() != 0)
  {
    cout << "FAILED: SIZE DOESN'T RETURN TO ZERO AFTER A REMOVEFRONT CALL. \n";
    outcome = false;
  }

  for(int i = 0; i < 5; i++)
	{
		test.addFront(i);
  }

  vecTest = test.toVector();

  int front = vecTest.front();

  for(int j = 0; j < 4; j++)
  {
    test.removeFront();
  }

  vecTest = test.toVector();

  if(vecTest.size() != 1)
  {
    cout <<"FAILED: SIZE DOESN'T RETURN 1 AFTER 5 ADDFRONT and 4 REMOVEBACK CALLS.\n";
    outcome = false;
  }

  if(vecTest.front() != front)
  {
    cout<<"FAILED: LAST ELEMENT CHANGED.\n";
    outcome = false;
  }

  if(outcome)
  {
    cout << "PASSED.\n";
  }

  return outcome;
}
