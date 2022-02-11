#include <bits/stdc++.h>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;


int main(){
    fastio
    int n, h, x, t;
    cin >> n >> h >> x;

    bool found = false;
    for(int i = 0; i < n; i++){
        cin >> t;
        if(t + x >= h){
            found = true;
            cout << "YES" << endl;
            break;
        }
    }
    if(!found){
        cout << "NO" << endl;
    }
    
    return 0;
}
