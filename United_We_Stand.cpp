#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int maxy = INT_MIN;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] > maxy) maxy = a[i];
        }

        int miny = *min_element(a.begin(), a.end());

        if (maxy == miny) {
            cout << "-1" << endl;
        } else {
            vector<int> b, c;
            for (int i = 0; i < n; i++) {
                if (a[i] == maxy) {
                    c.push_back(a[i]);
                } else {
                    b.push_back(a[i]);
                }
            }

            cout << b.size() << " " << c.size() << endl;
            for (int i = 0; i < b.size(); i++) {
                cout << b[i] << " ";
            }
            cout << endl;
            for (int i = 0; i < c.size(); i++) {
                cout << c[i] << " ";
            }
            cout << endl;
        }
    }
}
