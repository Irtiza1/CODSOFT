
/*CODSOFT INTERNSHIP TASK 1*/

#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

void NumberGuessing(){
    srand(static_cast<unsigned int>(time(nullptr)));
    int num=rand()%100+1;
    int attempt=0,guess=0;
    do{
    cout<<"Guess the number between 1 to 100:  ";
    cin>>guess;
    cout<<endl;
    if(guess!=num && guess>num){
        ++attempt;
        cout<<"you guessed number is too high"<<endl;
        cout<<"No of attempts: "<<attempt<<endl;
    }
    else if(guess!=num && guess<num){
        ++attempt;
        cout<<"you guessed number is too low"<<endl;
        cout<<"No of attempts: "<<attempt<<endl;
    }
    else{
        cout<<"Congrats, You have guessed rightly!"<<endl;
        cout<<"No of attempts: "<<attempt+1<<endl;
    }
    }while(guess!=num);
}
int main(){
    cout<<"Number Guessing Game!"<<endl;
    NumberGuessing();
}