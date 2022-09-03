#include<bits/stdc++.h>
using namespace std;

void bubbleRec(int arr[],int e){
    
    if(e==1) return;


    for(int i=0; i<e-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i+1],arr[i]);
        }
    }  
    
    bubbleRec(arr,e-1);     
}

int main(){
    int arr[3] = {2,3,1};
    int size = 3;

    bubbleRec(arr,3);

    for(int i=0; i<3; i++){
        cout<<arr[i] <<" ";
    }

    return 0; 
}