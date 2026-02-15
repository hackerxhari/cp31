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
        int ans = 0;
        for(int i = 0; i < n; i++) {
            if(vec[i]) {
                ans = max(res, ans);
                res = 0;
            }
            else res++;
        }
        ans = max(res, ans);
        cout << ans << endl;
    }
}
