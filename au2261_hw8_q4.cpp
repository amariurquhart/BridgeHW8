#include <iostream>
using namespace std;

int findLowestCost(int arr[], int arrSize){
    int sum1 = 0, sum2 = 0;
    if (arrSize <= 1)
        return 0;
    else{
        sum1 = arr[arrSize - 1] + findLowestCost(arr, arrSize - 1);
        if (arrSize > 1)
            sum2 = arr[arrSize - 1] + findLowestCost(arr, arrSize - 2);
        if (sum1 <= sum2)
            return sum1;
        else
            return sum2;
    }
}

int main(){
    
    int arrSize = 6, arr[arrSize] = {0, 3, 80, 100, 57, 10};
    cout << findLowestCost(arr, arrSize);

    return 0;
}