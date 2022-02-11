#include <iostream>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

int main(){
    fastio
    int t, g, i, q; cin >> t;
    long long n;
    while(t--){
        cin >> g;
        while(g--){
            cin >> i >> n >> q;
            if(n & 1){ //odd
                if(i == q){
                    cout << n/2 << "\n";
                }else{
                    cout << n/2 + 1 << "\n";
                }
            }else{ //even
                cout << n/2 << "\n";
            }
        }
        
    }

    return 0;
}
