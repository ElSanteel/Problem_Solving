#include<iostream>
using namespace std;
int main(){
int num;
cin>>num;
int first_digit=num/1000;
if(first_digit%2==0){
cout<<"EVEN";	
}
else{
cout<<"ODD";	
}
return 0;	
}
