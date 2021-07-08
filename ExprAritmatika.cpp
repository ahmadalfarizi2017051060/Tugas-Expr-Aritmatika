//nomor1
//parsing string infix

#include<iostream>
#include<vector>
#include<ctype.h>
using namespace std;

int main(){
    string eval; getline(cin,eval);
    vector<char> data;
    long unsigned int i;
  
    for(i=0; i<eval.length(); i++){
