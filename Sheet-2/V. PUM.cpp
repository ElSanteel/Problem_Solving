#include<bits/stdc++.h>
using namespace std;
int main(){
int n,num1,nunm2,num3;
cin>>n;
int counter=1;
for(int i=1;i<=n;i++){ 
if(counter%4==0){
counter++;
cout<<"PUM"<<endl;
i--;	
continue;	
}	
cout<<counter<<" ";
counter++;
cout<<counter<<" ";
counter++;
cout<<counter<<" ";
counter++;
}
cout<<"PUM"<<endl;
return 0;	
}
