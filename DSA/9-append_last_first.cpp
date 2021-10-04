
// incomplete

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

int count(Node *head)
{
    Node *temp = head;

    int ctr = 0;
    while (temp != NULL)
    {
        ctr++;
        temp = temp->next;
    }

    return ctr;
}

Node *appendLastToFirst(Node *head, int n)
{

    Node *temp = head;
    Node *prev = NULL;

    int ctr = count(head);
    int i = (ctr - n);

    while (i > 0)
    {
        prev = temp;
        temp = temp->next;
        i--;
    }

    prev->next = NULL;
    Node *a = head;
    head = temp;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = a;

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
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = takeInput_better();
        int n;
        cin >> n;

        head = appendLastToFirst(head, n);

        print(head);
    }

    return 0;
}