#include <iostream>
#include <array>
using namespace std;

int sumOfSquares(int arr[], int arrSize){
    int sum = 0;
    if (arrSize >= 0){
        arr[arrSize] = (arr[arrSize] * arr[arrSize]);
        sum = arr[arrSize];
        sum += sumOfSquares(arr, (arrSize - 1));
        return sum;
    }
    else
        return 0;
}

bool isSorted(int arr[], int arrSize){
    bool boo;
    if (arrSize >= 2){
        if (arr[arrSize - 1] >= arr[arrSize - 2])
            boo = isSorted(arr, (arrSize - 1));
        else
            boo = false;
    }
    if (arrSize < 2)
        boo = true;
    return boo;
}

int main(){
    int arrSize = 5, arr[arrSize] = {-1, 2, 3, 4, 4};
    bool boo = isSorted(arr, arrSize);
    int sum = sumOfSquares(arr, arrSize);
    cout << sum << endl;
    cout << boo;
    return 0;
}