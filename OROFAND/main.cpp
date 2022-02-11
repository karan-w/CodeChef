#include <bits/stdc++.h>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

int n, q, temp, x, v;
void subArray(vector<int>& a) {
    int s = a.size(); 

    for(int i = 0; i < s; i++) {
        for(int j = i; j <= s; j++) {
            for(int k = i; k < j; k++) {
                
            }
        }
    }
}
int arrSize = arrA.length;
        //start point
        for (int startPoint = 0; startPoint <arrSize ; startPoint++) {
            //group sizes
            for (int grps = startPoint; grps <=arrSize ; grps++) {
                //if start point = 1 then
                //grp size = 1 , print 1
                //grp size = 2, print 1 2
                //grp size = 3, print 1 2 3 ans so on
                for (int j = startPoint ; j < grps ; j++) {
                    System.out.print(arrA[j] + " ");
                }
                System.out.println();
            }
        }

void subsetsHelper(vector<int>& a, vector<pair< vector<int>, int> >& allSubsets, pair< vector<int>, int> & subset, int index){
    if(subset.first.size() > 0){
        allSubsets.push_back(subset);
    }
    
    for (int i = index; i < a.size(); i++) {
        int previousScore;
        if(subset.first.size() == 0) {
            subset.second = a[i];
            previousScore = 0;
        } else {
            previousScore = subset.second;
            subset.second &= a[i];
        }
        
        subset.first.push_back(a[i]);

        subsetsHelper(a, allSubsets, subset, i + 1);
        subset.first.pop_back();
        subset.second = previousScore;
    }
  
}

void test_case() {
    cin >> n >> q;
    vector<int> a;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        a.push_back(temp);
    }

    pair< vector<int>, int> subset;
    vector<pair< vector<int>, int> > allSubsets;

    int ci = 0;
    subsetsHelper(a, allSubsets, subset, ci);

    for(int i = 0; i < allSubsets.size(); i++) {
        for(int j = 0; j < allSubsets[i].first.size(); j++) {
            cout << allSubsets[i].first[j] << " ";
        }
        cout << endl;
    }


    // while(q--) {
    //     cin >> x >> v;
    // }
}

int main(){
    fastio
    int t; cin >> t;
    while(t--){
        test_case();
    }

    return 0;
}
