#include <bits/stdc++.h>
#define ALPHABET 26
using namespace std;
int alphabet[ALPHABET];
string result;
int main() {
    string input;
    cin >> input;
    int input_size = input.size();
    for (int i = 0; i < input_size; i++) {
        alphabet[input[i] - 'A']++;
    }
    int odd_index, odd;
    odd_index = -1;
    odd = 0;
    for (int i = 0; i < ALPHABET; i++) {
        if (alphabet[i] % 2 == 1) {
            odd++;
            odd_index = i;
        }
    }
    // 홀수번 등장한 알파벳이 2개 이상이면 만들 수 없다.
    if (odd > 1) {
        result = "I\'m Sorry Hansoo";
    }
    // 홀수번 등장한 알파벳이 1번이면 
    // AAABBBA -> AABBBAA
    else if (odd == 1) {
        char odd_char = odd_index + 'A';
        // temp : 홀수번 등장한 알파벳을 제외한 string 저장.
        // AAABBBA -> AAABBA, odd_char = 'B'
        string temp = "";
        bool do_once = true;
        for (int i = 0; i < input_size; i++) {
            if (do_once && input[i] == odd_char) {
                do_once = false;
                continue;
            }
            temp += input[i];
        }
        // temp = AAAABB
        // half = AAB
        sort(temp.begin(), temp.end());
        string half = "";
        int temp_size = temp.size();
        for (int i = 0; i < temp_size; i += 2) {
            half += temp[i];
        }
        result = half + odd_char;
        // half = BAA
        reverse(half.begin(), half.end());
        result += half;
    }
    // 모두 짝수번 등장. 
    // ABAABA -> AABBAA
    else {
        sort(input.begin(), input.end());
        string half = "";
        for (int i = 0; i < input_size; i += 2) {
            half += input[i];
        }
        result += half;
        reverse(half.begin(), half.end());
        result += half;
    }
    cout << result;
}