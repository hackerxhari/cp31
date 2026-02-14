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
        int c_pos = 0, c_neg = 0;
        for(int i = 0; i < n; i++) {
            cin >> vec[i];
            if(vec[i] == -1) c_neg++;
            else c_pos++;
        }
        int op = 0;
        if(c_pos < c_neg) {
            int res = ceil((c_neg - c_pos) / 2.0) > 0 ? ceil((c_neg - c_pos) / 2.0) : 1;
            c_pos += res;
            c_neg = n - c_pos;
            op += res;
        }
        if(c_neg % 2 != 0) {
            op++;
            c_pos++;
            c_neg--;
        }
        cout << op << endl;
    }
}
