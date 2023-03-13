// This program is performed by using OOP

#include <iostream>
using namespace std;

class SparseMatrix
{
    int sp[10][3];

public:
    void createSparse()
    {
        int k;
        cout << "\nEnter a rows,cols & Non-zero values";
        cin >> sp[0][0] >> sp[0][1] >> sp[0][2];

        for (k = 1; k <= sp[0][2]; k++)
        {
            cout << "\nEnter a row pos,col pos and non-zero values";
            cin >> sp[k][0] >> sp[k][1] >> sp[k][2];
        }
    }

    void printSparse()
    {
        for (int i = 0; i <= sp[0][2]; i++)
        {
            cout << endl;
            for (int j = 0; j < 3; j++)
                cout << sp[i][j] << "\t";
        }
    }

    void transpose(SparseMatrix obj)
    {
        int k = 1, col, i;

        sp[0][1] = obj.sp[0][0];
        sp[0][0] = obj.sp[0][1];
        sp[0][2] = obj.sp[0][2];

        for (col = 0; col < obj.sp[0][1]; col++)
        {
            for (i = 1; i <= obj.sp[0][2]; i++)
            {
                if (obj.sp[i][1] == col)
                {

                    sp[k][0] = obj.sp[i][1];
                    sp[k][1] = obj.sp[i][0];
                    sp[k][2] = obj.sp[i][2];
                    k++;
                }
            }
        }
    }
};

main()
{
    SparseMatrix s1, s2;
    cout << "\nEnter values for Sparse Matrix 1";
    s1.createSparse();

    cout << "\nSparse Matrix 1 is : ";
    s1.printSparse();

    s2.transpose(s1);

    cout << "\nTranspose of Sparse Matrix  is : ";
    s2.printSparse();
}