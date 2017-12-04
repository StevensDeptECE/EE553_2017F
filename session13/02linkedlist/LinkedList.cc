#include "LinkedList.hh"

template<typename T>
class LinkedList<T>::Node {
public:
  Node* next;
	T val;
	Node(Node* n, const T& v) : next(n), val(v) {}
};

template<typename T>
LinkedList<T>::LinkedList() {
	head = nullptr;
}

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

template<typename T>
std::ostream& operator<<(std::ostream& s,
												 const LinkedList<T>& list) {
	for (LinkedList<T>::Node* p = list.head; p != nullptr; p = p->next) {
		s << p->val;
	}
	return s;
}
