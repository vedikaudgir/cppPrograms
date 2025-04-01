#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a String:"<<endl;
    getline(cin,str);
    cout<<"The initial string is:"<<str<<endl;
    str.push_back('s');
    cout<<"The string after push_back operation is:"<<str<<endl;
    str.pop_back();
    cout<<"The string after pop_back operation is:"<<str<<endl;
    return 0;
}
