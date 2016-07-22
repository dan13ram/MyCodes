#include<iostream>
#include<stack>
#include<cctype>
#include<string>
using namespace std;

//template<class T>
//class stack{
//T arr[256];
//int topind;
//public:
//stack(){
//topind=-1;
//}
//T top(){
//return this->arr[topind];
//}
//void push(T a){
//this->topind++;
//this->arr[topind]=a;
//}
//void pop(){
//topind--;
//}
//int size(){
//return this->topind + 1;
//}
//};

int valOf(char a){
switch (a){
  case '+' : return 1; break;
  case '-' : return 1; break;
  case '*' : return 2; break;
  case '/' : return 2; break;
  case '%' : return 2; break;
//  case '+' : return 1; break;
  default: return 0;
}
}


string inToPost(string in){
in += ')';
stack<char> stOp;
string post(in.size(),' ');
int k=0;

for(int i=0;i<in.size();++i){
if(isalnum(in[i]))post[k++]=in[i];
else if(in[i]==')'){
  while(stOp.size()>0 && stOp.top()!='('){
    post[k++]=stOp.top();
    stOp.pop();
  }
  stOp.pop();
}
else if(in[i]=='('){
stOp.push(in[i]);
}
else{
  int val=valOf(in[i]);
  while(stOp.size()>0 && val<=valOf(stOp.top())){
      post[k++]=stOp.top();
      stOp.pop();
      }
    stOp.push(in[i]);
  }
}

//cout<<"\nthis must be printed : "<<post;
return post;

}


int main(){
char in[256];
cout<<"\nEnter the expression in infix notation : ";
cin.getline(in,256,'\n');
cout<<"\nYou entered : "<<in;
string post=inToPost(in);
cout<<"\nThe same expression in postfix notation is :"<<post<<endl;
return 0;
}
