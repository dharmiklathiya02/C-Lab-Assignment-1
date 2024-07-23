#include<iostream>
using namespace std;
void ref(int &b){
    b=b+20;
}
int main(){
    int a=10;
    cout<<"Value Is Now Call With Refrencen"<<endl;
    cout<<"Before Value A is "<<a<<endl;
    ref(a);
    cout<<"After Value A is "<<a;
    return 0;
}
