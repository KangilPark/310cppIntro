#include "demo.h"
#include <vector>
#include <iostream>
#include <math.h>

int main(){
    // maxElement
    vector<int> testArray = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};       
    int max = maxElement(testArray);
    cout << "The max element is: " << max << endl;
    
    // binary
    int binaryResult = binary(64);
    printf("The results for binary is: %d\n", binaryResult);

    // matrixMultiplication
    vector<vector<int>> testMatrixA = {{10, 20, 10}, {4, 5, 6}, {2, 3, 5}};
    vector<vector<int>> testMatrixB = {{3, 2, 4}, {3, 3, 9}, {4, 4, 2}};
    vector<vector<int>> testMatrixC = {{10, 20, 10}, {4, 5, 6}, {2, 3, 5}};
    vector<vector<int>> testMatrixD = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};

    vector<vector<int>> testMatrixResultA = matrixMultiplication(testMatrixA, testMatrixB);
    vector<vector<int>> testMatrixResultB = matrixMultiplication(testMatrixC, testMatrixD);

    // Print matrices
    printMatrix(testMatrixResultA);
    printMatrix(testMatrixResultB);
}