/**
*	@file main.cpp
*	@author John Gibbons
* @author QUI PHAN (I ADDED code to run test auto)
*	@date 2014.04.02
*/

#include <iostream>
#include <stdexcept>
#include "Queue.h"
#include "tester.h"

int main()
{
	Queue q;

	QueueTest check;
	check.runTests();

	return(0);
}
