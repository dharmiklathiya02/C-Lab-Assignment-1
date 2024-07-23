#include<iostream>
using namespace std;
void volume(int l){
    int v=0;
    v=l*l*l;
    cout<<"Volume Of cube is "<<v<<endl;
}
void volume(int l,int b,int h){
    int v;
    v=l*b*h;
    cout<<"volume Of cuboide is "<<v<<endl;
}
int main(){
    volume(6);
    volume(2,5,8);
    return 0;
}