#include <bits/stdc++.h>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

void test_case() {
    
}

int main(){
    fastio
    int t; cin >> t;
    long long n, a;
    while(t--){
        a = 0;
        cin >> n;

        while(n > 8) {
            a += ((6+5) * 4);
            n -= 4;
        }

        if(n == 1) {
            a += (6+5+4+3+2);
        } else if(n == 2) {
            a += (6+5+4+3) * 2;
        } else if(n == 3) {
            a += ((6+5+4+3) * 2) + (6+5+4);
        } else if(n == 4) {
            a += (6+5+4) * 4;
        } else if(n == 5) { 
            a += (6+5) + ((6+5+4) * 3) + (6+5+4+3+2);
        } else if(n == 6) {
            a += ((6+5) * 2) + ((6+5+4) * 2) + (6+5+4+3) * 2;
        } else if(n == 7) {
            a += ((6+5) * 3) + (6+5+4) + ((6+5+4+3) * 2) + (6+5+4);
        } else if(n == 8) {
            a += ((6+5) * 4) + ((6+5+4)*4);
        }

        cout << a << endl;
    }

    return 0;
}
