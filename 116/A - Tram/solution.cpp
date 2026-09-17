#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int current = 0, ans = 0;
 
    while (n--) {
        int a, b;
        cin >> a >> b;
 
        current -= a;
        current += b;
 
        ans = max(ans, current);
    }
 
    cout << ans << endl;
 
    return 0;
}