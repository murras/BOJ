// 알고리즘 기초 Ch6
#include <iostream>
using namespace std;
int a[26][2]; // 0 은 왼쪽 자식 1은 오른쪽 자식
void preorder(int x){
    if(x == -1)
        return;
    cout << (char)(x + 'A');
    preorder(a[x][0]);
    preorder(a[x][1]);
}
void inorder(int x){
    if(x == -1)
        return;
    inorder(a[x][0]);
    cout << (char)(x + 'A');
    inorder(a[x][1]);
}
void postorder(int x){
    if(x == -1)
        return;
    postorder(a[x][0]);
    postorder(a[x][1]);
    cout << (char)(x + 'A');
}
int main(){
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        char p, c1, c2;
        cin >> p >> c1 >> c2;
        p -= 'A';
        if(c1 == '.')
            a[p][0] = -1; // 왼쪽 자식이 없음
        else
            a[p][0] = c1 - 'A';
        if(c2 == '.')
            a[p][1] = -1; // 오른쪽 자식이 없음
        else
            a[p][1] = c2 - 'A';
    }
    preorder(0);
    cout << endl;
    inorder(0);
    cout << endl;
    postorder(0);
    cout << endl;
}
