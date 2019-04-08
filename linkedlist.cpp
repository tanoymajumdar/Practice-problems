#include <iostream>
#include <cstdlib>
using namespace std;


struct Node
{
    int key;
    int value;
    Node *next;
};

void headInsert(Node *&head, int k, int v);
void printList(Node *head);

int main()
{
    Node *head = NULL;

    int n;
    cin >> n;
    int inputK, inputV;
    for (int i=0 ; i< n ; i++)
    {
        cin >> inputK >> inputV;
        headInsert(head, inputK, inputV);
    }
    printList(head);
}

void headInsert(Node *&head, int k, int v)
{
    
    Node *a = new Node;
    a -> key = k;
    a -> value = v;
    a -> next = head;
    head = a;
}

void printList(Node *head)
{
    Node *c = head;
    while ( c != NULL)
    {
        cout<< "Key:" << head -> key << ",value:" << c->value << ">" << endl;
        c = c->next;
    }
    
}







