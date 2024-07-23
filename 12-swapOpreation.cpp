#include<iostream>
using namespace std;
void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"Fuction Swap:"<<endl;
    cout<<a<<" "<<b<<endl;
}
int main(){
    int a=20,b=50;
    cout<<"Before Swap:"<<endl;
    cout<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"After Swap:"<<endl;
    cout<<a<<" "<<b;
    return 0;
}