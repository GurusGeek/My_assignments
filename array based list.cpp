#include <iostream>
using namespace std;
class Node
{
    private:
    int length , size , *arr , *curr ,i;
    
    public:
    Node()
    {
      size = 5;
      arr = new int[size];
      length = 0;
      
    }
    
    void add(int v)
    {
        if (length < size)
        {
            curr = arr ;
            for (i = 1;i <= length ; i++ )
            {
                curr++;
            }
            *curr = v;
            length++;
        }
        else
        cout<<"list is full";
    }
    
    void print(){
        if (length > 0)
        {
            curr = arr;
            for (i = 1 ; i <= length ; i ++)
            {
                cout<<*curr<<endl;
                curr++;
            }
        }
    }
    
};
int main()
{
    Node a;
    a.add(1);
    a.add(2);
    a.add(3);
    a.add(4);
    a.add(5);
    a.add(6);
    a.print();
    return 0;
}