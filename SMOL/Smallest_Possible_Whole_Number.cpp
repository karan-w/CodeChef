#include <bits/stdc++.h>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

int n, k;

void test_case() {
    cin >> n >> k;
    if(k == 0) {
        cout << n << endl;
    } else {
        cout << n % k << endl;
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
