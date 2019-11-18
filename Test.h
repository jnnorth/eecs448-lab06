/**
*	@file Test.h
*	@author Nick North
*	@date 11-18-19
*/

#ifndef TEST_H
#define TEST_H

#include "Queue.h"

class Test
{
  public:
    /**
  	*	@pre Need a queue class to test
  	*	@post The tests are ran and the results are outputted to the terminal
  	*/
    void runTests();
    /**
  	*	@pre A queue object exists
  	*	@post The results of whether or not isEmpty() functions as expected based on the givent tests are printed
  	*/
    void isEmptyTest();
    /**
  	*	@pre A queue object exists, isEmpty() is assumed to work
  	*	@post The results of whether or not enqueue() functions as expected based on the given tests are printed
  	*/
    void enqueueTest();
    /**
  	*	@pre A queue object exists, isEmpty() and enqueue() are assumed to work
  	*	@post The results of whether or not dequeue() functions as expected based on the given tests are printed
  	*/
    void dequeueTest();
    /**
  	*	@pre A queue object exists, enqueue() is assumed to work
  	*	@post The results of whether or not peekFront() functions as expected based on the given tests are printed
  	*/
    void peekFrontTest();
};

#endif
