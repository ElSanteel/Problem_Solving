#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
for(int rows=1;rows<=n;rows++){
for(int stars=n;stars>=rows;stars--){
cout<<"*";	
}
cout<<endl;	
}
return 0;	
}
