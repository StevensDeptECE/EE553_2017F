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
		bool isLast() const { return next == nullptr; }
	};
	Node* head;
public:
	LinkedList() { head = nullptr; }
	~LinkedList();
	LinkedList(const LinkedList& orig);
	LinkedList& operator =(const LinkedList& orig);
	bool isEmpty() const { return head == nullptr; }
	void addFirst(const T& v);
	void addLast(const T& v);
	void removeFirst();
	T operator [] (int i) const {
		for (Node* p = head; p != nullptr; p = p->next,i--) {
			if (i == 0)
				return p->val;
		}
		throw "AAAAAAGH";
	}
	T& operator [] (int i) {
		for (Node* p = head; p != nullptr; p = p->next,i--) {
			if (i == 0)
				return p->val;
		}
		throw "AAAAAAGH";
	}
	friend std::ostream& operator<<(std::ostream& s,
																	const LinkedList& list) {
		for (Node* p = list.head; p != nullptr; p = p->next) {
			s << p->val << ' ';
		}
		return s;
	}
};
