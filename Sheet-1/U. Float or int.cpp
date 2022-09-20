#include<iostream>
using namespace std;
int main(){
double num;
cin>>num; // 234.000 //534.958  //0.958
int x=num;
if(num-x>0){
cout<<"float "<<x<<" "<<num-x;	
}
else{
cout<<"int "<<x;	
}	
return 0;	
}
