#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int num;
bool flag=true;
cin>>num;
if(num==1){
cout<<"NO";	
}
else{
for(int i=2;i*i<=num;i++){
if(num%i==0){
flag=false;	
break;
}	
}	
if(flag==true){
cout<<"YES";	
}
else{
cout<<"NO";	
}
}
return 0;	
}
