#include <iostream>

// Data Structure to store a linked list node
struct Node
{
	int data;
	struct Node* next;
};

// Helper function to create a new Node with the given data and
// pushes it onto the front of the list
void push(struct Node** head, int data)
{
	// create a new linked list node from heap
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

	newNode->data = data;
	newNode->next = *head;
	*head = newNode;
}

// Recursive function to check if linked list is palindrome or not
int checkPalindrome(struct Node** left, struct Node* right)
{
	// base case
	if (right == NULL)
		return 1;

	int res = checkPalindrome(left, right->next) && 
			((*left)->data == right->data);
	(*left) = (*left)->next;

	return res;
}

// Function to check if linked list is palindrome or not
int checkPalin(struct Node* head)
{
	return checkPalindrome(&head, head);
}

// main method
int main(void)
{
	// input keys
	int keys[] = { 1, 3, 5, 3, 1};
	int n = sizeof(keys) / sizeof(keys[0]);

	struct Node* head = NULL;
	for (int i = n - 1; i >= 0; i--)
		push(&head, keys[i]);

	if (checkPalin(head))
		printf("Linked list is Palindrome");
	else
		printf("Linked list is not Palindrome");

	return 0;
}
