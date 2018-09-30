#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
    string input, bomb;
    cin >> input >> bomb;
    string result = "";
    int iSize = input.size();
    int bSize = bomb.size();

    for (int i = 0; i < iSize; ++i) {
        result += input[i];
        int rSize = result.size();
        bool check = false;
        // 끝 글자가 같고
        if (input[i] == bomb[bSize - 1]) {
            // i가 bSize 이상일때
            if (i >= bSize - 1) {
                check = true;
                // 모두 같은지 비교
                for (int j = 1; j < bSize; ++j) {
                    if (bomb[bSize - j - 1] != result[rSize - j - 1]) {
                        check = false;
                        break;
                    }
                }
                // 모두 같으면 pop
                if (check) {
                    for (int j = 0; j < bSize; ++j) {
                        result.pop_back();
                    }
                }
            }
        }
    }
    if (result.size() == 0) {
        cout << "FRULA";
        return 0;
    }
    cout << result;
}