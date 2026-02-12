#include<bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while(tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> vec(n);
        bool found = false;
        for(int i = 0; i < n; i++) cin >> vec[i];
        for(int i = 0; i < n; i++) {
            if(vec[i] == k) {
                found = !found;
                break;
            }
        }
        if(found) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}
