#include<bits/stdc++.h>
using namespace std;
int main(){
int test_case,num1,num2,start,end,sum=0;
cin>>test_case;
while(test_case--){
cin>>num1>>num2;
start=min(num1,num2);
end=max(num1,num2);
for(int a=start;a<=end;a++){
if(a%2!=0&&a!=start&&a!=end)
sum+=a;	
}
cout<<sum<<endl;
sum=0;
}	
return 0;	
}
