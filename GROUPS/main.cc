#include <bits/stdc++.h>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

int main(){
    fastio
    int n;
    string s;
    cin >> n;
    while(n--){
        cin >> s;
        int g = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '1'){
                g++;
                int j = i;
                j++;
                while(s[j] == '1' && j < s.length()) {
                    j++;
                }
                i = j;
            }
        }
        cout << g << endl;
    }
    
    
    return 0;
}
