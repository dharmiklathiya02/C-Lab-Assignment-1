#include<iostream>
#include<string>
using namespace std;
void myFunction(string contry="Indian"){
    cout<<contry<<endl;
}
int main(){
    myFunction();
    myFunction("Brazil");
    myFunction("Izrail");
    return 0;
}