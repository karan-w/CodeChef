#include <bits/stdc++.h>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

int main(){
    fastio
    int t; cin >> t;
    int n, k, c;
    bool f;
    string s;
    char star = '*';
    while(t--){
        cin >> n >> k;
        c = 0;
        f = false;
        cin >> s;
        for(int i = 0; i < n; i++) {
            if(s.at(i) == star) {
                c++;
                if(c == k) {
                    f = true;
                    break;
                }
            } else {
                c = 0;
            }
        }
        if(f) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
