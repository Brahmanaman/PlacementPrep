#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {2,1,5,7,0};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<size; i++){
        int temp = arr[i];
        int j = i-1;
        while (j>=0)
        {
            if(temp < arr[j]){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
            j--;
        }
        arr[j+1] = temp;  
    }

    for(int i=0; i<size; i++) cout << arr[i] << " ";
    return 0;
}