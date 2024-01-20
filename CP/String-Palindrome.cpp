#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int len = s.length();
    for(int i = 0; i < len; i++) {
        int j = len - i - 1;
        if(s[i] != s[j]) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}
