#include <iostream>
#include <map>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

bool equal(map<char, int> * left_map, map<char, int> * right_map){
    if (left_map->size() != right_map->size()){
        return false;
    }
    for (auto i = left_map->begin(), j = right_map->begin(); i != left_map->end() && j != right_map->end(); i++, j++) { 
        if((i->first != j->first) or  (i->second != j->second)){
            return false;
        }
    } 
    return true;
}
int main(){
    fastio
    int t;
    cin >> t;
    int size, left_limit, right_limit;
    map<char,int>::iterator it;
    while(t--){
        string s;
        cin >> s;
        size = s.size();
        left_limit = right_limit = size/2;
        map<char, int> left_map, right_map;
        if(size % 2 != 0){
            right_limit++;
        }
        for(int i = 0; i < left_limit; i++){
            it = left_map.find(s[i]);
            if (it != left_map.end()){
                left_map[s[i]]++;
            }else{
                left_map[s[i]] = 1;
            }
                
        }
        for(int i = right_limit; i < size; i++){
            it = right_map.find(s[i]);
            if (it != right_map.end()){
                right_map[s[i]]++;
            }else{
                right_map[s[i]] = 1;
            }
        }
        if(equal(&left_map, &right_map)){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
        
    }

    return 0;
}
