// Q6. Print Fibonacci Series up to nth term 

#include<iostream>
using namespace std;

void fib(int fterm, int sterm, int cnt, int term){

    //base condition
    if (cnt > term) return;
    
    int tterm = fterm + sterm;
    cout << tterm << " ";
    fterm = sterm;
    sterm = tterm;
    cnt++;
    fib(fterm, sterm, cnt, term);
}


int main(){
    cout << 0 << " " << 1 << " ";
    fib(0, 1, 2, 6);
    return 0;
}