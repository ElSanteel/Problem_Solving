#include<iostream>
using namespace std;
int main(){
int a,b;
string s;
cin>>a>>s>>b;
if(a>b&&s==">"){
cout<<"Right";	
}
else if(a==b&&s=="="){
cout<<"Right";	
}
else if(a<b&&s=="<"){
cout<<"Right";	
}
else{
cout<<"Wrong";	
}
return 0;	
}
