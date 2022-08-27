// Q4. Reverse an Array 

#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

vector<int> ans;

// method --1
// void reverseArray(int index, int arr[], int size){
    
//     //base condition
//     if(index >= size) return;

//     index++;
//     reverseArray(index, arr, size);

//     //backtracking
//     index--; 
//     ans.push_back(arr[index]);

// }



void reverseArray(int start, int arr[], int end){
    
    //base condition
    if(start > end) return;

    swap(arr[start], arr[end]);
    start++;
    end--;


    reverseArray(start, arr, end);
}


int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int cnt=0;
    reverseArray(cnt, arr, size-1);

    // printing array
    // for(auto it : ans){
    //     cout << it << " ";
    // }

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}