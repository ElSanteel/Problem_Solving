#include<iostream>
using namespace std;
int main(){
long long a,b,result;
char x;
cin>>a>>x>>b;
if(x=='+'){
result=a+b;	
}
else if(x=='-'){
result=a-b;	
}
else if(x=='*'){
result=a*b;	
}
else{
result=a/b;	
}
cout<<result;
return 0;
}
