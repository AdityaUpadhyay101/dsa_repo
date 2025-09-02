#include <iostream>

using namespace std;

void decimal2binary(int num){
 
    if(num==0)
     return;

    decimal2binary(num/2);
    
    cout << num%2 ;

}


int main(){
    cout << "enter a decimal value\n";
    int num;
    cin >> num;
    
    if (num ==0)
     cout << "0";
    else 
     decimal2binary(num);



 return -1;

}
