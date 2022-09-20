#include<iostream>
using namespace std;
int main(){
long long n,m;
cin>>n>>m;
int last_digit1=n%10;
int last_digit2=m%10;	
cout<<last_digit1+last_digit2;	
}
