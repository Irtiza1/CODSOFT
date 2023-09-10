
/*CODSOFT INTERNSHIP TASK 2*/

#include<iostream>
using namespace std;

void calcuate(int num1,int num2 ,int operation){
    if(operation==1)
    cout<<"sum of " <<num1<<"and "<<num2<<" is: "<<num1+num2<<endl;
    else if(operation==2)
    cout<<"subtraction of " <<num1<<" and "<<num2<<" is: "<<num1-num2<<endl;
    else if(operation==3)
    cout<<"multiplication of " <<num1<<" and "<<num2<<" is: "<<num1*num2<<endl;
    else{
        if(num2>0){
            cout<<"division of " <<num1<<" and "<<num2<<" is: "<<num1/num2<<endl;
        }
        else {
            cout<<"division of " <<num1<<" and "<<num2<<" is not possible"<<endl;
        }
    }
}

int main(){
    int operation,num1,num2;
    cout<<"SIMPLE CALCULATOR!"<<endl;
    
    do{    
        cout<<"\nSelect the operation:\n0-Stop\n1-Add\n2-Subtract\n3-Multiple\n4-Divide\nAnswer: ";
        cin>>operation;
        cout<<endl;
        if(operation!=0){
            cout<<"Enter 1st number: ";
            cin>>num1;
            cout<<"Enter 2nd number: ";
            cin>>num2;
            calcuate(num1,num2,operation);
        }
    }while(operation!=0);
    
    return 0;
}