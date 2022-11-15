#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=CGL_2_B"

#include "../../template.h"
#include "../basic.h"

void solve() {
    int q; cin >> q;
    while (q--) {
        P<long long> a, b; cin >> a >> b;
        P<long long> c, d; cin >> c >> d;
        cout << (segmentIntersect(a, b, c, d) ? 1 : 0) << '\n';
    }
}
