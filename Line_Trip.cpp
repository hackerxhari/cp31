#include<bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> vec(n);
        for(int i = 0; i < n; i++) cin >> vec[i];
        int res = 0, tmp;
        res = max(res, vec[0] - 0);
        for(int i = 0; i < n - 1; i++) {
            tmp = vec[i + 1] - vec[i];
            res = max(res, tmp);
        }
        res = max(res, 2 * (k - vec[n - 1]));
        cout << res << endl;
    }
}
