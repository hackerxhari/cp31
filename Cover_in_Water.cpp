#include<bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int tot = 0;
        int tmp = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '.') tmp++;
            if(s[i] == '#') {
                if(tmp <= 2) {
                    tot += tmp;
                }
                else {
                    tot = 2;
                    break;
                }
                tmp = 0;
            }
        }
        if(tmp <= 2) tot += tmp;
        else tot = 2;
        cout << tot << "\n";
    }
}
