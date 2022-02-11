#include <bits/stdc++.h>
#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

bool sortbyfirst(const pair <int,int>  & a, const pair <int,int> & b){
    if(a.first < b.first){
        return true;
    }else if(a.first == b.first){
        return (a.second < b.second);
    }else{
        return false;
    }
    // return (a.first < b.first);

}
int main(){
    fastio
    int n; cin >> n;
    vector< pair <int,int> > coordinates;
    int x, y;
    // coordinates.push_back(make_pair(0,500));
    coordinates.push_back(make_pair(0,0));
    
    coordinates.push_back(make_pair(100000,0));
    // coordinates.push_back(make_pair(100000,500));
    while(n--){
        cin >> x >> y;
        coordinates.push_back(make_pair(x,y));
    }
    

    sort(coordinates.begin(), coordinates.end());

    int max_diff = INT_MIN;
    int diff = 0;
    for(int i = 0; i < coordinates.size() - 1; i++){
        diff = coordinates[i+1].first - coordinates[i].first;
        if(diff > max_diff){
            max_diff = diff;
        }
    }
    int max_area = max_diff * 500;
    cout << max_area << endl;
    return 0;
}


