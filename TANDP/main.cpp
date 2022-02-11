#include <bits/stdc++.h>

#define fastio cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

int n, m, x, y, a, b, x_d, y_d, d, p, t;

int min_moves_theif() {
    return (n - x) + (m - y);
}

int min_moves_police() {
    x_d = m - b;
    y_d = n - a;

    if(x_d == 0) {
        return y_d;
    } else if(y_d == 0) {
        return x_d;
    } else {
        // cout << "a " << a << " b" << b << endl;
        d = min(x_d, y_d);
        a += d;
        b += d;
        // cout << "d" << d << endl;
        // cout << a << " : " << b << endl;
        if(a == n) {
            return d + m - b;
        } else {
            return d + n - a;
        }
    }
}

void test_case() {
    cin >> n >> m >> x >> y >> a >> b;
    p = min_moves_police();
    t = min_moves_theif();
    // cout << p << " " << t << endl;
    if(p < t) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
}

int main(){
    fastio
    int t; cin >> t;
    while(t--){
        test_case();
    }

    return 0;
}
