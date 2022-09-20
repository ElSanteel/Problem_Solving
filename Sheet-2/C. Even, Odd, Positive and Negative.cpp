#include<iostream>
using namespace std;
int main(){
int n,a,even_counter=0,odd_counter=0,positive_counter=0,negative_counter=0;
cin>>n;
for(int i=0;i<n;i++){
cin>>a;
if(a%2==0){
even_counter++;	
}
if(a%2!=0){
odd_counter++;	
}
if(a>0){
positive_counter++;	
}
if(a<0){
negative_counter++;	
}	
}	
cout<<"Even: "<<even_counter<<endl;
cout<<"Odd: "<<odd_counter<<endl;
cout<<"Positive: "<<positive_counter<<endl;
cout<<"Negative: "<<negative_counter<<endl;	
return 0;	
}
