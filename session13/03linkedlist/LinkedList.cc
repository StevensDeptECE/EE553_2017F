#include "LinkedList.hh"

template<typename T>
LinkedList<T>::~LinkedList() {
	if (isEmpty())
		return;
	for (Node* p = head; !p->isLast(); ) {
		Node* temp = p;
		p = p->next;
		delete temp;
	}
}

template<typename T>
LinkedList<T>::LinkedList(const LinkedList& orig) {
	if (orig.isEmpty()) {
		head = nullptr;
		return;
	}
	// guaranteed at least one node to copy
	
	Node* prev = new Node(nullptr, orig.head->val);
	head = prev;
	for (Node* p = orig.head->next; p != nullptr; p = p->next) {
		Node* q = new Node(nullptr, p->val);
		prev->next = q;
		prev = q;
	}
}

template<typename T>
LinkedList<T>& LinkedList<T>::operator =(const LinkedList& orig) {
  LinkedList copy(orig);
	swap(this->head, copy.head);
	return *this;
}

template<typename T>
void LinkedList<T>::addFirst(const T& v) {
	head = new Node(head, v);
}

template<typename T>
void LinkedList<T>::addLast(const T& v) {
	if (isEmpty()) {
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
