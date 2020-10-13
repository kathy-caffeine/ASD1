#include "linkedList.h"

int main() {
	LinkedList test;
	test.push_front(0);
	test.push_back(1);
	test.push_back(2);
	test.push_back(3);
	test.push_back(4);
	test.push_back(5);
	test.push_back(6);
	test.push_back(7);
	test.push_back(8);
	test.push_back(9);
	test.push_back(10);
	LinkedList test2;
	test2.push_front(10);
	test2.push_back(11);
	test.insert(test2, 1);
	//testing print_to_console method (:
	test2.print_to_console();
	
	return 0;
}