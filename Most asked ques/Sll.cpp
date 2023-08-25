#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
} typedef NODE;

NODE *createNode(int data)
{
    NODE *temp;
    temp = new NODE;
    temp->data = data;
    temp->next = NULL;
    return temp;
}

NODE *insertAtStart(NODE *head, int data)
{
    NODE *temp;
    temp = createNode(data);
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        temp->next = head;
        head = temp;
    }
    return head;
}

void printSLL(NODE *head)
{
    NODE *p = head;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main()
{
    NODE *head;
    head = insertAtStart(head, 1);
    head = insertAtStart(head, 2);
    head = insertAtStart(head, 3);
    head = insertAtStart(head, 4);
    printSLL(head);
    return 0;
}