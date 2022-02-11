#include <bits/stdc++.h>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

int main(){
    fastio
    int n1, n2;
    cin >> n1 >> n2;
    if(n1 > n2){
        cout << n1 - n2 << endl;
    }else{
        cout << n1 + n2 << endl;
    }
    return 0;
}
