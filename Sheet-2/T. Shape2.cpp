#include<bits/stdc++.h>
using namespace std;
int main(){
int lines;
cin>>lines;// 4
int spaces=lines-1; //3 
for(int rows=1;rows<=lines;rows++){
for(int space=1;space<=spaces;space++){      
cout<<" ";
}
for(int stars=1;stars<rows*2;stars++){	
cout<<"*";	
}
spaces--;
cout<<endl;
}
return 0;	
}
