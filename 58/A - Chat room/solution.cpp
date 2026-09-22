#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    string t = "hello";
    int j = 0;
 
    for (char c : s) {
        if (j < 5 && c == t[j])
            j++;
    }
 
    cout << (j == 5 ? "YES" : "NO");
 
    return 0;
}