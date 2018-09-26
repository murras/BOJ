#include <iostream>
using namespace std;
bool chess[15][15];
int n;
int count;
bool check(int row, int col) {
    for (int i = 0; i < n; ++i) {
        if (i == row) {
            continue;  // 행 확인
        }
        if (chess[i][col]) {
            return false;  //  열 확인
        }
    }
    // 좌쪽위 대각선
    int cross_row = row - 1;
    int cross_col = col - 1;
    while (cross_row >= 0 && cross_col >= 0) {
        if (chess[cross_row][cross_col]) {
            return false;
        }
        cross_row--;
        cross_col--;
    }
    // 우측위 대각선
    cross_row = row - 1;
    cross_col = col + 1;
    while (cross_row >= 0 && cross_col < n) {
        if (chess[cross_row][cross_col]) {
            return false;
        }
        cross_row--;
        cross_col++;
    }
    return true;
}
void nqueen(int row) {
    if (row == n) {
        ::count++;
    }
    for (int column = 0; column < n; ++column) {
        chess[row][column] = true;
        if (check(row, column)) {
            nqueen(row + 1);
        }
        chess[row][column] = false;
    }
}

int main() {
    cin >> n;
    nqueen(0);
    cout << ::count;
}