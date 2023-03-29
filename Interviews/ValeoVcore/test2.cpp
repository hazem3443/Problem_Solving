#include <iostream>

using namespace std;

int linear_search(int *arr, int len, int n);

int main(){

    int LA[] = {1, 3, 5, 7, 8, 9, 10, 11, 12, 15, 16};

    //linear search
    int res = linear_search(LA, sizeof(LA)/sizeof(int), 3);

    printf("Hello %i", res);
    return 0;
}

int linear_search(int *arr, int len, int n){
    int i;
    for (i=0;i<len;i++){
        if(arr[i] == n) return i;
    }
    return -1;
}