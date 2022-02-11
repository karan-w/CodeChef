#include <bits/stdc++.h>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;


int main(){
    fastio
    int n = 3;
    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    int a_score = 0, b_score = 0;

    for(int i = 0; i < n; i++){
        if(a[i] > b[i]) {
            a_score++;
        }else if(b[i] > a[i]){
            b_score++;
        }
    }
    
    cout << a_score << " " << b_score << endl;
    return 0;
}
