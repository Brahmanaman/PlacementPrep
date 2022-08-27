// Q5. Check if the given string is Palindrome or not

#include<iostream>
using namespace std;

void isPalindrome(int start, string name, int end){
    if(name[start] != name[end]){
        cout<<"String is not Palindrome";
        return;
    }

    if(start > end){
        cout<<"String is Palindrome";
        return;
    }

    start++;
    end--;

    isPalindrome(start, name, end);
}

int main(){
    string name;
    cin >> name;
    int start =0;
    int end = name.length();
    isPalindrome(start, name, end-1);
}