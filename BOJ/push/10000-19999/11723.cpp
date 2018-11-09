//알고리즘 중급 Part1 - 4
#include <iostream>
#include <string>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    int n;
    cin >> n;
    int ans = 0;
    while(n--){
        string s;
        cin >> s;
        int x;
		if(s == "add"){
            cin >> x;
            x--;
            ans = ans | (1 << x);            
        }
        else if(s == "remove"){
            cin >> x;
            x--;
            ans = (ans & ~(1 << x));
        }
        else if(s == "check"){
			cin >> x;
			x--;
            if(ans & (1 << x))
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        }
        else if(s == "toggle"){
            cin >> x;
            x--;
            ans = ans ^ (1 << x);
        }
        else if(s == "all"){
            ans = (1 << 20) - 1;
        }
        else if(s == "empty"){
            ans = 0;
        }
    }
}
