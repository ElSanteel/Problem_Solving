#include<bits/stdc++.h>
using namespace std;
int main(){
int myRes1,myRes2;	
string num; // "1536"   ['1','5','3','6']
cin>>num;
char new_num[num.size()];  // 4 [' ',' ',' ',' ']
int counter=0;
for(int i=num.size()-1;i>=0;i--){ 
new_num[counter]=num[i];	
counter++;
}
stringstream s1;
s1<<num;
s1>>myRes1;
stringstream s2;
s2<<new_num;
s2>>myRes2;
cout<<myRes2<<endl;
if(myRes1==myRes2){
cout<<"YES";	
}
else{
cout<<"NO";	
}
return 0;	
}
