#include <iostream>
using namespace std;

void calTranspose(int mat[][100], int transpose[][100], int n, int m)
{
    // Calculate transpose
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            transpose[j][i] = mat[i][j];
        }
    }

    // Print transpose
    cout << "Transpose of matrix:" << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n, m;

    cout << "Enter no of rows and columns: ";
    cin >> n >> m;

    int mat[100][100];
    int transpose[100][100];

    cout << "Enter elements:" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }

    calTranspose(mat, transpose, n, m);

    return 0;
}

