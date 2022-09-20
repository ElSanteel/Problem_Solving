#include<bits/stdc++.h>
using namespace std;
int main(){
int n,stars=1;
cin>>n;
for(int rows=1;rows<=n;rows++){
for(int stars=1;stars<=rows;stars++){ 
cout<<"*";
}
cout<<endl;
}
return 0;	
}
