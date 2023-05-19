#include <iostream>
#include <cstring>
using namespace std;

const int MAX_SIZE = 100;

// Stack data structure implemented using arrays
class Stack
{
private:
    int top;
    string data[MAX_SIZE];

public:
    Stack()
    {
        top = -1;
    }

    bool isEmpty()
    {
        return top == -1;
    }

    bool isFull()
    {
        return top == MAX_SIZE - 1;
    }

    void push(string item)
    {
        if (isFull())
        {
            cout << "Stack overflow" << endl;
            return;
        }
        top++;
        data[top] = item;
    }

    string pop()
    {
        if (isEmpty())
        {
            cout << "Stack underflow" << endl;
            return "";
        }
        string item = data[top];
        top--;
        return item;
    }

    string peek()
    {
        if (isEmpty())
        {
            cout << "Stack underflow" << endl;
            return "";
        }
        return data[top];
    }
};

// Function to check if a character is an operator or not
bool isOperator(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
    {
        return true;
    }
    return false;
}

// Function to perform an operation on two operands based on an operator
string performOperation(char op, string op1, string op2)
{
    string result = "";
    result += op;
    result += op1;
    result += op2;
    return result;
}

// Function to convert a postfix expression to a prefix expression
string postfixToPrefix(string postfix)
{
    Stack s;

    for (int i = 0; i < postfix.length(); i++)
    {
        char c = postfix[i];

        if (isOperator(c))
        {
            string op2 = s.pop();
            string op1 = s.pop();
            string result = performOperation(c, op1, op2);
            s.push(result);
        }
        else
        {
            string operand(1, c);
            s.push(operand);
        }
    }

    return s.peek();
}

// Function to convert a postfix expression to an infix expression
string postfixToInfix(string postfix)
{
    Stack s;

    for (int i = 0; i < postfix.length(); i++)
    {
        char c = postfix[i];

        if (isOperator(c))
        {
            string op2 = s.pop();
            string op1 = s.pop();
            string result = "(" + op1 + c + op2 + ")";
            s.push(result);
        }
        else
        {
            string operand(1, c);
            s.push(operand);
        }
    }

    return s.peek();
}

// Main function to test the program
int main()
{
    string postfix = "AB+C*";
    cout << "Postfix expression: " << postfix << endl;

    string prefix = postfixToPrefix(postfix);
    cout << "Prefix expression: " << prefix << endl;

    string infix = postfixToInfix(postfix);
    cout << "Infix expression: " << infix << endl;

    return 0;
}