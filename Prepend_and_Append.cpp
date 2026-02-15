#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int res = -1;
        for(int i = 0; i < n/2; i++) {
            if(!(s[i] ^ s[n - i - 1])) {
                res = n - i - i;
                break;
            }
        }
        if(n & 1 && res == -1) cout << "1" << endl;
        else if(!(n & 1) && res == -1) cout << "0" << endl;
        else cout << res << endl;
    }
}
