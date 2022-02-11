#include <bits/stdc++.h>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

int n, t, o, e;
bool contains2 = false;

long long int s;
void test_case() {
    cin >> n;
    contains2 = false;
    s = 0;

    for(int i = 0; i < n; i++) {
        cin >> t;
        s += t;
        if(t == 2) {
            contains2 = true;
        }
    }

    if(!(s & 1)) {
        cout << 0 << endl;
    } else if( (s & 1) && contains2) {
        cout << 1 << endl;
    } else {
        cout << -1 << endl;
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
