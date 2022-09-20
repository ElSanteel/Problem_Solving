#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i,j;
bool flag;
cin>>n;
for(i=2;i<=n;i++){
flag=false;
for(j=2;j<=i/2;j++){	
if(i%j==0){
 flag=true;
 break;
}
}
if(flag==false&&n!=1){
cout<<i<<" ";
}
}
return 0;	
}
