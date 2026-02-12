#include<bits/stdc++.h>
using namespace std;

int solve(int i, int j, int n) {
    if(i == 0 || j == 0 || i == n - 1 || j == n - 1) return 1;
    else if(i == 1 || j == 1 || i == n - 2 || j == n - 2) return 2;
    else if(i == 2 || j == 2 || i == n - 3 || j == n - 3) return 3;
    else if(i == 3 || j == 3 || i == n - 4 || j == n - 4) return 4;
    else return 5;
}

int main(){
    int tc;
    cin >> tc;

    while(tc--) {
        int n = 10;
        vector<vector<char>> vec(n, vector<char>(n));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> vec[i][j];
            }
        }
        int count = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n ; j++) {
                if(vec[i][j] == 'X') {
                    count += solve(i, j, n);
                }
            }
        }
        cout << count << endl;
    }
}
