#include <iostream>
using namespace std;

class Stack
{

    char data[10];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    // Push Function
    void push(char c)
    {

        top++;
        data[top] = c;
    }

    // Pop Function
    char pop()
    {
        char x;
        x = data[top];
        top--;
        return x;
    }

    char get_top()
    {
        return data[top];
    }

    int isEmpty()
    {
        if (top == -1)
        {
            return 1;
        }
        return 0;
    }
};

// Priority Check Function
int prior(char op)
{

    switch (op)
    {
    case '+':
        return 10;
    case '-':
        return 10;
    case '*':
        return 11;
    case '/':
        return 11;
    case '^':
        return 20;
    }

    return 0;
}
int main()
{
    Stack s;
    char exp[20];
    char post[20];
    char c;
    int i, j = 0;

    cout << "Enter The infix Expression";
    cin >> exp;
    for (i = 0; exp[i] != '\0'; i++)
    {
        c = exp[i];
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        {
            post[j++] = c;
        }
        else if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
        {
            // isp >= icp
            while (prior(s.get_top()) >= prior(c))
                post[j++] = s.pop();

            s.push(c);
        }
        else if (c == '(')
            s.push(c);
        else if (c == ')')
        {
            while (s.get_top() != '(')
            {
                post[j++] = s.pop();
            }
            s.pop();
        }
    }

    while (!s.isEmpty())
    {
        post[j++] = s.pop();
    }
    post[j] = '\0';
    cout << "\nPostFix Expression : " << post;
}