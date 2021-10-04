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

Node *mergeSortedLL(Node *head1, Node *head2)
{
    Node *fhead = NULL;
    Node *ftail = NULL;

    if (head1->data < head2->data){
        fhead = head1;
        ftail = head1;
        head1 = head1->next;
    } 
    else{
        fhead = head2;
        ftail = head2;
        head2 = head2->next;
    }

    while (head1 != NULL && head2 != NULL){
        if (head1->data < head2->data){
            ftail->next = head1;
            ftail = head1;
            head1 = head1->next;
        }
        else{
            ftail->next = head2;
            ftail = head2;
            head2 = head2->next;
        }
    }
    if (head1 == NULL){
        ftail->next = head2;
    } 
    else{
        ftail->next = head1;
    }

    return fhead;
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
    Node *head1 = takeInput_better();
    Node *head2 = takeInput_better();

    Node *newHead = mergeSortedLL(head1, head2);

    print(newHead);

    return 0;
}