#include <bits/stdc++.h>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

int n, x, s, r;

bool comp(const pair<int, int>& p1, const pair<int, int>& p2) {
    if(p1.second == p2.second) {
        return p1.first < p2.first;
    }else {
        return p1.second > p2.second;
    }
}

void test_case() {
    cin >> n >> x;
    vector< pair <int, int> > v;
    for(int i = 0; i < n; i++) {
        cin >> s >> r;
        v.push_back(make_pair(s, r));
    }

    sort(v.begin(), v.end(), comp);
    
    for(int i = 0; i < n; i++) {
        if(v[i].first <= x) {
            cout << v[i].second << endl;
            break;
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
