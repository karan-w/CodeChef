#include <bits/stdc++.h>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;


int main(){
    fastio
    int t; cin >> t;
    int n, sum;
    while(t--){
        cin >> n;
        sum = 0;
        while(n > 0){
            sum += n % 10;
            n /= 10;
        }
        cout << sum << endl;
    }

    return 0;
}
