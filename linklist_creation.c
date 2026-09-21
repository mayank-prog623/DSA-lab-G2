#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node* createNode(int data) {
    struct Node *newNode;

    newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

struct Node* createList() {
    struct Node *head = NULL;
    struct Node *temp = NULL;
    struct Node *newNode;
    int n, data, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter data: ");
        scanf("%d", &data);

        newNode = createNode(data);

        if (head == NULL) {
            head = newNode;
            temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    return head;
}

struct Node* insertBeginning(struct Node *head, int data) {
    struct Node *newNode;

    newNode = createNode(data);

    newNode->next = head;
    head = newNode;

    return head;
}

struct Node* insertMiddle(struct Node *head, int data, int position) {
    struct Node *newNode;
    struct Node *temp;
    int i;

    newNode = createNode(data);

    temp = head;
    for (i = 1; i < position - 1; i++) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}
struct Node* insertLast(struct Node *head, int data) {
    struct Node *newNode;
    struct Node *temp;

    newNode = createNode(data);

    temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;

    return head;
}
void display(struct Node *head) {
    struct Node *temp = head;

    printf("\nLinked List: ");

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main() {

    struct Node *head;
    int data;
    int position;

    head = createList();

    printf("\nOriginal ");
    display(head);

    printf("\nEnter data to insert at beginning: ");
    scanf("%d", &data);

    head = insertBeginning(head, data);

    printf("After insertion at beginning:");
    display(head);

    printf("\nEnter data to insert in middle: ");
    scanf("%d", &data);

    printf("Enter position: ");
    scanf("%d", &position);

    head = insertMiddle(head, data, position);

    printf("After insertion in middle:");
    display(head);

    printf("\nEnter data to insert at last: ");
    scanf("%d", &data);

    head = insertLast(head, data);

    printf("After insertion at last:");
    display(head);

    return 0;
}