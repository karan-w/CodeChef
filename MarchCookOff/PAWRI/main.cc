#include <bits/stdc++.h>

using namespace std;

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

string pawri = "pawri";
string party = "party";
void test_case(){
    string s;
    cin >> s;
    int pos = 0;
    int index;
    while((index = s.find(party, pos)) != string::npos) {
        s = s.replace(index, pawri.size(), pawri);
    }
    cout << s << endl;
}

int main(){
    fastio
    int t;
    cin >> t;
    while(t--){
        test_case();
    }
    return 0;
}
//TLE