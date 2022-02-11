#include <bits/stdc++.h>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

int amin, bmin, cmin, tmin, a, b, c;

void test_case() {
    cin >> amin >> bmin >> cmin >> tmin >> a >> b >> c;
    if( (a < amin) || (b < bmin) || (c < cmin) || ((a + b + c) < tmin)){
        cout << "NO" << endl;
    } else{
        cout << "YES" << endl;
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
