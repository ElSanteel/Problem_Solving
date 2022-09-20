#include<bits/stdc++.h>
using namespace std;
int main(){
int range,a,b;
long long sum=0;
cin>>range>>a>>b; // 20 2 5	
for(int i=1;i<=range;i++){
if(i/10==0){ // 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20	
if(i>=a&&i<=b){
sum+=i;	
}
}
else{
int number=i; //number=10
int mySum=0;
while(number){ //1
int digit=number%10; //1%10=1
mySum+=digit; // 0+1=1
number/=10; //number=0
}
if(mySum>=a&&mySum<=b){
sum+=i;	
}
}
}
cout<<sum<<endl;	
return 0;
}
