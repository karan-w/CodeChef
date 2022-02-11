#include <bits/stdc++.h>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

int n, q;
long long int temp;
long long int sum;
const long long int MOD = 1e9+7;

void test_case() {
    cin >> n;

    sum = 0;

    for(int i = 0; i < n; i++) {
        cin >> temp;
        sum = (sum + temp + MOD) % MOD;
    }
  
    cin >> q;

    while(q--) {
        sum = (sum * 2) % MOD;
        cout << sum << endl;
    }
        
}

int main(){
    fastio

    test_case();


    return 0;
}
