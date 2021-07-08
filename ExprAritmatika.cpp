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
        if(eval[i] == ' ')
            continue;
        else if(isdigit(eval[i])){ 
            while(i<eval.length() && isdigit(eval[i])){
                data.push_back(eval[i]);
                i++;
            }
            i--;
        }
        else if(eval[i] == '-'){
            data.push_back(eval[i]);
            if(i==0){
                if(isdigit(eval[i+1])){
                    i++;
                    while(i<eval.length() && isdigit(eval[i])){
                        data.push_back(eval[i]);
                        i++;
                    }
                    i--;
                 }else{
                    data.push_back('1');
                    data.push_back(' ');
                    data.push_back('*');
                }
            } else {
                if(!isdigit(eval[i-1]) && eval[i+1] != ' '){
                    data.push_back('1');
                    data.push_back(' ');
                    data.push_back('*');
                } 
            }
        }else
            data.push_back(eval[i]);
        data.push_back(' ');
    }
    for(auto j:data)
        cout<<j;
    return 0;
}

//Nomor 2
//Infix to Postfix

#include <iostream>
#include <ctype.h>
#include <stack>

using namespace std;

long unsigned int i;

bool isOP(char c){
    if(c=='+'||c=='-'||c=='*'||c=='/'||c=='%')
		return true;
    return false
}
