#include <iostream>
#include <stdlib.h>

void UserMatrix(int **Matrix, int &Summ1, int &Summ2, int &Result) {
    // int **Matrix = *matrix;
    srand(time(NULL));
    int MatrixSize = 0;
    bool IsValidEnter = false;
    do {
        std::cout << "Enter matrix size:  ";
        std::cin >> MatrixSize;
        if (MatrixSize <= 0) {
            std::cout << "Enter is invalid.\n";
        } else IsValidEnter = true;
    }while(!IsValidEnter);
    
    Matrix = (int**)malloc(MatrixSize * sizeof(int*));
    for (int i = 0; i < MatrixSize; i++)
        Matrix[i] = (int*)malloc(MatrixSize * sizeof(int));
    for (int i = 0; i < MatrixSize; i++) {
        std::cout << i << std::endl;
        for (int j = 0 ; j < MatrixSize; j++) {
            Matrix[i][j] = rand() % 10;
        }
    }
     for (int i = 0; i < MatrixSize; i++) {
        for (int j = 0 ; j < MatrixSize; j++) {
            std::cout << Matrix[i][j] << " "; 
        }
        std::cout << std::endl;
    }
    // for (int i = 0; i < MatrixSize; i++) {
    //     Summ1 += *Matrix[i][i];
    // }
    // for (int i = 0; i < MatrixSize; i++) {
    //     Summ2 += *Matrix[i][MatrixSize-i-1];
    // }
    // Result = Summ1 - Summ2;
    // std::cout << "Result: " << Result << "\n";
    // free(Matrix);
}

int main() {
    int **Matrix;
    int Summ1, Summ2, Result;
    int MatrixSize = 5;
    // Matrix = (int**)malloc(MatrixSize * sizeof(int*));
    // for (int i = 0; i < MatrixSize; i++)
    //     Matrix[i] = (int*)malloc(MatrixSize * sizeof(int));
    //  for (int i = 0; i < MatrixSize; i++) {
    //     for (int j = 0 ; j < MatrixSize; j++) {
    //         Matrix[i][j] = rand() % 10;
    //     }
    // }
    
    // for (int i = 0; i < MatrixSize; i++) {
    //     for (int j =0; j < MatrixSize; j++)
    //         std::cout << Matrix[i][j] << " ";
    //     std::cout << std::endl;
    // }
    UserMatrix(Matrix, Summ1, Summ2, Result);
}
