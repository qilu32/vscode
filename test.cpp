#include <iostream>
#include <vector>
#include <string.h>
#include <stdio.h>
using namespace std;

struct bS{
    string names;
    double zhijing;
    double zhongliang;
};

bS* GetInfo(){
    bS *B=new bS;
    char byt[256];
    cin.getline(byt,255);
    B->names=byt;
    cin>>B->zhijing>>B->zhongliang;
    return B;
}

int main(){
    bS *B=GetInfo();
    cout<<B->names<<endl;
    return 0;
}