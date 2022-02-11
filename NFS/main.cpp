#include <bits/stdc++.h>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

long long int u, vmax, a, s;
float v, i;
bool f;
void test_case() {
    f = false;
    cin >> u >> vmax >> a >> s;

    i  = (u * u) - (2 * a * s);

    if(i <= 0) {
        cout << "Yes" << endl;
        f = true;
    }
    
    if(!f) {
        v = sqrt(i);

        if(v <= vmax) {
            cout << "Yes" << endl;
        }else {
            cout << "No" << endl;
        }
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
