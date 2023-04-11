#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <iostream>
using namespace std;

const int ROWS = 10;
const int COLS = 5;

void input_matrix(float matrix[][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "\n\tDigite o elemento da linha " << i+1 << " coluna " << j+1 << ": ";
            cin >> matrix[i][j];
        }
    }
}

float sum_below_sixth_row(float matrix[][COLS]) {
    float sum = 0;
    for (int i = 5; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            sum += matrix[i][j];
        }
    }
    return sum;
}

int main() {
    setlocale(LC_ALL,"Portuguese");
    float matrix[ROWS][COLS];
    input_matrix(matrix);
    float sum = sum_below_sixth_row(matrix);
    cout << "\n\tA soma dos elementos abaixo da sexta linha da matriz é: " << sum << endl;
    return 0;
}