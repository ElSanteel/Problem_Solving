
#include<iostream>
using namespace std;
int main(){
long long a,b,c,d;
cin>>a>>b>>c>>d;
long long new_a=a%100;
long long new_b=b%100;
long long new_c=c%100;
long long new_d=d%100;
long long result=new_a*new_b*new_c*new_d;
if(result%100<=9){
cout<<"0"<<result%100;	
}
else{
cout<<result%100;	
}
return 0;
}
