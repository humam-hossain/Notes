#include <iostream>

void Insert(int data, int position);
void Print();
void Reverse();
struct Node
{
    int data;
    Node *next;
};

Node *head = new Node();

int main()
{
    head = NULL;
    for (size_t i = 1; i < 10; i++)
    {
        Insert(i, i);
    }

    Print();
    Reverse();
    Print();
    Reverse();
    Print();
    return 0;
}

void Reverse()
{
    Node *next_addr = head->next;
    head->next = NULL;
    Node *temp2;

    while (1)
    {
        temp2 = next_addr;
        next_addr = temp2->next;
        temp2->next = head;
        head = temp2;
        if (next_addr == NULL)
            break;
    }
}

void Insert(int data, int position)
{

    if (position < 1)
    {
        std::cout << position << " is an Invalid Position!";
        return;
    }
    Node *temp1 = new Node();
    temp1->data = data;
    temp1->next = NULL;
    if (position == 1)
    {
        temp1->next = head;
        head = temp1;
        return;
    }
    Node *temp2 = head;
    for (int i = 1; i < (position - 1); i++)
    {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next; // |x|&y|, |y|&z|, |z|&a|
    temp2->next = temp1;
}

void Print()
{
    Node *temp = head;
    std::cout << "List : \n";
    while (temp != NULL)
    {
        std::cout << temp->data << "-" << (long)temp->next << "\n";
        temp = temp->next;
    }
    std::cout << std::endl;
}