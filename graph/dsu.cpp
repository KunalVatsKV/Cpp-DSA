#include<bits/stdc++.h>

using namespace std;


class DisjointSet{

    vector<int> rank;
    vector<int> size;
    vector<int> parent;

public:

    DisjointSet(int n){
        rank.resize(n+1,0);
        size.resize(n+1,1);
        parent.resize(n+1);

        for(int i=0;i<=n;i++){
            parent[i]=i;
        }
    }

    int findUPar(int node){
        if(node==parent[node]){
            return node;
        }

        return parent[node]=findUPar(parent[node]);
    }

    bool unionByRank(int u, int v){
        int ulp_u=findUPar(u);
        int ulp_v=findUPar(v);

        if(ulp_u==ulp_v){
            return false;
        }

        if(rank[ulp_u]>rank[ulp_v]){
            parent[ulp_v]=ulp_u;
        }

        if(rank[ulp_u]<rank[ulp_v]){
            parent[ulp_u]=ulp_v;
        }

        if(rank[ulp_u]==rank[ulp_v]){
            parent[ulp_v]=ulp_u;
            rank[ulp_u]++;
        }

        return true;

    }

    bool unionBySize(int u, int v){
        int ulp_u=findUPar(u);
        int ulp_v=findUPar(v);

        if(ulp_u==ulp_v){
            return false;
        }

        if(size[ulp_u]>size[ulp_v]){
            parent[ulp_v]=ulp_u;
            size[ulp_u]+=size[ulp_v];
        }else{
            parent[ulp_u]=ulp_v;
            size[ulp_v]+=size[ulp_u];
        }

        return true;

    }


};

int main(){

    DisjointSet ds(7);

    //only use one union by size or rank

    ds.unionBySize(1,2);
    ds.unionBySize(2,3);
    ds.unionBySize(4,5);
    ds.unionBySize(6,7);
    ds.unionBySize(5,6);

    //check if 3 and 7 are in the same component or not
    if(ds.findUPar(3)==ds.findUPar(7)){
        cout<<"Yes they are in the same component"<<endl;
    }else{
        cout<<"Yes they are NOT in the same component"<<endl;
    }

    ds.unionByRank(3,7);

    //AGAIN check if 3 and 7 are in the same component or not
    if(ds.findUPar(3)==ds.findUPar(7)){
        cout<<"Yes they are in the same component"<<endl;
    }else{
        cout<<"Yes they are NOT in the same component"<<endl;
    }


    return 0;
}