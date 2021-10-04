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

// deleting a node using recursion;
Node *deleteRecurse(Node *head, int idx)
{
    if (head == NULL)
    {
        return head;
    }
    if (idx == 0)
    {
        Node *a = head;
        head = head->next;
        delete a;
    }
    else
    {
        head->next = deleteRecurse(head->next, idx - 1);
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

    int idx;
    cin >> idx;

    head = deleteRecurse(head, idx);

    print(head);

    return 0;
}