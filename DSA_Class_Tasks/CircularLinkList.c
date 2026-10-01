#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
	int data;
	struct Node *next;
} Node;

Node *createNode(int value) {
	Node *newNode = malloc(sizeof *newNode);
	if (newNode == NULL) {
		return NULL;
	}

	newNode->data = value;
	newNode->next = newNode;
	return newNode;
}

int insertFront(Node **head, int value) {
	Node *newNode = createNode(value);
	if (newNode == NULL) {
		return 0;
	}

	if (*head == NULL) {
		*head = newNode;
		return 1;
	}

	Node *last = *head;
	while (last->next != *head) {
		last = last->next;
	}

	newNode->next = *head;
	last->next = newNode;
	*head = newNode;
	return 1;
}

int insertEnd(Node **head, int value) {
	Node *newNode = createNode(value);
	if (newNode == NULL) {
		return 0;
	}

	if (*head == NULL) {
		*head = newNode;
		return 1;
	}

	Node *last = *head;
	while (last->next != *head) {
		last = last->next;
	}

	last->next = newNode;
	newNode->next = *head;
	return 1;
}

int insertPosition(Node **head, int value, size_t position) {
	if (position == 0) {
		return 0;
	}
	if (position == 1) {
		return insertFront(head, value);
	}

	if (*head == NULL) {
		return 0;
	}

	Node *previous = *head;
	size_t currentPosition = 1;
	while (currentPosition < position - 1 && previous->next != *head) {
		previous = previous->next;
		currentPosition++;
	}
	if (currentPosition != position - 1) {
		return 0;
	}

	Node *newNode = createNode(value);
	if (newNode == NULL) {
		return 0;
	}

	newNode->next = previous->next;
	previous->next = newNode;
	return 1;
}

int deleteFront(Node **head) {
	if (*head == NULL) {
		return 0;
	}

	Node *oldHead = *head;
	if (oldHead->next == oldHead) {
		*head = NULL;
		free(oldHead);
		return 1;
	}

	Node *last = oldHead;
	while (last->next != oldHead) {
		last = last->next;
	}

	*head = oldHead->next;
	last->next = *head;
	free(oldHead);
	return 1;
}

int deleteEnd(Node **head) {
	if (*head == NULL) {
		return 0;
	}

	Node *last = *head;
	if (last->next == last) {
		*head = NULL;
		free(last);
		return 1;
	}

	Node *previous = NULL;
	while (last->next != *head) {
		previous = last;
		last = last->next;
	}

	previous->next = *head;
	free(last);
	return 1;
}

int deletePosition(Node **head, size_t position) {
	if (*head == NULL || position == 0) {
		return 0;
	}
	if (position == 1) {
		return deleteFront(head);
	}

	Node *previous = *head;
	size_t currentPosition = 1;
	while (currentPosition < position - 1 && previous->next != *head) {
		previous = previous->next;
		currentPosition++;
	}
	if (currentPosition != position - 1 || previous->next == *head) {
		return 0;
	}

	Node *removed = previous->next;
	previous->next = removed->next;
	free(removed);
	return 1;
}

int deleteKey(Node **head, int key) {
	if (*head == NULL) {
		return 0;
	}

	Node *current = *head;
	Node *previous = NULL;
	do {
		if (current->data == key) {
			if (current == *head) {
				return deleteFront(head);
			}

			previous->next = current->next;
			free(current);
			return 1;
		}
		previous = current;
		current = current->next;
	} while (current != *head);

	return 0;
}

long search(const Node *head, int key) {
	if (head == NULL) {
		return -1;
	}

	const Node *current = head;
	long position = 1;
	do {
		if (current->data == key) {
			return position;
		}
		current = current->next;
		position++;
	} while (current != head);

	return -1;
}

void traverse(const Node *head) {
	if (head == NULL) {
		printf("List is empty.\n");
		return;
	}

	const Node *current = head;
	do {
		printf("%d -> ", current->data);
		current = current->next;
	} while (current != head);
	printf("(back to head)\n");
}

void deleteList(Node **head) {
	if (*head == NULL) {
		return;
	}

	Node *current = (*head)->next;
	while (current != *head) {
		Node *next = current->next;
		free(current);
		current = next;
	}

	free(*head);
	*head = NULL;
}
