#include <iostream>
using namespace std;

class DQueue
{

    int front, rear, data[10];

public:
    DQueue()
    {
        front = 0;
        rear = -1;
    }

    void enque_r(int no)
    {

        if (rear < 10)
        {
            rear++;
            rear[data] = no;
        }

        else

            cout << "Queue is Full, Cant Insert from Rear Side";
    }

    void enque_f(int no)
    {
        if (front > 0)
        {
            front--;
            data[front] = no;
        }
        else
            cout << "QFull. Can't insert from front side";
    }

    int deque_r()
    {
        if (rear + 1 == front)
        {
            cout << "Can't Delete from Rear ";
        }
        else
        {
            int no = data[rear];
            rear--;
            return no;
        }
    }

    int deque_f()
    {

        if (front != rear + 1)
        {

            int no = data[front];
            front++;
            return no;
        }

        else
        {
            cout << "Can't Delete from Front";
        }
    }

    void display()
    {

        if (rear == -1 && front == 0)
        {
            cout << "Cant't Display Queue is Empty ";
        }

        for (int i = front; i <= rear; i++)
            cout << data[i] << "\t";
    }
};

main()
{
    DQueue d;
    int ch, no;
    do
    {

        cout << " \n Menu\n 1.Insert from Rear \n 2.Delete from Rear \n 3.Insert from Front \n 4.Delete from Front \n 5.Display \n 6.Exit";
        cout << " \n\tEnter Your Choice";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "\nEnter a data";
            cin >> no;
            d.enque_r(no);
            break;
        case 2:
            no = d.deque_r();
            cout << "\nDeleted data" << no;
            break;

        case 3:
            cout << "\nEnter a data";
            cin >> no;
            d.enque_f(no);
            break;
        case 4:
            no = d.deque_f();
            cout << "\nDeleted data" << no;
            break;

        case 5:
            d.display();
            break;
        }
    } while (ch != 6);
}