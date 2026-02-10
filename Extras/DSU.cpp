#include<bits/stdc++.h>
using namespace std;

class DisjointSet {
    vector<int> rank, parent, size;
public:
    DisjointSet(int n) {
        rank.resize(n+1, 0);
        parent.resize(n+1); //stores ultimate parents
        size.resize(n+1, 1); //Stores the size of the component
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
    
    void unionBySize(int u, int v) {
        int ulp_u = findUltimateParent(u);
        int ulp_v = findUltimateParent(v);
        if(ulp_u == ulp_v) return;
        if(size[ulp_u] > size[ulp_v]) {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
        else if(size[ulp_v] > size[ulp_u]) {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
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
    DisjointSet ds1(7);
    ds1.unionBySize(1, 2);
    ds1.unionBySize(2, 3);
    ds1.unionBySize(4, 5);
    ds1.unionBySize(6, 7);
    ds1.unionBySize(5, 6);
    //Check if 3 and 7 belongs to the same component
    if(ds1.findUltimateParent(3) == ds1.findUltimateParent(7)) {
        cout << "3 and 7 belongs to the same component" << endl;
    } else {
        cout << "3 and 7 does not belongs to the same component" << endl;
    }
    ds1.unionByRank(3, 7);
    if(ds1.findUltimateParent(3) == ds1.findUltimateParent(7)) {
        cout << "3 and 7 belongs to the same component" << endl;
    } else {
        cout << "3 and 7 does not belongs to the same component" << endl;
    }

    return 0;
}