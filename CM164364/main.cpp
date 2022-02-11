#include <bits/stdc++.h>
#include <unordered_map>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

int x, n, c, d;

bool comp(const pair<int, int> &p1, const pair<int, int> &p2) { 
    return (p1.second > p2.second); 
} 

void test_case() {
    cin >> n >> x;

    unordered_map<int, int> m;

    unordered_map<int, int>::iterator it;
    for(int i = 0; i < n; i++) {
        cin >> c;
        it = m.find(c);
        if(it == m.end()) {
            m.insert(make_pair(c, 1));
        } else {
            it->second++;
        }
    }

    vector< pair<int, int> > vp;

    for(it = m.begin(); it != m.end(); it++) {
        vp.push_back(make_pair(it->first, it->second));
    }

    //ascending order of chocos
    sort(vp.begin(), vp.end(), comp); 

    for(auto it = vp.begin(); it != vp.end(); it++) {
        if(x < it->second) {
            it->second -= x;
            x = 0;
        } else {
            x -= (it->second - 1);
            it->second -= (it->second - 1);
        }
    }

    if(x > 0) {
        for(auto it = vp.begin(); it != vp.end(); it++) {
            if(x) {
                x--;
                it->second--;
            } else {
                break;
            }
        }
    }

    d = 0;

    for(auto it = vp.begin(); it != vp.end(); it++) {
        if(it->second > 0) {
            d++;
        }
    }

    cout << d << endl;
}   

int main(){
    fastio
    int t; cin >> t;
    while(t--){
        test_case();
    }

    return 0;
}
