#include <iostream>

using namespace std;

struct Node {
	int value;
	Node* next;
};

void push(Node** head_ref, int value) {
	Node* new_node = new Node();
	new_node->value = value;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

// add element at the very end of linked list
void append(Node** head_ref, int value) {
	Node* new_node = new Node();
	Node* last = *head_ref;

	new_node->value = value;

	new_node->next = NULL;

	if (*head_ref == NULL) {
		*head_ref = new_node;
		return;
	}

	while (last->next != NULL) last = last->next;

	last->next = new_node;
	return;
}

void printList(Node* node) {
	while (node != NULL) {
		cout << " " << node->value;
		node = node->next;
	}
	cout << endl;
}

int main() {
	Node* head = NULL;

	append(&head, 6);
	append(&head, 8);
	push(&head, 2);
	push(&head, 1);

	printList(head);

	return 0;
}
