#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *new_node(int item) {
    struct node *Node = (struct node *) malloc(sizeof(struct node));
    Node->data = item;
    Node->next = NULL;

    return Node;
}

void printlist(struct node* head)
{
    struct node *temp = head;

    if (head == NULL)
        printf("List is empty\n");
    else
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    printf("\n");
}

int iscircular(struct node *head)
{
    struct node *temp = head->next;

    if (head == NULL)
        return 0;

    while (temp != NULL && temp != head) {
        temp = temp->next;
    }
    return (temp == head);
}

int main()
{
    struct node *head = new_node(1);
    //printf("%d %p\n", head->data, head->next);
    head->next = new_node(2);
    //printf("%d %p\n", head->next->data, head->next);
    head->next->next = new_node(3);
    head->next->next->next = head;

    //printlist(head);

    iscircular(head) ? printf("Yes, it is circular.\n") :
                       printf("No, it's not circular.\n");
    return 0;
}
