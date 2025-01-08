#include<iostream>
using namespace std;
int main(){
    string op;
    double num1,num2,result;
    
    cout<<"Enter the first number :- ";
    cin>>num1;
    cout<<"Enter the second number :- ";
    cin>>num2;

    cout<<"Enter the operator (+,-,*,/) :- ";
    cin>>op;
    

    if(op=="+"){
        cout<< num1+num2; 
    }
    else if(op=="-"){
        cout<<num1-num2<<endl;
    }
    else if(op=="*"){
        cout<<num1*num2<<endl;
    }
    else if(op=="/"){
        cout<<num1/num2<<endl;
    }
    return 0;
    
    
    

}
