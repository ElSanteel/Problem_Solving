#include<bits/stdc++.h>
using namespace std;
int main(){
int test_case;
cin>>test_case;
while(test_case--){
    string number;	
	cin>>number;
	int size=number.size();
	for(int z=size-1;z>=0;z--){
	cout<<number[z]<<" ";	 
	}
	cout<<endl;
}
return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
long long test_case,num,remainder;
cin>>test_case;
while(test_case--){
cin>>num;
while(num!=0){
remainder=num%10;
num/=10; 
cout<<remainder<<" ";
}
cout<<endl;
}
return 0;	
}
*/
