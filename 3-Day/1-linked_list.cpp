#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int n)
    {
        this->data = n;
        this->next = NULL;
    }
};

class LinkedList
{
public:
    Node *head = NULL;

    LinkedList()
    {
        head = NULL;
    }
    LinkedList(int n)
    {
        head = new Node(n);
    }
    void AddNode(int n)
    {
        Node *node = new Node(n);
        if (head == NULL)
        {
            head = node;
        }
        else
        {
            Node *cur = head;
            while (cur->next != NULL)
            {
                cur = cur->next;
            }
            cur->next = node;
        }
    }
    void PrintList()
    {
        Node *cur = head;
        while (cur != NULL)
        {
            cout << cur->data << " -> ";
            cur = cur->next;
        }
        cout << endl;
    }
    void reverse()
    {
        Node *prev, *cur, *next;
        prev = NULL;
        cur = head;
        next = NULL;

        while (cur != NULL)
        {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        head = prev;
    }
    void cloneList()
    {
        Node *original = head;

        while (original != NULL && original->next != NULL)
        {
            Node *next = new Node(original->data);
            next->next = original->next;
            original->next = next;
            original = original->next->next;
        }
        Node *temp = new Node(original->data);
        original->next = temp;
    }
};

int main()
{
    LinkedList ll;
    ll.AddNode(1);
    ll.AddNode(2);
    ll.AddNode(3);
    ll.AddNode(4);
    ll.AddNode(5);
    ll.PrintList();
    ll.reverse();
    ll.PrintList();
    ll.cloneList();
    ll.PrintList();

    return 0;
}