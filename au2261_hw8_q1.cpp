#include <iostream>
#include <cmath>
using namespace std;

void printTriangle(int n){
    if (n == 1)
        cout << "*" << endl;
    else{
        printTriangle(n - 1);
        for (int i = 0; i < n; i++)
            cout << "*";
        cout << "\n";
    }
}

void printOppositeTriangles(int n){
    if (n >= 1){
        for (int i = 0; i < n; i++)
            cout << "*";
        cout << "\n";
        printOppositeTriangles(n - 1);
        for (int i = 0; i < n; i++)
            cout << "*";
        cout << "\n";
    }
}

void printRuler(int n){
    if(n == 1)
        cout << "- " << endl;
    else{
        printRuler(n - 1);
        for (int i = 0; i < n; i++)
            cout << "- ";
        cout << endl;
        printRuler(n - 1);
    }
}

int main(){
    
    printTriangle(8);
    cout << endl;
    printOppositeTriangles(5);
    cout << endl;
    printRuler(3);
    
    return 0;
}