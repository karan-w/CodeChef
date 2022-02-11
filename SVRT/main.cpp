#include <bits/stdc++.h>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

void test_case() {
    int n, k;
    cin >> n >> k;

    int x = k;
    int d = n/x;
    
    bool looking = true;
    for(int x = k; x > 0 && looking; x--){
        for(int d = n/x; d > 0 && looking; d--){
            if(d*x + k-x == n){
                if(n - d*x < d && k-x != 0){
                    x--;
                }
                cout << d << " " << x << endl;
                looking = !looking;
            }
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
