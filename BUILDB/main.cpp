#include <bits/stdc++.h>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

long long int n, r, num, x, maxx, temp;

void test_case() {
    cin >> n >> r;
    vector<long long int> a, b;

    for(int i = 0; i < n; i++) {
        cin >> num;
        a.push_back(num);
    }

    for(int i = 0; i < n; i++) {
        cin >> num;
        b.push_back(num);
    }

    maxx = b[0];
    x = b[0];

    for(int i = 1; i < n; i++) {
        long long int time_difference = a[i] - a[i-1];
        x = max(0LL, x - (r*time_difference)); //possible overflow
        x += b[i];
        maxx = max(x, maxx);
    }
    
    cout << maxx << endl;
}

int main(){
    fastio
    int t; cin >> t;
    while(t--){
        test_case();
    }

    return 0;
}

