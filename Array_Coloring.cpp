#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> a(n);
        long long int sum = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        int csum = 0;
        bool flag = false;
        for(int i = 0; i < n; i++) {
            csum += a[i];
            if(csum % 2 == (sum - csum) % 2) {
                cout << "YES" << endl;
                flag = true;
                break;
            }
        }
        if(!flag) cout << "NO" << endl;
    }
}
