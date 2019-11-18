/**
*	@file Test.cpp
*	@author Nick North
*	@date 11-18-19
*/

#include <iostream>
#include "Test.h"
using namespace std;

void Test::runTests()
{
  isEmptyTest();
  enqueueTest();
  dequeueTest();
  peekFrontTest();
}

void Test::isEmptyTest()
{
  cout << "Test 1: Newly created queue is empty: ";
  Queue q;

  if (q.isEmpty())
  {
    cout << "PASSED\n";
  }
  else
  {
    cout << "FAILED\n";
  }

  cout << "Test 2: Queue with one element is not empty : ";
  q.enqueue(1);

  if (!q.isEmpty())
  {
    cout << "PASSED\n";
  }
  else
  {
    cout << "FAILED";
  }
}

void Test::enqueueTest()
{
  cout << "Test 3: Enqueue method adds an element to empty queue: ";
  Queue q;

  try
  {
    q.enqueue(2000);
    cout << "PASSED\n";
  }
  catch (std::runtime_error& e)
  {
    cout << "FAILED\n";
    cout << e.what() << endl;
  }

  cout << "Test 4: Enqueue method adds to non-empty queue: ";

  try
  {
    for (int i = 0; i < 100; i++)
    {
      q.enqueue(i);
    }

    cout << "PASSED\n";
  }
  catch (std::runtime_error& e)
  {
    cout << "FAILED\n";
    cout << e.what() << endl;
  }
}

void Test::dequeueTest()
{
  cout << "Test 5: Dequeue method throws an exception if used on empty queue: ";
  Queue q;

  try
  {
    q.dequeue();
    cout << "FAILED\n";
  }
  catch (std::runtime_error& e)
  {
    cout << "PASSED\n";
  }

  cout << "Test 6: Dequeue can remove an element from the queue: ";
  int element = 10000;
  q.enqueue(element);
  q.dequeue();

  if (q.isEmpty())
  {
    cout << "PASSED\n";
  }
  else
  {
    cout << "FAILED\n";
  }

  cout << "Test 7: Dequeue can remove multiple elements from queue: ";
  q.enqueue(7);
  q.enqueue(14);
  q.enqueue(131313);
  q.dequeue();
  q.dequeue();
  q.dequeue();

  if (q.isEmpty())
  {
    cout << "PASSED\n";
  }
  else
  {
    cout << "FAILED\n";
  }

  cout << "Test 7.5: Dequeue removes the front element when called: ";
  Queue q2;
  q2.enqueue(5);
  q2.enqueue(6);
  q2.enqueue(7);
  q2.dequeue();

  int testValue1 = q2.peekFront();
  q2.dequeue();
  int testValue2 = q2.peekFront();
  q2.dequeue();

  if (testValue1 == 6 && testValue2 == 5)
  {
    cout << "FAILED\n";
  }
  else
  {
    cout << "PASSED\n";
  }
}

void Test::peekFrontTest()
{
  cout << "Test 8: An error is thrown when trying Peek Front on an empty queue: ";
  Queue q;

  try
  {
    q.peekFront();
    cout << "FAILED\n";
  }
  catch (std::runtime_error& e)
  {
    cout << "PASSED\n";
  }

  cout << "Test 9: Peek Front has correct front value of non-empty queue: ";
  q.enqueue(5);
  q.enqueue(6);
  q.enqueue(7);
  int frontValue = q.peekFront();

  if (frontValue == 5)
  {
    cout << "PASSED\n";
  }
  else
  {
    cout << "FAILED\n";
    //cout << "Front value: " << frontValue << endl;
  }
}
