#include <iostream>
using namespace std;

class Mat {
public:
    float **matrix;
    int row, col;
    Mat(int n, int m);
    Mat(); //default constructor
    void store();
    void display();
    Mat operator+(Mat m) {
        Mat ans;
        if (m.row != row || m.col != col) {
            cout << " Matrix addition is not possible for different sizes of matrixes!\n";
            return ans;
        }
        ans = Mat(row, col);
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                ans.matrix[i][j] = matrix[i][j] + m.matrix[i][j];
            }
        }
        return ans;
    }

    Mat operator-(Mat m) {
        Mat ans;
        if (m.row != row || m.col != col) {
            cout << " Matrix subtraction is not possible for different sizes of matrixes!\n";
            return ans;
        }
        ans=Mat(row, col);
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                ans.matrix[i][j] = matrix[i][j] - m.matrix[i][j];
            }
        }
        return ans;
    }

    Mat operator*(Mat m) {
        Mat ans;
        if (col != m.row) {
            cout << " Matrix multiplication is not possible. Column of 1st matrix not equal to row of second matrix!\n";
            return ans;
        }
        ans = Mat(row, m.col);
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < m.col; j++) {
                ans.matrix[i][j] = 0;
                for (int k = 0; k < m.row; k++) {
                    ans.matrix[i][j] += matrix[i][k] * m.matrix[k][j];
                }
                
            }
        }
        return ans;
    }
};

Mat::Mat(int n, int m) {
    row = n;
    col = m;
    matrix = new float* [row];
    for (int i = 0; i < row; i++) {
        matrix[i] = new float[col];
    }
}

Mat::Mat() {
    row = 1;
    col = 1;
    matrix = new float* [row];
    for (int i = 0; i < row; i++) {
        matrix[i] = new float[col];
    }
}

void Mat::store() {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << " Enter the value of matrix--" << i + 1 << j + 1 << ": ";
            cin >> matrix[i][j];
        }
        cout << endl;
    }
}

void Mat::display() {
    cout << " The matrix is:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << " " << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    Mat M1, M2, M3, M4, M5;
    int r1, c1, r2, c2;
    cout << " Enter first matrix size : ";
    cin >> r1 >> c1;
    M1 = Mat(r1, c1);
    cout << " Enter second matrix size : ";
    cin >> r2 >> c2;
    M2 = Mat(r2, c2);
    cout << " Two instances of 'Mat' class 'M1', 'M2' is created\n";
    cout << " Storing values in M1\n";
    M1.store();
    cout << " Storing values in M2\n";
    M2.store();
    M3 = M1 + M2;
    if (M1.row == M2.row && M1.col == M2.col) {
        cout << " M1 + M2 =\n";
        M3.display();
    }
    M4 = M1 - M2;
    if (M1.row == M2.row && M1.col == M2.col) {
        cout << " M1 - M2 =\n";
        M4.display();
    }
    M5 = M1 * M2;
    if (M1.col == M2.row) {
        cout << " M1 * M2 =\n";
        M5.display();
    }
    return 0;
}
