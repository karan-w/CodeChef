#include <bits/stdc++.h>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

int l, o_c, z_c;
string s;
bool f = false;

void test_case() {
    cin >> l;
    cin >> s;
    f = false;
    z_c = o_c = 0;
    
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '1') {
            o_c++;
            
        }

        if((float)o_c/(i+1) >= 0.5) {
            cout << "YES" << endl;
            f = true;
            break;
        }
    }

    if(!f) {
        cout << "NO" << endl;
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
