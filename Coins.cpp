#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int tc;
    cin >> tc;
    while(tc--){
        long long int n, k;
        cin >> n >> k;
        if(n & 1) {
            if(!(k & 1)) cout << "NO" << endl;
            else{
                if(k > n) cout << "NO" << endl;
                else cout << "YES" << endl;
            }
        }
        else cout << "YES" << endl;
    }
}
