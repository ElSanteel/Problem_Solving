#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,divisor_num1=0,divisor_num2=0,gcd=0;
cin>>a>>b;
for(int i=1,j=1;i<=a,j<=b;i++,j++){
if(a%i==0){
divisor_num1=i;	
}
if(b%j==0){
divisor_num2=j;	
}
if(divisor_num1==divisor_num2){
gcd=divisor_num2;	
}	
}
cout<<gcd;
return 0;	
}
// 12 ==> 1 2 3 4 6 12
// 8 ==> 1 2 4 8

