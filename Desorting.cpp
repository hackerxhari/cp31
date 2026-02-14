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
        if(!is_sorted(vec.begin(), vec.end())) cout << "0" << endl;
        else {
            pair<int, int> pi = {-1, -1};
            int min_abs = INT_MAX;
            for(int i = 1; i < n; i++) {
                int tmp = abs(vec[i] - vec[i - 1]);
                if(tmp < min_abs) {
                    min_abs = min(min_abs, abs(vec[i] - vec[i - 1]));
                    pi = {i - 1, i};
                }
            }
            cout << ((abs(vec[pi.first] - vec[pi.second])) / 2) + 1 << endl;
        }
    }
}
