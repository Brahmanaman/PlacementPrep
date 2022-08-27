// Q3. Sum of first N Numbers  


#include<iostream>
using namespace std;

int sum = 0;
void printName(int i, int n){
    
    // base case
    if(i > n) 
    {
        cout<<sum;
        return;
    }
    sum+=i;
    printName(i+1,n);
    
}

int main(){
    int n;
    cin >> n;
    printName(1,n);
    return 0;

}