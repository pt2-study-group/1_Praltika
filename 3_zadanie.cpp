#include <iostream>
#define MAX 999
using namespace std;

double* norma(double m[], int N)
{
    double *c = new double[MAX];
    double max = m[0];
    double min = m[0];
    for (int i = 0; i < N; i++) {
        if (m[i] > max)
            max = m[i];
        if (m[i] < min)
            min = m[i];
    }
    for (int j = 0; j < N; j++)
        c[j] = (m[j] - min) / (max - min);
       return c;
}

int main()
{
    int n;
    cout << "Массив размером - "
    cin >> n;
    cout << endl;
    cout << endl;
    double *m = new double[MAX];
    double *b = new double [MAX];
    cout << "Введите значения"<<endl;
    for (int i = 0; i < n; i++) {
        cin >> m[i];
        cout << endl;
    }

    b = norma(m, n);//b  пост фактум переходит в с в функции , а затем обратно.
    cout << "Нормированный массив";
    for (int i = 0; i < n; i++) {
        cout << b[i] << endl;
        cout << endl;
    }

    delete [] b;
    delete [] m;
    return 0;
}
