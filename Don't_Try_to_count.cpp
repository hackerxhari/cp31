#include<bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x;
        cin >> s;
        int count = 0;
        if(x == s) {
            cout << count << endl;
            continue;
        } 
        while(x.length() <= m) {
            if (x.find(s) != string::npos) break;
            x+=x;
            count++;
        }
        if(x.find(s) != string::npos) {
            cout << count << endl;
            continue;
        }
        else {
            x+=x;
            count++;
            if(x.find(s) != string::npos) {
                cout << count << endl;
                continue;
            }
            else {
                cout << "-1" << endl;
            }
        }

    }
}
