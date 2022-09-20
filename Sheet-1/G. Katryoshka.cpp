#include<iostream>
using namespace std;
int main(){
long long e,m,k;
cin>>e>>m>>k;
int ans=0;
ans=min(e,min(k,m));
e-=ans;
k-=ans;
ans+=min(e/2,k);
cout<<ans;
return 0;	
}
