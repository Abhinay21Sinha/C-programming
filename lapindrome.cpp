#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s,s1,s2;
        cin>>s;
        int n=s.size();
        for(int i=0;i!=n/2;i++){
            s1.push_back(s[i]);
            s2.push_back(s[n-i-1]);
        }
       sort(s1.begin(),s1.end());
       sort(s2.begin(),s2.end());
       if(s1==s2)
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";
    }

}