#include <iostream>

using namespace std;

typedef struct {
    int n;
    int m;
    float** mat;
} Matrix;

Matrix createMatrix(int m, int n) {
    Matrix matrix;
    // Create matrix in memory
    matrix.mat = new float*[m];

    for(int i = 0; i < m; i++){
        matrix.mat[i] = new float[n];
        for(int j = 0; j < n; j++){
            if(j == i) matrix.mat[i][j] = 1;
            else matrix.mat[i][j] = 0;
        }
    }

    matrix.n = n;
    matrix.m = m;

    return matrix;
}

void printMatrix(Matrix matrix) {
    for(int i = 0; i < matrix.m; i++){
        for(int j = 0; j < matrix.n; j++){
            cout << matrix.mat[i][j] << "\t";
        }
        cout << endl;
    }
}

void mulByScalar(Matrix matrix, int scalar) {
    for(int i = 0; i < matrix.m; i++){
        for(int j = 0; j < matrix.n; j++){
            matrix.mat[i][j] = matrix.mat[i][j] * scalar;
        }
    }
}

void addMartices(Matrix a, Matrix b) {
    if(a.m != b.m || a.n != b.n){
        cout << "you gay" << endl;
        return;
    }

    for(int i = 0; i < a.m; i++){
        for(int j = 0; j < a.n; j++){
            a.mat[i][j] += b.mat[i][j];
        }
    }
}

int main()
{
    Matrix a = createMatrix(7, 7);
    Matrix b = createMatrix(7, 7);
    printMatrix(a);
    cout << endl;
    a.mat[3][1] = 4;
    mulByScalar(a, 12);
    printMatrix(a);
    cout << endl;
    addMartices(a, b);
    printMatrix(a);
    return 0;
}
