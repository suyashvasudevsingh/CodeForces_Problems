#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    for (int i = 0; i + 6 < s.size(); i++) {
        bool same = true;
 
        for (int j = 1; j < 7; j++) {
            if (s[i] != s[i + j]) {
                same = false;
                break;
            }
        }
 
        if (same) {
            cout << "YES";
            return 0;
        }
    }
 
    cout << "NO";
    return 0;
}