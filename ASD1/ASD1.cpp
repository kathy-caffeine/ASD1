#include "linkedList.h"
#include <iostream>

int main() {
	LinkedList* test1 = new LinkedList;
	test1->push_front(0);
	test1->push_back(1);
	test1->push_back(2);
	test1->print_to_console();
	LinkedList test;
	test.push_front(10);
	test.push_back(11);
	test.push_back(22);
	test.insert(10, 1);
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
	test.remove(0);
	test.remove(1);
	test.remove((int)test.get_size()-1);
	test.print_to_console();
	test.clear();
	test.print_to_console();
	return 0;
}