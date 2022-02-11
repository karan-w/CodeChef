#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

ll n, k;

void test_case() {
    ll cnt = 0;
    cin >> n >> k;
    ll ti;
    while(n--){
        cin >> ti;
        if(ti % k == 0){
            ++cnt;
        }
    }
    cout << cnt << endl;
}

int main(){
    fastio

    test_case();
    

    return 0;
}
