#include <bits/stdc++.h>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

int a[10], k;

void test_case() {
    for(int i = 0; i < 10; i++) {
        cin >> a[i];
    }

    cin >> k; 

    int i = 9;

    //while you have not deleted all k problems, keep deleting problems
    while(k > 0) {
        if(a[i] > 0 && a[i] >= k) {
            a[i] -= k;
            k = 0;
        } else {
            k -= a[i];
            a[i] = 0;
            i--;
        }
    }

    if(a[i] > 0) {
        cout << i + 1 << endl;
    } else {
        while(a[i] == 0 && i >= 0)
            i--;
        if(i >= 0)
            cout << i + 1 << endl;
        else 
            cout << 0 << endl;
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
