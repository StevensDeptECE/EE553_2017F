#pragma once

#include <iostream>

template<typename T>
class LinkedList {
private:
	class Node {
	public:
		Node* next;
		T     val;
		Node(Node* next, const T& v)
			: next(next), val(v) {}
	};
	Node* head;
public:
	LinkedList() {
		head = nullptr;
	}
	void addFirst(const T& v) {
#if 0
		Node* temp = new Node();
		(*temp).next = head;
		temp->val = v;
		head = temp;
#endif
		head = new Node(head, v);
	}

	void addLast(const T& v) {
		if (head == nullptr) {
			head = new Node(nullptr, v);
			return;
		}
		Node* p;
    for (p = head; p->next != nullptr; p = p->next)
			;
		// p should be pointing to last element
		p->next = new Node(nullptr, v);
	}

	void removeFirst() {
		Node* temp = head;
		head = head->next;
		delete temp;
	}
	
	friend std::ostream& operator<<(std::ostream& s,
														 const LinkedList& list) {
		for (Node* p = list.head; p != nullptr; p = p->next) {
      s << p->val;
		}
		return s;
	}
};
