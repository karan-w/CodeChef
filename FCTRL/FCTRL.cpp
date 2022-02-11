#include <iostream>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

int main(){
    fastio
    int t, n, num_zeros, check; cin >> t;
    while(t--){
        cin >> n;
        num_zeros = 0;
        check = 5;
        while(check <= n){
            num_zeros += (n/check);
            check *= 5;
        }
        cout << num_zeros << "\n";
    }

    return 0;
}
