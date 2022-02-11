#include <bits/stdc++.h>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

void test_case() {
    int size = 10;
    int a[size];
    for(int i = 0; i < size; i++){
        cin >> a[i];
        // cout << a[i] << " ";
    }
    // cout << endl;
    int k;
    cin >> k;
    // cout << k << endl;
    for(int i = size-1; i >= 0; i--){
        if(a[i]){
            if(k > 0){
                if(k >= a[i]){
                        k -= a[i];
                        a[i] = 0;
                }else if(k < a[i]){
                        a[i] = a[i] - k;
                        k = 0;
                        cout << i + 1 << endl;
                        break;
                }
                
            }else{
                cout << i + 1 << endl;
                break;
            
            }
        }
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
