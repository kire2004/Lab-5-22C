/*
 * QueueTest.cpp
 *
 *  Created on: Oct 26, 2017
 *      Author: Erik and Altin
 */
#include <iostream>
#include <string>
#include "Queue.h"
#include "Stack.h"
#include <cstdlib>
#include <assert.h>

using namespace std;

int main() {
	Queue Q1;
	Queue Q2;
	//TESTING ASSERTS
	//Q1.dequeue();
	//Q1.getFront();

	//TESTING ENQUEUE, PRINT, DEQUEUE AND GETFRONT
	cout << Q1.getSize() << endl;
	Q1.enqueue("Hi");
	Q1.print();
	Q1.enqueue("Altin");
	Q1.print();
	Q1.dequeue();
	Q1.enqueue("is the best");
	Q1.print();
	cout << "The size of Queue 1 is: " << Q1.getSize() << endl;
	cout << Q1.getFront() << endl;
	//TESTING EMPTY
	cout << "Should print out is empty:\n";
	if (Q2.empty()) {
			cout << "Queue is empty\n";
		}
	Q2.enqueue("test");
	cout << "Should print out is not empty:\n";
	if (!Q2.empty()) {
				cout << "Queue is not empty\n";
		}



}


