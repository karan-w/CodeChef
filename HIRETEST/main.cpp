#include <bits/stdc++.h>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

int n, m, x, y, xtemp, ytemp;
string r;

void test_case() {
    cin >> n >> m;
    cin >> x >> y;
    vector<int> s;
    for(int i = 0; i < n; i++) {
        cin >> r;
        // cout << r << endl;
        xtemp = 0;
        ytemp = 0;
        for(int i = 0; i < m; i++) {
            if(r[i] == 'P'){
                ytemp++;
            } else if(r[i] == 'F') {
                xtemp++;
            }
            // cout << ytemp << " " << xtemp << endl;
            
        }
        if((xtemp >= x) || ((xtemp >= (x-1)) && (ytemp >= y))) {
                s.push_back(1);
            }else{
                s.push_back(0);
            }
    }

    for(int i = 0; i < n; i++) {
        cout << s[i];
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
