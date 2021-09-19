#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    map<char,int> m;
    for(int i=0;i<s.size();i++)
        m[s[i]]++;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        int p=0;
        for(int j=0;j<s.size();j++){
            if(m.find(s[j])==m.end()){
                p=1;
                cout<<"No"<<"\n";
                break;
            }

        }
        if(p==0)
            cout<<"Yes"<<"\n";
    }
}