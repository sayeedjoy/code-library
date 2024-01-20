#include <iostream>
//#incldue <bits/stdc++.h>
using namespace std;
int BinarySearch(int array[], int size, int element);
int main(){
    int array[5]; // = {4,8,16,22, 34};
    int size = sizeof(array)/sizeof(int);
    cout << "Enter Elements: ";
    for(int i = 0; i < size; i++){ //User Input
        cin >> array[i];
    }
    int element;
    cout << "Enter the Element you want to search: ";
    cin >> element;
    int index = BinarySearch(array, size, element);
    cout << "The Element " << element << " Was found at Index " << index ;
}
int BinarySearch(int array[], int size, int element){
    int low =0, mid, high = size-1;
    while(low <= high){
        mid = (low+high)/2;
        if(array[mid]==element){
            return mid;
        }
        if(element > array[mid]){ //jodi element mid er cheye boro hoy tahole mid right e jabe
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
}
