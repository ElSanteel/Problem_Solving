#include<iostream>
using namespace std;
int main(){
int test_case;
long long fact=1;
cin>>test_case;
while(test_case--){
int a;	
cin>>a; 	
for(int i=1;i<=a;i++){ 
fact*=i;	
}
cout<<fact<<endl;
fact=1;
}
return 0;	
}
