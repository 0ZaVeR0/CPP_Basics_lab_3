#include <iostream>
using namespace std;
#define row 10
#define col 10

void initmatr(int M[row][col], int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            M[i][j] = rand() % 100 / 10.;
}

void printmatr(int M[row][col], int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cout << M[i][j] << ", ";
        }
        cout << "\n";
    }
}

int sum(int M[row][col], int r, int c) {
    int center = row / 2;
    int sum = 0;

    for (int i = 0; i < center; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << M[i][j] << " , " << M[i][col- j - 1] << ", ";
            sum = sum + M[i][j] + M[i][col - j - 1];
        }
        cout << "\n";
    }
    for (int i = center; i < row; i++) {
        for (int j = 0; j < 10-i; j++) {
            cout << M[i][j] << " , " << M[i][col - j - 1] << ", ";
            sum = sum + M[i][j] + M[i][col - j - 1];
        }
        cout << "\n";
    }
    return sum;
}

int main()
{
    setlocale(LC_ALL, "Rus");
    int A[row][col];

    initmatr(A,row,col);
    printmatr(A, row, col);
    cout << sum(A,row, col);

    return 0;
}
