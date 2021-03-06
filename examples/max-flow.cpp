#include <bits/stdc++.h>

using namespace std;
using i64 = long long;

#include "max-flow.hpp"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Flow f(6);
    f.addEdge(0, 1, 7);
    f.addEdge(0, 2, 4);
    f.addEdge(2, 1, 3);
    f.addEdge(1, 3, 5);
    f.addEdge(1, 4, 3);
    f.addEdge(2, 4, 2);
    f.addEdge(4, 3, 3);
    f.addEdge(3, 5, 8);
    f.addEdge(4, 5, 5);

    cout << f.maxFlow(0, 5) << '\n';
    // solves the example flow network in https://cp-algorithms.com/graph/edmonds_karp.html
}