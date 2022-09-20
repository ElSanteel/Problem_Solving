#include<bits/stdc++.h>
using namespace std;
int arr[45];
int main(){
int size;
cin>>size;
int start=0,second=1;
if(size==1){
cout<<start<<endl; // 0	
}
else if (size==2){
cout<<start<<" "<<second<<endl;// 0 1
}
else{
cout<<start<<" "<<second<<" "; // 0 1		
for(int i=2;i<size;i++){
int result=start+second;	
cout<<result<<" ";
start=second;
second=result;	
}
}
return 0;	
}
