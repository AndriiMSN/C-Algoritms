#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node* next;
	Node* prev;
};


void push(Node** head_ref, int new_data)
{
	Node* new_node = new Node();

	new_node->data = new_data;

	new_node->prev = NULL;

	new_node->next = (*head_ref);

	if ((*head_ref) != NULL) {
		(*head_ref)->prev = new_node;
	}
	(*head_ref) = new_node;
}

void deleteNode(Node** head_ref, Node* del)
{

	if (*head_ref == NULL || del == NULL) {
		return;
	}

	if (*head_ref == del) {
		*head_ref = del->next;
	}

	if (del->next != NULL) {
		del->next->prev = del->prev;
	}


	if (del->prev != NULL) {
		del->prev->next = del->next;
	}

	free(del);
	return;
}


void printList(Node* node)
{
	cout << "NULL <--";
	while (node != NULL)
	{
		cout << node->data << " <- -> ";
		node = node->next;
	}
	cout << "NULL";
}


int main()
{

	Node* head = NULL;

	int n;
	cout << "Enter size of Linked List:\t";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int k;
		printf("[%i] = ", i);
		scanf_s("%i", &k);
		push(&head, k);
	}

	cout << "\nCreated Linked List:  ";
	printList(head);

	deleteNode(&head, head);

	cout << "\nLinked List after Delete firstr element" << endl;
	printList(head);

	system("pause>0");
	return 0;
}
