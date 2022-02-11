#include <bits/stdc++.h>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

int n, rw, wr, tw;

int w[100001];

void test_case() {
    cin >> n >> rw >> wr;
    for(int i = 0; i < n; i++) {
        cin >> w[i];
    }

    sort(w, w+n);

    tw = wr;
    int i = n-1;

    while(tw < rw && i >= 1) {
        if(w[i] == w[i-1]) {
            tw += (w[i] + w[i-1]);
            i -= 2;
        } else {
            i--;
        }
    }

    if(tw >= rw) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main(){
    fastio
    int t; cin >> t;
    while(t--){
        test_case();
    }

    return 0;
}




