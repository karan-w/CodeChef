#include <bits/stdc++.h>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;


void test_case() {
    int n, m;
    cin >> n >> m;
    int ni;
    vector<bool> topics(m+1, false);

    for(int i = 0; i < n; i++){
        cin >> ni;
        topics[ni] = true;
    }

    bool found = false;

    for(int i = 1; i <= m; i++){
        if(topics[i] == false){
            found = true;
            cout << "YES" << endl;
            break;
        }
    }

    if(!found){
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
