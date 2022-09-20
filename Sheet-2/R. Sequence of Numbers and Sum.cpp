#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,sum,i;
while(cin>>n>>m){
if(n<=0||m<=0){
break; // or return 0;
}
int start=min(n,m);
int end=max(n,m);
for(i=start;i<=end;i++){
sum+=i;
cout<<i<<" ";
}
cout<<"sum ="<<sum<<endl;
sum=0;
}
return 0;	
}
