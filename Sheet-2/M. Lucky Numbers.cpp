#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,next=0,divide,total=0;
bool islucky=false,stop=true;
cin>>a>>b;
for(int i=a;i<=b;i++){
divide=i; // 4
total=i; // 4			
while(divide){ // 4
next=divide%10; // 4%10=4
divide/=10; // 4/10=0
if(next==4||next==7){
islucky=true;	
if(divide==0){
stop=false;	
cout<<total<<" ";	
}	
}
else{
islucky=false;	
break;	
} 	
}	
}
if(islucky==false&&stop==true){
cout<<-1;	
}
return 0;
}
// 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
// l     l                               
// 8 9 10 11 12 13 14 15
// -1
