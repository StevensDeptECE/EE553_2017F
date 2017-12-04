#pragma once

#include <iostream>

template<typename T>
class LinkedList {
private:
	class Node;
	Node* head;
public:
	LinkedList();
	void addFirst(const T& v);
	void addLast(const T& v);
	void removeFirst();
	friend std::ostream& operator<<(std::ostream& s,
																	const LinkedList<T>& list);
};
