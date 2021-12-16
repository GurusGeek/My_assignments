#include <iostream>
using namespace std;
class node 
{
public:
int data;
node *next;

node (int val)
{
  data = val;
  next = NULL;
  
}
};
//-------------------------------------------------
class link
{
private:

    node *head;
    public:

 link()
 {
    head = NULL;
 }
//------------------------------------------------
 void insert(int val)
 {
    node *n = new node(val);
    if (head == NULL)
    {
        n->next = head;
        head = n;
    }
    else
    {
        node *curr = head;
        while(curr->next != NULL)

        curr = curr->next;
        curr ->next = n;
    }
}
//------------------------------------------------

void start(int val)
{
    node *n = new node( val);
    n->next = head;
    head = n;

}
//------------------------------------------------
void print()
{

    node* curr = head;
    while(curr!=NULL)
    {
        cout<<curr->data<<endl;
        curr = curr ->next;
    } 
}
//------------------------------------------------

void remove()
{   
  node *temp ;
  temp=head;
  head = head -> next ;
  delete temp;
}
//-------------------------------------------------
void removeend()
{
    node *pre;
    node *temp;
    while( temp -> next != NULL)
    {
        pre = temp;
        temp = temp -> next;
        delete temp;
    }
    
        
    
}
};
int main()
{
    link a;
    a.start(1);
    a.insert(2);
    a.insert(3);
    a.insert(4);
    
    a.insert(5);
    
    a.remove();
    a.removeend();
    a.print();
    

}   