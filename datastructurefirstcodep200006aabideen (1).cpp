
#include<iostream>
#include<string>
using namespace std;
class List
{
    int* array;
    int* current;
    int length;
    int size;
    int d;
public:
    List()
    {
        length = 0;
        size = 0;
        d = 0;
        cout << "Enter the size of ARRAY :";
        cin >> size;
        array = new int[size];
    }
    //------------------------------------------------------------
    List(List& othrList)
    {
    }


    void Lists()
    {
        length = (2-size);
        cout << endl;
            
                for(int i=0;i<length;i++)
                {
                    cin>>d;
                    *(array+i)=d;
                    current++;
                }   
    }
//--------------------------------------------------------------------------
    void start()
    {
        current = array;
    }
//-----------------------------------------------------------------
    void end()
    {
        for (int i = 1; i < length; i++)
        {
            current++;
        }
    }
//-----------------------------------------------------------

    void next()
    {
        start();
        current++;
    }
//-----------------------------------------------------

    void back()
    {
        current--;
    }
//-----------------------------------------------------
    void insert(int value, int position)
    {
        start();
        end();
        int newsize = size + 1;
        int j = 0;
        int* newarray = new int [newsize];
        for(int i = 1; i < newsize; i++){
            if(i == position){
                newarray[i] = value;
                continue;
            }
            newarray[i] = array[j];
            j++;
        }
        array = newarray;
        size++;
    }
    //------------------------------------------------------

    void remove(int position)
    {
        int newsize = size;
        int* newarray = new int [newsize];
        int j = 0;
        for(int i = 1; i < size ; i++){
            if( array[i] != position){
                newarray[j] = array[i];
                j++;
            }
        }
        array = newarray;
        size--;
    }
    //--------------------------------------------------------

    int get(int position)
    {
        int num = 0;
        for (int i = 1; i < size; i++)
        {
            if(i == position){
                num = array[i];
                break;
            }
        }
        return num;
    }
//---------------------------------------------------
    void update(int value, int position)
    {
        for (int i = 1; i < size; i++)
        {
            if(i == position){
                array[i] = value;
                break;
            }
        }
    }
    //--------------------------------------------

    bool find(int value)
    {
        bool found = false;
        start();
        for (int i = 1; i < size; i++)
        {
            if (*current == value)
            {
                found = true;
                break;
            }
            next();
        }
        return found;
    }
    //-------------------------------------------------------------
    void clear()
    {
        array == NULL;
    }
    //--------------------------------------------------------
    void print()
    {
        start();
        cout<<" Start : "<<*current<<endl;
        end();
        cout<<"End :"<<*current<<endl;
        next();
        cout<<"Next :"<<*current<<endl;
        back();
        cout<<"Back :"<<*current<<endl;
        for(int i = 1; i < size; i++){
            cout<<array[i]<<" ";
        }
        cout<<endl;
    }
    //------------------------------------------------------
        

    int getsize(){
        return size;
    }

    //------------------------------------------------------

    bool isEmpty(){
        if (size==0)
     {
         cout<<"Array is Empty";
     }
    }

     //----------------------------------------------------------
     bool isFull()
     {

        if (length== ( size))
        {
            cout<<"array is Full"<<endl;
        }
     }
     //-----------------------------------------------------

     int List :: length(){
         return length;

	
	}
};

int main()
{
    isFull();
    
    List l;
    l.insert
 
    return 0;
};