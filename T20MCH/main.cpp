#include <bits/stdc++.h>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;


int main(){
    fastio
    int r, o, c;
    cin >> r >> o >> c;
    int max = c + (20 - o)*6*6;
    if(max > r){ 
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
