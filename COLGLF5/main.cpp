#include <bits/stdc++.h>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

void test_case() {
    int n, m;
    cin >> n >> m;
    int f[n];
    for(int i = 0; i < n; i++){
        cin >> f[i];
    }
    int c[m];
    for(int i = 0; i < m; i++){
        cin >> c[i];
    }
    
    int s = 0;

    bool foot = true;

    int i = 0, j = 0;

    while(i < n && j < m){
        if(c[j] < f[i]){
            if(foot){
                s++;
                foot = !foot;
            }
            j++;
        } else{
            if(!foot){
                s++;
                foot = !foot;
            }
            i++;
        }
    }

    if(i < n){
        if(!foot){
            s++;
        }
    }else if(j < m){
        if(foot){
            s++;
        }
    }
    
    cout << s << endl;
}

int main(){
    fastio
    int t; cin >> t;
    while(t--){
        test_case();
    }

    return 0;
}
