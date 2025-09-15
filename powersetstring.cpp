    
#include <iostream>
#include <vector>
#include <string>
using namespace std;

  void solve(string str, vector<string>& ss, int index, string output){

    if(index>=str.length()){
     ss.push_back(output);
     return;
  }

   solve(str,ss,index+1,output);

   output.push_back(str[index]);
   solve(str,ss,index+1,output);
  }


  int main(){

  vector<string> temp;
  string str;
  int index=0;
  string output ="";

  cin >> str;

  solve(str,temp,index,output);
  for(string& s: temp){
    cout<< s <<endl;
  }
  return 0;
  }