#include <bits/stdc++.h>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

int n, k, f, s, e;

void test_case() {
    cin >> n >> k >> f;
    vector<bool> a(f+1);

    for(int i = 0; i < n; i++) {
        cin >> s >> e;
        for(int i = s; i < e; i++) {
            a[i] = true;
        }
    }

    for(int i = 0; i < f+1 && k; i++) {
        if(!a[i]) {
            k--;
        }
    }
    if(k) cout << "NO\n";
    else cout << "YES\n";
}

int main(){
    fastio
    int t; cin >> t;
    while(t--){
        test_case();
    }

    return 0;
}



