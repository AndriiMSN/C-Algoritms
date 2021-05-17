#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node* next;
};

template <typename T>
void push(Node** head_ref, T new_data)
{
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

void deleteNode(Node** head_ref, int position)
{
	if (*head_ref == NULL) {
		return;
	}

	Node* temp = *head_ref;

	if (position == 0)
	{

		*head_ref = temp->next;

		free(temp);
		return;
	}

	for (int i = 0; temp != NULL && i < position - 1; i++) {
		temp = temp->next;
	}


	if (temp == NULL || temp->next == NULL) {
		return;
	}


	Node* next = temp->next->next;

	free(temp->next);

	temp->next = next;
}


void printList(Node* node)
{
	while (node != NULL)
	{
		cout << node->data << " -> ";
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

	int c;
	cout << "\nEnter index to DELETE: \t";
	cin >> c;
	deleteNode(&head, c);

	cout << "\nLinked List after Deletion at position" << с << endl;
	printList(head);

	system("pause>0");
	return 0;
}
