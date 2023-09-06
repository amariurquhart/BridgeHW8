#include <iostream>
using namespace std;

int minInArray1(int arr[], int arrSize){
    if (arrSize > 0){
        int val = minInArray1(arr, arrSize - 1);
        if (val <= arr[arrSize - 1])
            return val;
        else
            return arr[arrSize - 1];
    }
    else
        return (arr[arrSize] + 1);
}

int minInArray2(int arr[], int low, int high){
    if (low == high)
        return arr[low];
    else{
        int val = minInArray2(arr, low + 1, high);
        if (val <= arr[low])
            return val;
        else    
            return arr[low];
    }     
}

int main(){
    int arr[10] = {9, -2, 14, 12, 3, 6, 2, 1, -9, 15};
    int res1, res2, res3, res4;

    res1 = minInArray1(arr, 10);
    res2 = minInArray2(arr, 0, 9);
    cout << res1 << " " << res2 << endl; //should both be -9

    res3 = minInArray2(arr, 2, 5);
    res4 = minInArray1(arr+2, 4); //arr+2 is equivalent to &(arr[2])
    cout << res3 << " " << res4 << endl; //should both be 3

    return 0;
}