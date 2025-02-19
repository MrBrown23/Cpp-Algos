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

void insertAtEnd(Node **head, int value)
{
    Node* p = *head;
    Node *temp = new Node();
    temp->value = value;
    temp->next = NULL;
    if(*head == NULL)
    {
        *head = temp;
        return;
    }
    while( p->next != NULL)
    {
        p = p->next;
    }
    
    p->next = temp;
    
}

void insertAfter(Node **head, int value, int newvalue)
{
    Node *p = *head;
    // Node *temp = new Node();
    Node *temp = new Node();
    temp->value = newvalue;
    if(*head == NULL)
    {
        *head = temp;
        temp->next = NULL;
        return;
    }
    while(p->next != NULL)
    {
        if(p->value == value)
        {
            temp->next = p->next;
            p->next = temp;
            break;
            

        }
        p = p->next;
    }

}

int main()
{
    Node *head = NULL;
    
    insertAtEnd(&head, 1);
    insertAtEnd(&head, 2);
    insertAtEnd(&head, 3);

    printlist(head);

    insertAtFront(&head, 77);
    printlist(head);

    insertAtEnd(&head,44);
    printlist(head);

    insertAtEnd(&head,55);
    printlist(head);

    insertAfter(&head, 3, 4);
    printlist(head);
    
    return 0;
}