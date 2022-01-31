#include <iostream>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    // 두 개의 행렬 입력
    int A[n][m], B[m][k];
    for (int i=0; i < n; i++)
        for (int j=0; j < m; j++)
            cin >> A[i][j];
    for (int i=0; i < m; i++)
        for (int j=0; j < k; j++)
            cin >> B[i][j];

    // 두 개의 행렬 출력
    cout << n << " * " << m << " 행렬:" << "\n";
    for (int i=0; i < n; i++) {
        for (int j=0; j < m; j++)
            cout << A[i][j] << " ";
        cout << "\n";
    }
    cout << m << " * " << k << " 행렬:" << "\n";
    for (int i=0; i < m; i++) {
        for (int j=0; j < k; j++)
            cout << B[i][j] << " ";
        cout << "\n";
    }
}