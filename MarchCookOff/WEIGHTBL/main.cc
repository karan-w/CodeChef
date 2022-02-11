#include <bits/stdc++.h>

using namespace std;

int w1, w2, x1, x2, m;

void test_case(){
    cin >> w1 >> w2 >> x1 >> x2 >> m;
    int l = w1  + (x1 * m);
    int h = w1 + (x2 * m);
    if(w2 >= l && w2 <= h){
        cout << 1 << endl;
    }else {
        cout << 0 << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        test_case();
    }
    return 0;
}