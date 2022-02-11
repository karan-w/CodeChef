#include <iostream>
#include <vector>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

bool findPath(vector <vector <int>> m, int i, int j, int s){
    //walkable, we can continue forward
    if(m[i][j] == 0){
        //reached end of maze
        if(i == s-1 && j == s-1){ 
            return true;
        } 
        // in first column
        if(j == 0){
            //left bottom corner - go right only
            if(i == s-1){
                return findPath(m, i, j+1, s);
            }else{
                return findPath(m, i, j+1, s) || findPath(m, i+1, j, s) || findPath(m, i+1, j+1, s);
            }
        }

        //in last column, go down only
        else if(j == s-1){
            return findPath(m, i+1, j, s);
        }

        //in last row, go right only

        else if(i == s-1) {
            return findPath(m, i, j+1, s);
        }
        else {
            return findPath(m, i, j+1, s) || findPath(m, i+1, j, s) || findPath(m, i+1, j+1, s);
        }

        
    }else{
        return false;
    }
}

int main(){
    fastio
    int s = 6;
    vector <vector <int>> m(s, vector<int>(s, 0));

    for(int i = 0; i < s; i++){
        for(int j = 0; j < s; j++){
            cin >> m[i][j];
        }
    }

    bool found = findPath(m, 0, 0, s);

    if(found)
        cout << "Yes" << endl;
    else 
        cout << "No" << endl;
    
    return 0;
}
