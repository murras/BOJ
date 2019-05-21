#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        int dist_square = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
        int r_p_square = (r1 + r2) * (r1 + r2);
        int r_m_square = (r1 - r2) * (r1 - r2);

        if (dist_square == 0) {
            // 중심이 같고
            if (r1 == r2) {
                // 반지름이 같음
                cout << "-1";
            } else {
                // 반지름이 다름
                cout << "0";
            }
        } else if (dist_square == r_p_square || dist_square == r_m_square) {
            // 내접 or 외접
            cout << "1";
        } else if (r_m_square < dist_square && dist_square < r_p_square) {
            // 그 사이의 거리
            cout << "2";
        } else {
            cout << "0";
        }

        cout << '\n';
    }
}