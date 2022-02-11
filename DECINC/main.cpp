#include <bits/stdc++.h>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

int main(){
    fastio

    int n;

    cin >> n;
    if(n % 4 == 0){
        cout << ++n << endl;
    }else{
        cout << --n << endl;
    }


    return 0;
}
