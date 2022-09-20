#include<iostream>
#include<math.h>
using namespace std;
int main(){
double a,b,c,d;
cin>>a>>b>>c>>d;
double power_1=b*log(a),power_2=d*log(c);
if(power_1>power_2){
cout<<"YES";	
}	
else{
cout<<"NO";	
}	
return 0;	
}
