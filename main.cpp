#include <iostream>

using namespace std;

int main() {
    cout<<"Введите сколько на сколько будет матрица" << endl;
    int n, m;
    cin >> n;
    cin >> m;
    int matrix[n][m];
    for(int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j)
            matrix[i][j] = rand() % 10 + 1;
    }
    for(int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
    int minValue = matrix[0][0];
    for ( int i = 0; i < n; i++)
        for ( int j = 1; j < m; j++)
            if(minValue > matrix[i][j])
                minValue = matrix[i][j];
    cout <<"Минимальный элемент " << minValue << endl;
    cout <<"Номер(а) строки с минимальным элементом ";
    for(int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j)
            if(minValue == matrix[i][j]){
                cout << i+1 <<" ";
                break;
            }
    }
    return 0;
}