#include <bits/stdc++.h>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

int main(){
    fastio
    int t; cin >> t;
    int n, z, a, attacks, top;
    priority_queue<int> q;

    while(t--){
        cin >> n >> z;
        attacks = 0;
        for(int i = 0; i < n; i++){
            cin >> a;
            q.push(a); //create queue of action powers
        }
        while((z > 0) && (q.size() > 0)){
            top = q.top();
            z -= top;
            top /= 2;
            q.pop();
            attacks++;
            if(top){
                q.push(top);
            }
        }
        if(z > 0){
            cout << "Evacuate\n";
        }else{
             cout << attacks << endl;
        }
       
        
    }

    return 0;
}
