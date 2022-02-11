#include <bits/stdc++.h>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

int main(){
    fastio
    int n;
    cin >> n;
    if(n <= 10){
        cout << n << endl;
    }else{
        for(int i = 10; i >= 1; i--){
            if(n % i == 0) {
                cout << i << endl;
                break;
            }
        }
    }
    

    return 0;
}
