#include "LinkedList.hh"


template<typename T>
void LinkedList<T>::addFirst(const T& v) {
	head = new Node(head, v);
}


template<typename T>
void LinkedList<T>::addLast(const T& v) {
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

template<typename T>
void LinkedList<T>::removeFirst() {
	Node* temp = head;
	head = head->next;
	delete temp;
}
