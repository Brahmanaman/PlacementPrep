// Q2. Print 1 to N 


#include<iostream>
using namespace std;

void printName(int i, int n){
    
    // base case
    if(i>n) return;
   
    cout << i << endl;
    printName(i+1, n);
}

int main(){
    int n;
    cin >> n;
    printName(1,n);
    return 0;

}