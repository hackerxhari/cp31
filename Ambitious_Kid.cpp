#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    int miny = INT_MAX;
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
        vec[i] = abs(vec[i]);
        miny = min(miny, vec[i]);
    }
    cout << miny << endl;
}
