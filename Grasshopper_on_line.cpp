#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while(tc--){
        int n, k;
        cin >> n >> k;
        if(n % k == 0) {
            cout << 2 << endl;
            cout << n - k - 1 << " " << (n - (n - k - 1)) << endl;
        }
        else {
            cout << 1 << endl;
            cout << n << endl;
        }
    }
}
