#include <bits/stdc++.h>
using namespace std;

struct _in {
    template<class T> operator T() {
        T x;
        cin >> x;
        return x;
    }
} in;

int main() {
    vector a(in, 0.0);
    for (auto& x : a) x = in;
    string s = in;
    cout << s << ' ' << a[2] << '\n';
}