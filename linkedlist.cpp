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
    
    return 0;
}