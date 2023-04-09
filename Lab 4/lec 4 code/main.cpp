#include <iostream>
#include <string.h>

using namespace std;
class Stack
{
private:
    int tos;
    int Size;
    int* ar;
public:
    int push(int x);
    int pop();
    Stack()
    {
        tos = 0;
        Size = 10;
        ar = new int[Size];
    }
    Stack(int s)
    {
        tos = 0;
        Size = s;
        ar = new int[Size];
    }

    // Copy Constructor
    Stack(Stack& stk)
    {
        tos = stk.tos;
        Size = stk.Size;
        for(int i =0; i < Size; i++)
        {
            ar[i] = stk.ar[i];
        }
    }
    int Getsize(){return Size;}
    int GetTos(){return tos;}
    friend istream & operator >> (istream& in, Stack& stk);
    friend ostream& operator << (ostream& out,  Stack& stk);

    ~Stack()
    {
        delete[] ar;
    }
};
ostream& operator << (ostream& out,  Stack& stk);
istream& operator >> (istream& in, Stack& stk);

int main()
{
    Stack st(3);
    cout << "Please fill stack" << endl;
    cin >> st;

    cout << endl << endl;
    cout << "The numbers in the stack is : " << endl;
    cout << st;
    cout << endl << endl;
    cout << st.pop() << endl;
    cout << st.pop() << endl;
    cout << st.pop() << endl;
    cout << st.pop() << endl;
    cout << st.push(15) << endl;
    cout << st.push(-3) << endl;
    cout << endl << endl;
    cout << st;
    return 0;
}
int Stack::push(int x)
{
    if (Size > tos)
    {
        ar[tos] = x;
        tos++;
        return true;
    }
    else
    {
        return false;
    }
}

int Stack :: pop()
{
    int retval = -1;
    if (tos > 0)
    {
        tos--;
        retval = ar[tos];
    }
    return retval;
}

istream & operator >> (istream & in, Stack& stk)
{
    int x;
    for (int i = 0; i < stk.Getsize(); i++)
    {
        cin >> x;
        stk.push(x);
    }
}

ostream& operator << (ostream& out,  Stack& stk)
{
    for (int i = 0; i < stk.GetTos() ; i++)
    {
        out << stk.ar[i] << endl;

    }
    return out;
}
