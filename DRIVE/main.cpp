#include <bits/stdc++.h>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

int n, m, l, r;
void test_case() {
    cin >> n >> m;
    cout << "n" << n << " m" << m << endl;
    n--;
    vector<int> h(n, 0);
    // vector< vector<int> > r;
    vector <int> d;

    for(int i = 0; i < m; i++) {
        cin >> l >> r;
        for(int j = l; j < r; j++) {    
            h[j-1]++;
        }
        d.push_back(r-l);
    }

    for(int i = 0; i < n; i++) {
        if(h[i] == 0) {
            cout << "-1" << endl;
            break;
        }
    }

    int oneCount = 0;

    for(int i = 0; i < n; i++) {
        if(!(h[i] == 1)) {
            break;
        }else {
            oneCount++;
        }
    }

    if(oneCount >= ) {
        cout << *max_element(d.begin(), d.end()) << endl;
    } else{
        cout << n/m << endl;
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
