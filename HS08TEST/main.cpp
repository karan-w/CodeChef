#include <bits/stdc++.h>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

void test_case(){
    int x;
    float y;
    cin >> x >> y;
    float a = y-x-0.5;
    if(x % 5 == 0 && a >= 0){
        cout << a << endl;
    } else {
        cout << y << endl;
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
