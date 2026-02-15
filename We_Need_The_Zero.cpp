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
        vector<int> vec(n);
        for(int i = 0; i < n; i++) cin >> vec[i];
        int res = 0;
        for(int i = 0; i < n; i++) {
            res ^= vec[i];
        }
        if((n&1) == 0 && res != 0) cout << "-1" << endl;
        else if((n&1) == 0 && res == 0) cout << "0" << endl;
        else cout << res << endl;
    }
}
