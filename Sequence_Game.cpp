#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    while(tc--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        vector<int> b;
        b.push_back(a[0]);
        for(int i = 1; i < n; i++) {
            if(a[i - 1] > a[i]) {
                b.push_back(a[i]);
            }
            b.push_back(a[i]);
        }
        cout << b.size() << endl;
        for(int i = 0; i < b.size(); i++) cout << b[i] << " ";
        cout << endl;
    }
}
