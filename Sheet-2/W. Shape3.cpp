#include<bits/stdc++.h>
using namespace std;
int main(){
int lines;
cin>>lines;// 4
int space_size=lines-1; //3 
for(int rows=1;rows<=lines;rows++){
for(int space=1;space<=space_size;space++){      
cout<<" ";
}
for(int stars=1;stars<rows*2;stars++){	
cout<<"*";	
}
cout<<endl;
space_size--;
}
space_size=1;
for(int rows_2=lines;rows_2>=1;rows_2--){
for(int space_2=1;space_2<space_size;space_2++){
cout<<" ";
}	
for(int stars_2=rows_2*2;stars_2>1;stars_2--){ 
cout<<"*";	
}
cout<<endl;
space_size++;
}
return 0;	
}

