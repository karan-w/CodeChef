#include <bits/stdc++.h>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

int n, m, k, l;
int c = 0;

// a = [0, 3, 0, 1, 2] size = n 
// c = 2

void test_case() {
    cin >> n >> m >> k;
    c = 0;
    vector<int> a(n);

    for(int i = 0; i < k; i++) {
        cin >> l;
        l--;
        if(l < n) {
            a[l]++;
            if(a[l] == 2) {
                c++;
            }
        }
        
    }

    cout << c << " ";

    for(int i = 0; i < n && c; i++) {
        if(a[i] >= 2) {
            cout << i+1 << " ";
            c--;
        }
    }

    cout << endl;
}

int main(){
    fastio
    int t; cin >> t;
    while(t--){
        test_case();
    }

    return 0;
}
