#include <bits/stdc++.h>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

int main(){
    fastio
    int t; cin >> t;
    int a, b;
    while(t--){
        cin >> a >> b;
        cout << a % b << endl;
    }

    return 0;
}
