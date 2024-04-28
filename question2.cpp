#include <iostream>

using namespace std;

int main() {
    int rows, columns;

    cout << "Enter the number of rows not more than 3:  ";
    cin >> rows;

    cout << "Enter the number of rows not exceeding than 3:  ";
    cin >> columns;
    
    if (rows > 3 || columns > 3) {
        cout << "The number of rows or columns exceeds the limit of 3. The Program Exits" << endl;
        return 3;
    }

    double** arr = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        arr[i] = new double[columns];
    }

    cout << " fill in the array with some values. " << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << "Enter the value for element [" << i << "][" << j << "]:  ";
            cin >> arr[i][j];
        }
    }

    cout << "Fantastic job! Here are the values you've entered:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
