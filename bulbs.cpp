#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<stack>
#include<queue>
#include<string>
#include<map>
#include<cmath>
 
 
#define ll long long
#define lli long long int
 
#define pb push_back
#define in insert
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
using namespace std;
void solve();

int main(){
    fast;
    int testcase=1;
    cin>>testcase;
    while (testcase--)
    {
        solve();
    }
    
}
void solve(){
lli n,q;
cin>>n>>q;
lli a[n+1];
for(lli i=1;i<=n;i++){
    cin>>a[i];
}

lli p,r;
while(q--){
    cin>>p>>r;
    a[p]=r;
    lli maxs=1,length=1;
    for(lli i=1;i<n;i++){
        if(a[i]!=a[i+1]){
            // cout<<a[i]<<" "<<a[i+1]<<" ";
            maxs+=1;
        }else
        { 
            length=max(maxs,length);
            maxs=1;
        }
        
    }
    length=max(length,maxs);
cout<<length<<endl;


}


}