#include <bits/stdc++.h>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

int x, m, d;
long long int t1, t2;

void test_case() {
    cin >> x >> m >> d;
    t1 = x * m;
    t2 = x + d;
    cout << min(t1, t2) << endl;
}

int main(){
    fastio
    int t; cin >> t;
    while(t--){
        test_case();
    }

    return 0;
}
