#include <cstdio>
#include <iostream>
#include <map>
#include <string>
using namespace std;
map<int, string> m;
map<string, bool> ch;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int index = 1;
        m.clear();
        ch.clear();

        while (true) {
            string input;
            cin >> input;
            char eend = getchar();
            m[index] = input;
            index++;

            if (eend == '\n') {
                break;
            }
        }

        while (true) {
            string who, goes, how;
            cin >> who >> goes >> how;
            if (who == "what") {
                break;
            }
            ch[how] = true;
        }

        for (auto it = m.begin(); it != m.end(); it++) {
            if (ch[it->second] == true)
                continue;
            cout << it->second << " ";
        }
        cout << '\n';

        string buffer;
        getline(cin, buffer);
    }
}