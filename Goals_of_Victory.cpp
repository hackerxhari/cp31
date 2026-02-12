#include<bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while(tc--) {
        int n;
        cin >> n;
        vector<int> vec(n);
        int res = 0;
        for(int i = 0; i < n - 1; i++) {
            cin >> vec[i];
            if(vec[i] > 0) res -= vec[i];
            else res += (-1 * vec[i]);
        }
        cout << res << endl;
    }
}
