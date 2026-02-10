#include<bits/stdc++.h>
using namespace std;

class DisjointSet {
    vector<int> rank, parent;
public:
    DisjointSet(int n) {
        rank.resize(n+1, 0);
        parent.resize(n+1); //stores ultimate parents
        for(int i = 0; i <= n; i++) parent[i] = i;
    }

    int findUltimateParent(int node) {
        if(parent[node] == node) return node;
        return parent[node] = findUltimateParent(parent[node]);
    }

    void unionByRank(int u, int v) {
        int ulp_u = findUltimateParent(u);
        int ulp_v = findUltimateParent(v);
        if(ulp_u == ulp_v) return;//Already in same component
        if(rank[ulp_u] > rank[ulp_v]) {
            parent[ulp_v] = ulp_u;
        }
        else if(rank[ulp_v] > rank[ulp_u]) {
            parent[ulp_u] = ulp_v;
        }
        else {
            parent[ulp_u] = ulp_v;
            rank[ulp_v]++;
        }
    }
};

int main() {
    DisjointSet ds(7);
    ds.unionByRank(1, 2);
    ds.unionByRank(2, 3);
    ds.unionByRank(4, 5);
    ds.unionByRank(6, 7);
    ds.unionByRank(5, 6);
    //Check if 3 and 7 belongs to the same component
    if(ds.findUltimateParent(3) == ds.findUltimateParent(7)) {
        cout << "3 and 7 belongs to the same component" << endl;
    } else {
        cout << "3 and 7 does not belongs to the same component" << endl;
    }
    ds.unionByRank(3, 7);
    if(ds.findUltimateParent(3) == ds.findUltimateParent(7)) {
        cout << "3 and 7 belongs to the same component" << endl;
    } else {
        cout << "3 and 7 does not belongs to the same component" << endl;
    }

    return 0;
}