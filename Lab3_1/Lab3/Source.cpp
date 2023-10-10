#include <iostream>
using namespace std;
#define N1 5
#define N2 5
		
void initmatr(int M[],int s)
{
    for (int i = 0; i < s; i++)
        M[i] = rand() % 100 / 10.;
}

int rowmax(int M[],int n)
{
    int max = -200;
    int m_index = 0;
    for (int i = 0; i < n; i++) {
        if (max < M[i]) {
            max = M[i];
            m_index = i;
        }
    }
    return m_index;
}

int sum_of_2nd(int M[],int n, int max) {
    int sum = 0;
    for (int i = max; i < n; i++) {
        sum += M[i];
    }
    return sum;
}

void printmatr(int M[N1])
{
    int i, j;
    for (i = 0; i < N1; i++)
    {
        cout << M[i] << ", ";
    }
    cout << "\n";
}


int main()
{
    setlocale(LC_ALL, "Rus");
    int A[N1], B[N2];
    int sum_A, sum_B;

    initmatr(A,N1);
    initmatr(B,N2);

    printmatr(A);
    printmatr(B);

    sum_A = sum_of_2nd(A, N1, rowmax(A,N1));
    sum_B = sum_of_2nd(B, N2, rowmax(B, N2));

    if (sum_A < sum_B) {
        cout << "Сумма элементов второй части меньше в массиве A";
    }
    else if (sum_A > sum_B) {
        cout << "Сумма элементов второй части меньше в массиве B";
    }
    else {
        cout << "Сумма элементов второй части массивов равна";
    }

    return 0;
}
