#include<bits/stdc++.h>
using namespace std;
int main(){
int test_case,num;
cin>>test_case;
while(test_case--){	
cin>>num;
int ones=0;	
while(num>0){	
if(num%2==1){
ones++;	
}
num/=2;	
}
long long sum=0;
for(int z=0;z<ones;z++){
sum+=(1*pow(2,z));	
}
cout<<sum<<endl;
}
return 0;	
}
