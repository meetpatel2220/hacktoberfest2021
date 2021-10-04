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

Node *removeDuplicate(Node *head)
{

    if (head == NULL)
    {
        return head;
    }

    Node *temp = head;
    Node *var;
    while (temp->next != NULL)
    {
        if (temp->next->data == temp->data)
        {
            var = temp->next->next;
            delete temp->next;
            temp->next = var;
        }
        else
        {
            temp = temp->next;
        }
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

    head = removeDuplicate(head);

    print(head);

    return 0;
}