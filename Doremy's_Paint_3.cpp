#include<bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int n;
        cin >> n;
        map<int, int> mpp;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mpp[x]++;
        }

        if (mpp.size() == 1) {
            cout << "Yes" << endl;
        } 
        else if (mpp.size() == 2) {
            vector<int> counts;
            for (auto it : mpp) {
                counts.push_back(it.second);
            }
            if (abs(counts[0] - counts[1]) <= 1) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        } 
        else {
            cout << "No" << endl;
        }
    }
}
