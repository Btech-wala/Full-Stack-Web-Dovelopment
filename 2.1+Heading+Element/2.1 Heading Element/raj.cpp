#include<iostream>
using namespace std;
 int glob=170;
 void print(){
    cout<<"glob" << endl;
 }
 int main(){
    print();
    glob=100;
    print();

 }