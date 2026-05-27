#include<iostream>
using namespace std;
string getName(string name){
    return name;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"The number is: "<<n<<endl;
    string name = "Sk Saim Sarkar";
    cout<<"The name is: "<<name<<endl;
    string result = getName(name);
    cout<<result<<endl;
    return 0;
}