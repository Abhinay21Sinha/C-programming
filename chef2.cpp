#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int&b){
    int c=a;
    a=b;
    b=c;
}

void permute(vector<int> &v,int l,int r,vector<vector<int>> &p){
    if(l==r){
        p.push_back(v);
        return;
    }
    for(int i=l;i<=r;i++){
        swap(v[i],v[l]);
        permute(v,l+1,r,p);
        swap(v[i],v[l]);
    }
}


int main(){vector<int> v={1,2,3};
vector<vector<int>> p;
int l=0,r=v.size()-1;
//cout<<l<<" "<<r;
permute(v,l,r,p);
for(int i=0;i<p.size();i++){
    for(int j=0;j<p[i].size();j++)
        cout<<p[i][j]<<" ";
    cout<<"\n";
}
}