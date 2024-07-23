#include<iostream>
using namespace std;
int main(){
    int firstNum,secondNum,temp;
    cout<<"Enter Value To Swap Veraibles"<<endl;
    cout<<"Enter Two NUmber";
    cin>>firstNum>>secondNum;
    cout<<"Before Swapping"<<endl<<"First Veriable Is "<<firstNum<<"Second Veriables Is "<<secondNum<<endl;
    temp=firstNum;
    firstNum=secondNum;
    secondNum=temp;
    cout<<"After Swapping"<<endl<<"First Veriable Is "<<firstNum<<"Second Veriables Is "<<secondNum;
    return 0;
}