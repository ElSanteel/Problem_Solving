#include<iostream>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;
int max1=max(a,b);
int max2=max(max1,c);
int min1=min(a,b);
int min2=min(min1,c);
cout<<min2<<" "<<max2;
}
//another solution but will not be submitted in codeforces

/*cin>>a>>b>>c;
if(a<b&&a<c){
cout<<a<<" ";	
}
else if(b<a&&b<c){
cout<<b<<" ";	
}
else if(c<a&&c<b){
cout<<c<<" ";	
}
if(a>b&&a>c){
cout<<a<<" ";	
}
else if(b>a&&b>c){
cout<<b<<" ";	
}
else if(c>a&&c>b){
cout<<c<<" ";	
}	
	
}
*/

