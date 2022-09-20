#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int num_of_years=n/365; // 1  400-365= 35
n=n-365*num_of_years; 
int num_of_months=n/30;
n-=30*num_of_months;
cout<<num_of_years<<" years"<<"\n";
cout<<num_of_months<<" months"<<"\n";
cout<<n<<" days";	
return 0;	
}
