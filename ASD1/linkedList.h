//This file includes description of class LinkedList - 
// integer number and *next & *prev
#pragma once

class LinkedList
{
private:
	void add_first(int newElem);
	void reset_list();

	class Node
	{
	public:
		Node(int data, Node* next = nullptr, Node* prev = nullptr) {
			this->data = data;
			this->next = next;
			this->prev = prev;
		};
		~Node() {};

		int data;
		Node* next;
		Node* prev;
	};


	Node* head;
	Node* tail;
	size_t size;

public:

	LinkedList();
	~LinkedList();

	void push_back(int newElem);
	void push_front(int newElem);
	void pop_back();
	void pop_front();
	void insert(int newElem, int index);
	int at(size_t index) const;
	void remove(int index);
	size_t get_size() const;
	void print_to_console();
	void clear();
	void set(int index, int newElem);
	bool isEmpty();
	void insert(LinkedList newList, int index);
};
