#include <bits/stdc++.h>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

int n;

void test_case() {
    cin >> n;
    long long f = 1;

    if(n == 0 || n == 1){ 
        cout << f << endl;
    } else {
        while(n > 0) {
            f *= n;
            n--;
        }
        cout << f << endl;
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
