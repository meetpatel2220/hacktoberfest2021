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

int lengthRecursive(Node *head)
{
    if (head == NULL)
    {
        return 0;
    }

    int length = lengthRecursive(head->next);

    return length + 1;
}

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

    // int idx, data;
    // cin >> idx >> data;

    // head = insertRecurse(head, idx, data);
    int length = lengthRecursive(head);
    cout << length << "\n";

    // print(head);

    return 0;
}