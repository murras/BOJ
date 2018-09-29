#include <iostream>
using namespace std;
int n;
int arr[8][8];
int result;

bool check(int row, int col) {
    for (int i = 0; i < n; ++i) {
        if (i == row) {
            continue;  // 행 확인
        }
        if (arr[i][col]) {
            return false;  //  열 확인
        }
    }
    // 좌쪽위 대각선
    int cross_row = row - 1;
    int cross_col = col - 1;
    while (cross_row >= 0 && cross_col >= 0) {
        if (arr[cross_row][cross_col]) {
            return false;
        }
        cross_row--;
        cross_col--;
    }
    // 우측위 대각선
    cross_row = row - 1;
    cross_col = col + 1;
    while (cross_row >= 0 && cross_col < n) {
        if (arr[cross_row][cross_col]) {
            return false;
        }
        cross_row--;
        cross_col++;
    }
    return true;
}
void dfs(int row) {
    if (row == n) {
        result++;
    }
    for (int column = 0; column < n; ++column) {
        arr[row][column] = true;
        if (check(row, column)) {
            dfs(row + 1);
        }
        arr[row][column] = false;
    }
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    cin >> n;
    while (n--) {
        memset(arr, 0, sizeof(arr));
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                cin >> arr[i][j];
            }
        }
        dfs(0, 0);
    }
}