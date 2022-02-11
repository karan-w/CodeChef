#include <bits/stdc++.h>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

int n, m, c;
string r;

void update(int i_n, int j_n, vector< vector<int> > & map, int i, int j) {
    if(i_n >= 0 && i_n < n && j_n >= 0 && j_n < m) {
        if(map[i_n][j_n] == 1) {
            map[i][j]++;
            map[i_n][j_n]--;
            update(i_n, j_n+1, map, i, j);
            update(i_n+1, j_n, map, i, j);
            update(i_n-1, j_n, map, i, j);
            update(i_n, j_n-1, map, i, j);
        }
    }
    
}

void process(vector< vector<int> > &map, vector<int> &score) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if (map[i][j] == 1) {
                update(i, j+1, map, i, j);
                update(i+1, j, map, i, j);
                update(i-1, j, map, i, j);
                update(i, j-1, map, i, j);
                score.push_back(map[i][j]);
            }
        }
    }
}

void test_case() {
    cin >> n >> m;
    vector< vector<int> > map;

    for(int i = 0; i < n; i++) {
        cin >> r;
        vector<int> row;
        for(int j = 0; j < m; j++) {
            row.push_back(r[j] - '0');
        }
        map.push_back(row);
    }

    vector<int> score;

    process(map, score);

    sort(score.begin(), score.end(), greater<int>());

    c = 0;
    for(int i = 1; i < score.size(); i = i + 2) {
        c += score[i];
    }

    cout << c << endl;

    
}

int main(){
    fastio
    int t; cin >> t;
    while(t--){
        test_case();
    }

    return 0;
}
