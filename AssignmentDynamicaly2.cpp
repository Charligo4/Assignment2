#include <iostream>

using namespace std;

int main() {
    int rows, colums;

    // Prompt user for dimensions of the array
    cout << "Enter the number of rows not exceeding 3: ";
    cin >> rows;
    if (rows > 3 || rows <= 0) {
        cout << "Number of rows must be between 1 and 3." << endl;
        return 1;
    }

    cout << "Enter the number of columns (max 3): ";
    cin >> colums;
    if (colums > 3 || colums <= 0) {
        cout << "Number of columns must be between 1 and 3." << endl;
        return 1;
    }

    // Dynamically allocate 2D array
    double** array = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        array[i] = new double[colums];
    }

    // Assign values to the array
    cout << "Enter values for the array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < colums; ++j) {
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    // Output values of the array
    cout << "Values of the array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < colums; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate memory
    for (int i = 0; i < rows; ++i) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}

