#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while(tc--){
        int n, k, x;
        cin >> n >> k >> x;
        if(k == 1) cout << "NO" << endl;
        else {
            if(x != 1) {
                cout << "YES" << endl;
                cout << n << endl;
                for(int i = 1; i <= n; i++) {
                    cout << "1 ";
                }
                cout << endl;
            }
            else { 
                if (k == 1 || (k == 2 && n % 2 != 0)) {
                    cout << "NO" << endl;
                } else {
                    cout << "YES" << endl;
                    if (n % 2 == 0) {
                        cout << n / 2 << endl; 
                        for (int i = 0; i < n / 2; i++) cout << "2 ";
                    } else {
                        
                        cout << (n - 3) / 2 + 1 << endl; 
                        cout << "3 ";
                        for (int i = 0; i < (n - 3) / 2; i++) cout << "2 ";
                    }
                    cout << endl;
                }
            }
        }
    }
}
