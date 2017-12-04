#pragma once

#include <iostream>

template<typename T>
class LinkedList {
private:
	class Node {
	public:
		Node* next;
		T val;
		Node(Node* n, const T& v) : next(n), val(v) {}
	};
	Node* head;
public:
	LinkedList() { head = nullptr; }
	void addFirst(const T& v);
	void addLast(const T& v);
	void removeFirst();
	friend std::ostream& operator<<(std::ostream& s,
													 const LinkedList<T>& list) {
		for (Node* p = list.head; p != nullptr; p = p->next) {
			s << p->val;
		}
		return s;
	}
};
