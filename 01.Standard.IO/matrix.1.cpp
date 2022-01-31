#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // 행렬 입력
    int M[n][m];
    for (int i=0; i < n; i++)
        for (int j=0; j < m; j++)
            cin >> M[i][j];

    // 행렬 출력
    cout << n << " * " << m << " 행렬:" << "\n";
    for (int i=0; i < n; i++) {
        for (int j=0; j < m; j++)
            cout << M[i][j] << " ";
        cout << "\n";
    }
}