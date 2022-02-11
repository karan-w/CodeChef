#include <bits/stdc++.h>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

int k;
string word;
bool lang;
bool chef;
void test_case() {
    chef = true;
    cin >> k;

    while (k-- && chef) {
        cin >> word;
        if(word[0] <= 'm' && word[0] >= 'a') {
            lang = false;
        } else if(word[0] <= 'Z' && word[0] >= 'N') {
            lang = true;
        } else {
            chef = false;
        }
        for(int i = 1; i < word.size() && chef; i++) {
            if(!lang && word[i] >= 'a' && word[i] <= 'm') {
            } else if(lang && word[i] >= 'N' && word[i] <= 'Z') {
            } else {
                chef = false;
            }
        }
    }
    if(chef) cout << "YES\n";
    else cout << "NO\n";
}

int main(){
    fastio
    int t; cin >> t;
    while(t--){
        test_case();
    }

    return 0;
}
