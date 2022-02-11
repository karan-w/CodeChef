#include <bits/stdc++.h>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

int x, y, xr, yr, d;

void test_case() {
    cin >> x >> y >> xr >> yr >> d;
    if((x - (xr*d) >= 0) && (y - (yr * d) >= 0)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
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
