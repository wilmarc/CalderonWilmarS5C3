#include <iostream>
using namespace std;

int fun1(int a1, int b1);
int fun2(int a2, int b2);
int main(){
  int a=17;
  int b=31;	
  int c=fun1(a,b);
  int d=fun2(a,b);
  cout <<"Para la función 1 si se recibe: "<< a << " y " << b <<" El resultado es " << c << endl;
  cout <<"Para la función 2 si se recibe: "<< a << " y " << b <<" El resultado es " << d << endl;

  return 0;
}

int fun1(int a1, int b1){	
  int res;
  res=a1*b1;
  return res;
}
int fun2(int a2, int b2){	
  int res;
  res=a2*a2;
  return res;
}

