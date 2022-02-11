#include <bits/stdc++.h>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

void test_case() {
    int n;
    cin >> n;
    int a[n];
    int max = INT_MIN;

    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] > max) {
            max = a[i];
        }
    }

    int c = a[n-1];

    for(int i = n-2; i >= 0; i--){
        if(a[i+1] == 1){
            c+= a[i];
        } else {
            if(a[i] - a[i+1] + 1 > 0){
                c+= (a[i] - a[i+1] + 1);
            }
        }
    }
    cout << c << endl;
}

int main(){
    fastio
    int t; cin >> t;
    while(t--){
        test_case();
    }

    return 0;
}
