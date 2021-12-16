#include <iostream>
using namespace std;

class Stack
{
private:
    int *stk, *top, size;

public:
    Stack()
    {
        size = 10;
        stk = new int[size];
        top = nullptr;
    }
    void push(int value)
    {
        if (top == stk + size - 1)
        {
            cout << "Stack is overflow" << endl;
            return;
        }
        else if (top == nullptr)
        {
            top = stk;
            *top = value;
            return;
        }

        else
        {
            top++;
            *top = value;
            return;
        }
    }
    void pop()
    {
        if (top == nullptr)
        {
            cout << "Stack is underflow" << endl;
            return;
        }
        else
        {

            if (top == stk)
            {
                *top = 0;
                top = nullptr;
            }
            else
            {
                *top = 0;
                top--;
            }
        }
    }
    void print()
    {
        if (top == nullptr)
        {
            cout << "{}" << endl;
        }
        else
        {
            cout << "{";
            while (top != stk)
            {
                cout << *top << ",";
                pop();
            }
             cout<<*top<<"}"<<endl;;
            pop();
        }
    }
};

int main()
{
    Stack a;
    a.push(1);
    a.push(3);
    a.push(4);
    a.push(5);
    a.push(6);
    a.pop();
    a.print();
    
}