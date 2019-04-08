#include <iostream>
#include <cstdlib>

using namespace std;

struct Node
{
    int key;
    Node *next;
};

void headInsert(Node *&head, int k);
void printList(Node *head);

void reverseList(Node * & head);

int main()
{
    Node *head = NULL;

    int n;
    cin >> n;
    int inputK;
    for (int i=0 ; i< n ; i++)
    {
        cin >> inputK ;
        headInsert(head, inputK);
    }
    printList(head); // Print the list
    reverseList(head); // Reverse the list
    printList(head); // Print the list
}

void headInsert(Node *&head, int k)
{
    Node *newNode = new Node;
    newNode -> key = k;
    newNode -> next = head;
    head = newNode;
}

void printList(Node *head)
{
    Node *current = head;
    while (current!=NULL)
    {
        cout << "Key:" << current->key  << endl;
        current = current->next;
    }
}

void reverseList(Node * & head)
{
    if ( head == NULL)
    return;
    Node *c = head, *p = NULL, *n = head->next;
    while ( c!= NULL )
    {
        n = c->next;
        c->next = p;
        p = c;
        c = n;
    }
    head = p;
}








