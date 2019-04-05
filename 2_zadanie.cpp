#include <iostream>
#define MAX 999
using namespace std;

void norma (double m[], int N)
{
    double max = m[1];
    double min = m[1];
    int i ,j;
    for(i = 0; i < N; i++) {
        if (m[i] > max)
            max = m[i];
        if (m[i] < min)
            min = m[i];
    }
    for(j = 0; j < N; j++)
        m[j] = ((m[j] - min)/(max - min));
}


int main()
{
    int n,i ;
    cin >> n;
    double m[MAX];
    for(i = 0; i < n; i++) {
        cin >> m[i];
        cout << endl;
    }
    norma (m,n);
    for (int i = 0; i < n; i++)
        cout << m[i] << endl;
    return 0;
}
