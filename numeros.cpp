#include <iostream>
#include <cstdlib>


using std::cout;
using std::endl;


int main(){
  int i, numeroal;
  int cont=0;
int num[25];
  for(int i=0;i<1000;i++){
    numeroal = rand() % 100 + 1;
    cout << i << " " << numeroal << endl;  	 	 
	if ((cont<25) && (numeroal%2==0) && (numeroal<89)){
	cont++;
	//cout <<numeroal<< endl;
	num[cont]=numeroal;	
	}   
  }  
for (int i=0;1<25;i++){
cout <<num[i]<< endl;
} 
   
return 0;
}
