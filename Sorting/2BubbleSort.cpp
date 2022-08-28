#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int arr[]={1,3,20,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 1; i < size; i++){
        bool swp = false;
        for(int j = 1; j < size-i; j++){
            if(arr[j] > arr[j+1]){
                swp = true;
                swap(arr[j], arr[j+1]);
            }
        }
        if(swp==false) break;
    }



    for(int i=0;i<size;i++){
        cout<<arr[i] << " ";
    }
    return 0;
}