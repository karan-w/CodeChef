#include <iostream>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

int main(){
    fastio
    int t; cin >> t;
    int num_activities, num, laddus, bonus, months;
    string origin = "INDIAN", activity;

    while(t--){
        laddus = 0;
        cin >> num_activities >> origin;
        while(num_activities--){
            cin >> activity;
            if(activity == "CONTEST_WON"){
                cin >> num;
                bonus = (num > 20) ? 0: 20 - num; 
                laddus += (300 + bonus); 
            }else if(activity == "TOP_CONTRIBUTOR"){
                laddus += 300;
            }else if(activity == "BUG_FOUND"){
                cin >> num;
                laddus += num;
            }else if(activity == "CONTEST_HOSTED"){
                laddus += 50;
            }
        }
        if(origin == "INDIAN"){
            months = laddus/200;
        }else{
            months = laddus/400;
        }
        cout << months << "\n";
    }

    return 0;
}
