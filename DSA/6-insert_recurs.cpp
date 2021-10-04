#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

Node *takeInput_better()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = tail->next;
        }

        cin >> data;
    }

    return head;
}

// inserting a node using recursion;
Node *insertRecurse(Node *head, int idx, int data)
{
    // base case
    if (idx == 0)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
    // recursive case
    else
    {
        head->next = insertRecurse(head->next, idx - 1, data);
    }

    return head;
}

// function to traverse and print the linked list;
void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = takeInput_better();

    int idx, data;
    cin >> idx >> data;

    head = insertRecurse(head, idx, data);

    print(head);

    return 0;
}