#include<iostream>
using namespace std;
int main(){
double x;
cin>>x;
/*The symbol '(' represents greater than.
The symbol ')' represents smaller than.
The symbol '[' represents greater than or equal.
The symbol ']' represents smaller than or equal.



[0,25], ==> greater than or equal 0  , smaller than or equal 25  ==> >=0 , <=25
(25,50], ==> greater than 25 , smaller than or equal 50 ==> >25 , <=50
(50,75], ==> greater than 50 , smaller than or equal 75 ==> >50 , <=75
(75,100] ==> greater than 75 , smaller than or equal 100  ==> >75 , <=100
*/
if(x>=0&&x<=25){
cout<<"Interval [0,25]";	
}
else if(x>25&&x<=50){
cout<<"Interval (25,50]";	
}	
else if(x>50&&x<=75){
cout<<"Interval (50,75]";	
}
else if(x>75&&x<=100)
{
cout<<"Interval (75,100]";
}
else{
cout<<"Out of Intervals";	
}	
return 0;	
}
