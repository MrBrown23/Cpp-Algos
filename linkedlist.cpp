#include <iostream>

using namespace std;

class Node{
public:
    int value;
    Node *  next;

};

void printlist(Node* head)
{
    Node *p = head;
    while(p != NULL)
    {
        cout << p->value << "->";
        p = p->next;
    }
    cout << "NULL" << endl;
}

void insertAtFront(Node **head, int value)
{
    Node *temp = new Node();
    temp->value = value;
    temp->next = *head;
    *head = temp;
}

void insertAtEnd(Node *head, int value)
{
    Node* p = head;
    Node *temp = new Node();
    while( p->next != NULL)
    {
        p = p->next;
    }
    temp->value = value;
    temp->next = NULL;
    p->next = temp;
    
}

int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    head->value = 11;
    head->next = second;

    second->value = 22;
    second->next = third;

    third->value = 33;
    third->next = NULL;

    printlist(head);

    insertAtFront(&head, 77);
    printlist(head);

    insertAtEnd(head,44);
    printlist(head);

    insertAtEnd(head,55);
    printlist(head);
    
    return 0;
}