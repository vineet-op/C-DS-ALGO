// convert the decimal number into the binary number by using stack and recursion function.
#include <iostream>
using namespace std;
class Stack
{
    int data[10];
    int top;

public:
    Stack()
    {
        top = -1;
    }
    void push(int no)
    {
        top++;
        data[top] = no;
    }
    int pop()
    {
        int no = data[top];
        top--;
        return no;
    }
    int isempty()
    {
        if (top == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int isfull()
    {
        if (top == 9)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void display()
    {
        for (int i = top; i >= 0; i--)
        {
            cout << data[i] << "\t";
        }
    }
};
class Binary
{
public:
    void Decimal_binary();
};
void Binary ::Decimal_binary()
{
    int a[10], i = 0, num;
    cout << "\n\t Enter the number to convert into the binary number :- ";
    cin >> num;
    while (num != 0)
    {
        a[i] = num % 2;
        i++;
        num = num / 2;
    }
    while (i > 0)
    {
        i--;
        cout << a[i];
    }
    Stack s1;
    cin >> num;
    while (num != 0)
    {
        s1.push(num % 2);
        num = num / 2;
    }
    while (!s1.isempty())
    {
        cout << s1.pop();
    }
}
int main()
{
    Binary obj;
    system("clear");
    obj.Decimal_binary();
    cout << "\n\t The conversion of decimal number to binaryu number ";
    return 0;
}
