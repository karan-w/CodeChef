#include <iostream>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

const int N = 1e4 + 5;
int speeds[N];
int main(){
    fastio
    int t; cin >> t;
    int size, current_max, cars_max;
    while(t--){
        cin >> size;
        for(int i = 0; i < size; i++){
            cin >> speeds[i];
        }

        current_max = speeds[0];
        cars_max = 1;

        for(int i = 1; i < size; i++){
            if(speeds[i] <= current_max){
                current_max = speeds[i];
                cars_max++;
            }
        }
        cout << cars_max << "\n";
    }

    return 0;
}
