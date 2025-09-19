#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;

int ms(int n, int x,int y,int z){

    if (n==0)
      return 0;

    if(n<0)
      return INT_MIN;

    int op1= 1+ ms(n-x,x,y,z);
    int op2= 1+ ms(n-y,x,y,z);
    int op3= 1+ ms(n-z,x,y,z);

    int findmax=max(op1,max(op2,op3));

    return findmax;
}

 int main(){

   // int n,x,y,z;
   // cout<< "give nums"<<endl;
    // cin>> n>>x>>y>>z;
     
    int m=ms(5,1,3,2);
    cout<< "maximus segment possible is "<< m<<endl;

  return 0;
 }
   