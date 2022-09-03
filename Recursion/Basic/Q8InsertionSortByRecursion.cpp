#include<bits/stdc++.h>
using namespace std;

void RecurInsert(int arr[], int s, int e){
    if(s>e) return;

    int temp = arr[s];
    int j=s-1;
    while (j>=0)
    {
        if(arr[j] > temp){
            arr[j+1] = arr[j];
            j--;
        }
        else{
            break;
        }
    }
    arr[j+1] = temp;

    RecurInsert(arr, s+1, e);
}



int main()
{
    int arr[4] = {2,4,1,0};
    RecurInsert(arr, 0, 3);
    for(int i=0;i<4;i++) cout << arr[i] << " ";
    return 0;
}