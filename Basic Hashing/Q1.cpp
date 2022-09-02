// Q1. Count frequency of each element

#include<bits/stdc++.h>
using namespace std;


//method --1
// unordered_map<int, int> mpp;

// void countFreq(int arr[], int size){
//     for(int i = 0; i < size; i++){
//         mpp[arr[i]]++;
//     }

//     for(auto it : mpp){
//         cout << it.first << " " << it.second <<endl;
//     }
// }

//method --2

 void countFreq(int arr[], int size){

    vector<bool> ans(size,false);


    for(int i = 0; i < size; i++){
        if(ans[i] == true) continue;

        int count = 1;

        for(int j = i+1; j < size; j++){
            if(arr[i] == arr[j]){
                count++;
                ans[j] = true;
            }
        }
        cout << arr[i] << "-->" << count <<endl;
    }
 }


int main(){
    int arr[] = {10,5,10,15,10,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    countFreq(arr, size);
}