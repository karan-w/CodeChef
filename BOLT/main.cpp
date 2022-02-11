#include <bits/stdc++.h>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;


int main(){
    fastio
    int t; cin >> t;
    float k1, k2, k3, v, ti;
    while(t--){
        cin >> k1 >> k2 >> k3 >> v;
        ti = round(100/(k1 * k2 * k3 * v) * 100)/100;
        if(ti >= 9.58f) {
            cout << "NO\n";
        }else{
            cout << "YES\n";
        }
    }

    return 0;
}
