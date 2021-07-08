//nomor1
//parsing string infix
/*
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
*/
//Nomor 2
//Infix to Postfix
/*
#include <iostream>
#include <ctype.h>
#include <stack>

using namespace std;

long unsigned int i;

bool isOp(char c){
    if(c=='+'||c=='-'||c=='*'||c=='/'||c=='%')
		return true;
    return false;
}

int precedence (char c){
	if(c == '+' || c == '-' ) return 1;
	if(c == '*' || c == '/' || c == '%' ) return 2;
	return 0;
}
string IntoPos(string in){
	stack <char> data;
	
	string postfix = "";
	
	for(i = 0; i < in.length(); i++){
		if(isdigit(in[i])){
			while(i < in.length() && isdigit(in[i])){
				postfix += in[i];
				i++;
			}
			i--;
			postfix += " ";
		}
		else if(in[i] == '(')
			data.push(in[i]);
		else if(in[i] == ')'){
			while(!data.empty() && data.top() != '('){
				postfix += data.top();
				postfix += " ";
				data.pop();
			}
			data.pop();
		} else {
			if(in[i] == '-'){
				if(i==0){
					if(isdigit(in[i+1])){
						postfix += in[i];
						i++;
						while(i<in.length() && isdigit(in[i])){
							postfix += in[i];
							i++;
						}
						i--;
						postfix += " ";
					}
					else{
						postfix += "-1 ";
						data.push('*');
					}
				} else {
					while(!data.empty() && precedence(data.top()) >= precedence(in[i]) && !isOp(in[i-1])){
						postfix += data.top();
						postfix += " ";
						data.pop();
					}
					
					if((isdigit(in[i+1]) || in[i+1] =='(') && (isdigit(in[i-1]) || in[i-1] == ')'))
						data.push(in[i]);
					else {
						postfix += "-1 ";
						data.push('*');
					}
				}
			} else {
				while(!data.empty() && precedence(data.top()) >= precedence(in[i])){
					postfix += data.top();
					postfix += " ";
					data.pop();
				}
				data.push(in[i]);
			}
		}
	}
	while(!data.empty()){
		postfix += data.top();
		postfix += " ";
		data.pop();
	}
	return postfix;
}

int main(){
	string input; 
	string temp = "";
	
	getline(cin,input);
	
	for(i = 0; i < input.length(); i++){
		if(input[i] == ' ')
			continue;
		else
			temp += input[i];
	}
	cout << IntoPos(temp);
	return 0;
}
*/
//Nomor 3
//Evaluasi Aritmatika
#include <iostream>
#include <ctype.h>
#include <stack>
using namespace std;
long unsigned int i;

bool isOp(char c){
	if(c=='+'||c=='-'||c=='*'||c=='/'||c=='%')
		return true;
	return false;
}
int precedence(char c){
}
double applyOp(double num1, double num2, char op){
}
void calculate(string input){
}

int main(){
	
	
	return 0;
}




