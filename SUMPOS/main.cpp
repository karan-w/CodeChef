#include <bits/stdc++.h>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

int x, y, z;
void test_case() {
    cin >> x >> y >> z;
    if(x + y == z){
        cout << "YES" << endl;
    }else if(x + z == y){
        cout << "YES" << endl;    
    }else if(y + z == x){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
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
