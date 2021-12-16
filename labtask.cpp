#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *next, *prev;
};

class Ring_List
{
private:
    Node *head, *current, *temp;

public:
    Ring_List()
    {
        head = nullptr;
        current = nullptr;
    }

    void insert(int value)
    {
        if (head == nullptr)
        {
            Node *n = new Node;
            n->value = value;
            n->next = n;
            n->prev = n;
            head = n;
        }
        else
        {
            Node *n = new Node;
            n->value = value;
            current = head->prev;
            n->prev = current;
            n->next = head;
            current->next = n;
            head->prev = n;
        }
    }

    void remove(int value)
    {
        if (head != nullptr)
        {
            current = head;
            while (current->next != head)
            {

                if (current->value == value)
                {
                    if (current == head)
                    {
                        temp = current;
                        current->prev->next = current->next;
                        current->next->prev = current->prev;
                        head = current->next;
                        delete temp;
                        return;
                    }
                    temp = current;
                    current->prev->next = current->next;
                    current->next->prev = current->prev;
                    delete temp;
                    return;
                }
                else
                {
                    current = current->next;
                }
            }
            if (current->value == value)
            {
                temp = current;
                current->prev->next = current->next;
                current->next->prev = current->prev;
                delete temp;
                return;
            }
        }
    }

    void print()
    {
        if (head != nullptr)
        {
            current = head;
            cout << "{";

            while (current->next != head)
            {
                cout << current->value << ",";
                current = current->next;
            }
            cout << current->value << "}\n";
        }
    }
};

int main()
{
    Ring_List a;
    int i;
    for( i = 1 ; i <= 5; i++)
    {
       a.insert(i);
    }
    
    a.print();

    for( i = 1 ; i <= 5; i++)
    {
       a.remove(i);
    }
    cout<<"list is empty"<<endl;   
    a.insert(2);
    a.print();
    
    
}