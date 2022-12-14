#include<bits/stdc++.h>
using namespace std;


int partition(int arr[], int l, int r){
    int pivot = arr[r];
    int i = l-1;
    for(int j=l; j<r; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[j], arr[i]);
        }
    }
    swap(arr[i+1], arr[r]);
    
    return i+1;
}


void quickSort(int arr[], int l, int r){
    if(l < r){
        int p = partition(arr, l, r);
        quickSort(arr, l, p-1);
        quickSort(arr, p+1, r);
    }
}

int main(){
    int arr[5] ={2,4,0,1,8};
    int size = 5;
    quickSort(arr, 0, size-1);
    for(int i=0; i<size; i++){
        cout<<arr[i] <<" ";
    }
    return 0;
}