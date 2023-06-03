#include <iostream>
using namespace std;

class Queue
{

    int Q[10];
    int front, rear;

public:
    Queue()
    {
        front = 0;
        rear = -1;
    }

    void enque(int no)
    {
        rear++;
        Q[rear] = no;
    }

    int deque()
    {
        int no;
        no = Q[front];
        front++;
        return no;
    }

    int isEmpty()
    {
        if (rear + 1 == front)
            return 1;

        return 0;
    }
};

class Graph
{

    int g[20][20];
    int visited[20];
    int vt, ed;

public:
    Graph(int v)
    {
        vt = v;

        for (int i = 0; i < 20; i++)
        {
            for (int j = 0; i < 20; i++)
            {
                g[i][j] = 0;
            }
        }
    }

    void initvisited()
    {

        for (int j = 0; j < 20; j++)
        {
            visited[j] = 0;
        }
    }

    void create()
    {
        int ch, sv, ev, wt;

        cout << "\nMENU\n1.Undirected Unweighted\n2.Directed Unweighted\n3.Undirected Weighted\n4.Directed Weighted";
        cout << "enter the type of Graph";
        cin >> ch;

        cout << "Enter the Number of Edges";
        cin >> ed;

        for (int i = 0; i < ed; i++)
        {
            cout << "\n\t Enter the Start vertex and End vertex";
            cin >> sv >> ev;

            if (ch == 1)
            {
                g[sv][ev] = 1;
                g[ev][sv] = 1;
            }

            else if (ch == 2)
                g[sv][ev] = 1;

            else if (ch == 3)
            {
                cout << "Enter the Weightes";
                cin >> wt;
                g[sv][ev] = wt;
                g[ev][sv] = wt;
            }

            else if (ch == 4)
            {
                cout << "\nEnter a Weight ";
                cin >> wt;
                g[sv][ev] = wt;
            }
            else
            {

                cout << "Entering invalid type";
                break;
            }
        }
    }

    void display()
    {

        for (int i = 0; i < vt; i++)
        {
            cout << "\n";
            for (int j = 0; i < vt; i++)
                cout << g[i][j] << "\t";
        }
    }

    void DFS(int v)
    {
        cout << v << "\t";
        visited[v] = 1;

        for (int i = 0; i < vt; i++)
        {
            if (g[v][i] != 0 && visited[i] == 0)
            {
                DFS(i);
            }
        }
    }

    void BFS(int v)
    {

        Queue q;
        visited[v] = 1;
        q.enque(v);
        while (!q.isEmpty())
        {

            v = q.deque();
            cout << v << "\t";
            for (int i = 0; i < vt; i++)
            {
                if (g[v][i] != 0 && visited[i] == 0)
                {
                    q.enque(i);
                    visited[i] = 1;
                }
            }
        }
    }
};

main()
{

    int v;
    cout << "\nEnter a Vertex";
    cin >> v;
    Graph g(v);
    g.create();
    g.display();
    int sv;
    cout << "\nEnter start vertex for Depth Wise";
    cin >> sv;
    g.initvisited();
    g.DFS(sv);
    cout << "\nEnter start vertex of Level Wise";
    cin >> sv;
    g.initvisited();
    g.BFS(sv);
}