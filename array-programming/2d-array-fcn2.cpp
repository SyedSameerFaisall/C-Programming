#include <iostream>
using namespace std;

void printMatrix(int matrix[][3], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    cout << "Matrix:" << endl;
    printMatrix(matrix, 2, 3);
    return 0;
} 