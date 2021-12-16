#include <iostream>
using namespace std;
 

struct node
{
    int info;
    struct node *next;
    struct node *prev;
    struct node *n;
    struct node *p,*start, *last;;
}
*start, *last;


class double_list
{
    public:
    node *create_node(int)
    {
    int value;   
    struct node *temp;
    temp = new(struct node);
    temp->info = value;
    temp->next = NULL;
    temp->prev = NULL;
    return temp;

    }

    void insert_last(int value)
    {
         
    struct node *temp;
    temp = create_node(value);
    if (start == last && start == NULL)
    {
    
        start = last = temp;
        start->next = last->next = NULL;    
        start->prev = last->prev = NULL;
    }
    else
    {
        last->next = temp;
        temp->prev = last;
        last = temp;
        start->prev = last;
        last->next = start;
    }

    }


    void display()
   { 
       
    cout<<"(";
    struct node;
    struct node *start , *temp ;
    struct node *temp = start; 
  
    while (temp->next != start) 
    {    
        
        cout<<temp->data<<","; 
        temp = temp->next; 
    } 
         cout<<temp->data; 
  
   cout<<"<->";
    Node *last = start->prev; 
    temp = last; 
    while (temp->prev != last) 
    { 
    cout<< temp->data<<","; 
        temp = temp->prev; 
    } 
    cout<< temp->data<<")";
 } 
    
    void remove(int value)
 {
    struct node *n , *s , *ptr;
   int count , i ;

  
   if (start == last && start == NULL) {
      cout<<"List is empty, nothing to delete"<<endl;
      return;
   }
   if (count < value) {
      cout<<"Position out of range"<<endl;
      return;
   }
   s = start;
   if(value == 1) {
      count--;
      last->n = s->n;
      s->n->p = last;
      start = s->n;
      free(s);
      cout<<"Element Deleted"<<endl;
      return;
   }
   for (i = 0;i < value - 1;i++ ) {
      s = s->n;
      ptr = s->p;
   }
   ptr->n = s->n;
   s->n->p = ptr;
   if (value == count) {
      last = ptr;
   }
   count--;
   free(s);
   cout<<"Element Deleted"<<endl;
 }


} ;

        
  

 


int main()
{
   double_list a;
   a.insert_last(1);
   a.insert_last(2);
   a.insert_last(3);
   a.insert_last(4);
   a.insert_last(5);
   a.display();
};