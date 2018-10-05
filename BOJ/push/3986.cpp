#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
    int n;
    int count = 0;
    cin >> n;

    while (n--) {
        string input;
        cin >> input;
        stack<int> st;
        int sSize = input.size();
        for (int i = 0; i < sSize; ++i) {
            // 비어있으면 넣고
            if (st.empty()) {
                st.push(input[i]);
            }
            // 아니면 비교
            else {
                // 같으면 pop
                if (st.top() == input[i]) {
                    st.pop();
                }
                // 다르면 push
                else {
                    st.push(input[i]);
                }
            }
        }
        if (st.empty()) {
            count++;
        }
    }
    cout << count;
}