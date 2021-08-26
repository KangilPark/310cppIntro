#include "demo.h"
#include <math.h>
#include <vector>

#include <iostream>

using namespace std;

int maxElement (vector<int> array) {
    // TODO : implement

}

int binary(int n){
    // TODO : implement

}

vector<vector<int>> matrixMultiplication (vector<vector<int>> a, vector<vector<int>> b){
    // TODO : implement
    
}

void printMatrix(vector<vector<int>> matrix){
    int n = matrix[0].size();
    printf("Size of n = %d\n", n);
    for (int i=0; i<n; i++){
        printf("[ ");
        for (int j=0; j<n; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("]\n");
    }
}