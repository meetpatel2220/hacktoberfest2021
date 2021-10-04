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

Node *reverse(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *rem = reverse(head->next);
    head->next->next = head;

    head->next = NULL;

    return rem;
}

bool checkPalindrome(Node *head)
{
    if (head == NULL)
    {
        return true;
    }
    int ctr = count(head) / 2;
    Node *temp = head;
    Node *temp2 = NULL;

    int i = 1;
    while (i <= ctr)
    {
        temp2 = temp;
        temp = temp->next;
        i++;
    }
    temp2->next = NULL;
    temp = reverse(temp);

    i = 1;
    while (head != NULL)
    {
        if (head->data != temp->data)
        {
            return false;
        }
        head=head->next;
        temp=temp->next;
    }

    return true;
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
    Node *head = takeInput_better();

    if (checkPalindrome(head))
    {
        cout << "true\n";
    }
    else
    {
        cout << "false\n";
    }

    return 0;
}