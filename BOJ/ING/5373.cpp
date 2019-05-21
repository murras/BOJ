#include <bits/stdc++.h>
using namespace std;
class Side {
   public:
    char s[3][3];
    Side() {}
    Side(const Side *n) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                s[i][j] = n->s[i][j];
            }
        }
    }
    Side(char color) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++)
                s[i][j] = color;
        }
    }
    void print() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << s[i][j];
            }
            cout << '\n';
        }
    }
};

class Cube {
   public:
    Side *U, *D, *F, *B, *L, *R;
    Cube() {
        U = new Side('w');
        D = new Side('y');
        F = new Side('r');
        B = new Side('o');
        L = new Side('g');
        R = new Side('b');
    }

    void rotate_L(int rotate) {
        // L은 U->F->D->B->U
        for (int i = 0; i < rotate; i++) {
            Side temp((const Side)(this->U));
            // U<--B
            this->U->s[0][0] = this->B->s[2][2];
            this->U->s[1][0] = this->B->s[1][2];
            this->U->s[2][0] = this->B->s[0][2];
            // B<--D
            this->B->s[0][2] = this->D->s[2][0];
            this->B->s[1][2] = this->D->s[1][0];
            this->B->s[2][2] = this->D->s[0][0];
            // D<--F
            this->D->s[0][0] = this->F->s[0][0];
            this->D->s[1][0] = this->F->s[1][0];
            this->D->s[2][0] = this->F->s[2][0];
            // F<--U
            this->F->s[0][0] = temp.s[0][0];
            this->F->s[1][0] = temp.s[1][0];
            this->F->s[2][0] = temp.s[2][0];
        }
    }
    void rotate_R(int rotate) {
        // R은 U->B->D->F->U
        for (int i = 0; i < rotate; i++) {
            Side temp((const Side)(this->U));
            // U<--F
            this->U->s[0][2] = this->F->s[0][2];
            this->U->s[1][2] = this->F->s[1][2];
            this->U->s[2][2] = this->F->s[2][2];
            // F<--D
            this->F->s[0][2] = this->D->s[0][2];
            this->F->s[1][2] = this->D->s[1][2];
            this->F->s[2][2] = this->D->s[2][2];
            // D<--B
            this->D->s[2][2] = this->B->s[0][0];
            this->D->s[1][2] = this->B->s[1][0];
            this->D->s[0][2] = this->B->s[2][0];
            // B<--U
            this->B->s[2][0] = temp.s[0][2];
            this->B->s[1][0] = temp.s[1][2];
            this->B->s[0][0] = temp.s[2][2];
        }
    }
    void rotate_U(int rotate) {
        // U는 L->B->R->F->L
        for (int i = 0; i < rotate; i++) {
            Side temp((const Side)(this->L));
            // L<--F
            this->L->s[0][0] = this->F->s[0][0];
            this->L->s[0][1] = this->F->s[0][1];
            this->L->s[0][2] = this->F->s[0][2];
            // F<--R
            this->F->s[0][0] = this->R->s[0][0];
            this->F->s[0][1] = this->R->s[0][1];
            this->F->s[0][2] = this->R->s[0][2];
            // R<--B
            this->R->s[0][0] = this->B->s[0][0];
            this->R->s[0][1] = this->B->s[0][1];
            this->R->s[0][2] = this->B->s[0][2];
            // B<--L
            this->B->s[0][0] = temp.s[0][0];
            this->B->s[0][1] = temp.s[0][1];
            this->B->s[0][2] = temp.s[0][2];
        }
    }
    void rotate_D(int rotate) {
        // D는 L->F->R->B->L
        for (int i = 0; i < rotate; i++) {
            Side temp((const Side)(this->L));
            // L<--B
            this->L->s[2][0] = this->B->s[2][0];
            this->L->s[2][1] = this->B->s[2][1];
            this->L->s[2][2] = this->B->s[2][2];
            // B<--R
            this->B->s[2][0] = this->R->s[2][0];
            this->B->s[2][1] = this->R->s[2][1];
            this->B->s[2][2] = this->R->s[2][2];
            // R<--F
            this->R->s[2][0] = this->F->s[2][0];
            this->R->s[2][1] = this->F->s[2][1];
            this->R->s[2][2] = this->F->s[2][2];
            // F<--L
            this->F->s[2][0] = temp.s[0][0];
            this->F->s[2][1] = temp.s[0][1];
            this->F->s[2][2] = temp.s[0][2];
        }
    }
    void rotate_F(int rotate) {
        // F는 L->U->R->D->L
        for (int i = 0; i < rotate; i++) {
            Side temp((const Side)(this->L));
            // L<--D
            this->L->s[0][2] = this->D->s[0][0];
            this->L->s[1][2] = this->D->s[0][1];
            this->L->s[2][2] = this->D->s[0][2];
            // D<--R
            this->D->s[0][0] = this->R->s[2][0];
            this->D->s[0][1] = this->R->s[1][0];
            this->D->s[0][2] = this->R->s[0][0];
            // R<--U
            this->R->s[0][0] = this->U->s[2][0];
            this->R->s[1][0] = this->U->s[2][1];
            this->R->s[2][0] = this->U->s[2][2];
            // U<--L
            this->U->s[2][2] = temp.s[0][2];
            this->U->s[2][1] = temp.s[1][2];
            this->U->s[2][0] = temp.s[2][2];
        }
    }
    void rotate_B(int rotate) {
        // B는 R->U->L->D->R
        for (int i = 0; i < rotate; i++) {
            Side temp((const Side)(this->R));
            // R<--D
            this->R->s[0][2] = this->D->s[2][2];
            this->R->s[1][2] = this->D->s[2][1];
            this->R->s[2][2] = this->D->s[2][0];
            // D<--L
            this->D->s[2][0] = this->L->s[0][0];
            this->D->s[2][1] = this->L->s[1][0];
            this->D->s[2][2] = this->L->s[2][0];
            // L<--U
            this->L->s[2][0] = this->U->s[0][0];
            this->L->s[1][0] = this->U->s[0][1];
            this->L->s[0][0] = this->U->s[0][2];
            // U<--R
            this->U->s[0][0] = temp.s[0][2];
            this->U->s[0][1] = temp.s[1][2];
            this->U->s[0][2] = temp.s[2][2];
        }
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Cube c;
        while (n--) {
            string s;
            cin >> s;
            if (s[0] == 'F') {
                if (s[1] == '-') {
                    c.rotate_F(3);
                } else {
                    c.rotate_F(1);
                }
            } else if (s[0] == 'B') {
                if (s[1] == '-') {
                    c.rotate_B(3);
                } else {
                    c.rotate_B(1);
                }
            } else if (s[0] == 'U') {
                if (s[1] == '-') {
                    c.rotate_U(3);
                } else {
                    c.rotate_U(1);
                }
            } else if (s[0] == 'D') {
                if (s[1] == '-') {
                    c.rotate_D(3);
                } else {
                    c.rotate_D(1);
                }
            } else if (s[0] == 'L') {
                if (s[1] == '-') {
                    c.rotate_L(3);
                } else {
                    c.rotate_L(1);
                }
            } else if (s[0] == 'R') {
                if (s[1] == '-') {
                    c.rotate_R(3);
                } else {
                    c.rotate_R(1);
                }
            }
        }
        c.U->print();
    }
}