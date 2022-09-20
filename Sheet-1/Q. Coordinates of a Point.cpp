#include<iostream>
using namespace std;
int main(){
double x,y;
cin>>x>>y;
// x>0 y>0 quartile one
// x<0 y>0 quartile two
// x<0 y<0 quartile three
// x>0 y<0 quartile four
// y=0 x axis
// x=0 y axis 
if(x>0 &&y>0){
cout<<"Q1";	
}
else if(x<0&&y>0){
cout<<"Q2";	
}	
else if(x<0&&y<0){
cout<<"Q3";	
}
else if(x>0&&y<0){
cout<<"Q4";	
}
else if(x==0 &&(y>0||y<0)){
cout<<"Eixo Y";	
}
else if(y==0&&(x>0||x<0)){
cout<<"Eixo X";	
}
else{
cout<<"Origem";
}
	
return 0;	
}
