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

int findNode(Node *head, int key)
{
    Node *temp = head;
    int ctr = 0;

    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return ctr;
        }
        temp = temp->next;
        ctr++;
    }
    return -1;
}

int findNodeRecursive(Node *head, int key)
{
    // base case
    if (head == NULL)
    {
        return -1;
    }

    if (head->data == key)
    {
        return 0;
    }
    // recursion 
    int ans = findNodeRecursive(head->next, key);

    if (ans != -1)
    {
        return ans + 1;
    }
    else
    {
        return -1;
    }
}

// // function to traverse and print the linked list;
// void print(Node *head)
// {
//     Node *temp = head;

//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = takeInput_better();

        int key;
        cin >> key;

        // cout << findNode(head, key) << "\n";
        cout << findNodeRecursive(head, key) << "\n";
        // print(head);
    }

    return 0;
}
