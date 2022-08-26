// Q1. Print Name 5 Times

#include<iostream>
using namespace std;

void printName(int i, int n){
    
    // base case
    if(i>n) return;
   
    cout << "Aman" << endl;
    printName(i+1, n);
}

int main(){
    int n;
    cin >> n;
    printName(1,n);
    return 0;

}