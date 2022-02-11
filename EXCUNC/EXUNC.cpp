#include <bits/stdc++.h>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

int main(){
    fastio
    int n, q; cin >> n >> q;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i]; 
    }
    int type, i, x;
    for(int i = 0; i < q; i++){
        cin >> type;
        if(type == 1){
            cin >> i >> x;
        }else if(type == 2){
            cin >> i;
        }
    }

    return 0;
}
