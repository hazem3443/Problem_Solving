#include <stdio.h>

int linear_search(int *arr, int len, int n);
int binary_search(int *arr, int len, int n);

int main(){

    int LA[] = {1, 3, 5, 7, 8, 9, 10, 11, 12, 15, 16};

    //linear search 
    int res = linear_search(LA, sizeof(LA)/sizeof(int), 1);
    printf("res(1) %i\n", res);
    
    res = linear_search(LA, sizeof(LA)/sizeof(int), 3);
    printf("res(3) %i\n", res);

    res = linear_search(LA, sizeof(LA)/sizeof(int), 15);
    printf("res(15) %i\n", res);

    res = linear_search(LA, sizeof(LA)/sizeof(int), 16);
    printf("res(16) %i\n", res);

    res = binary_search(LA, sizeof(LA)/sizeof(int), 1);
    printf("res(1) %i\n", res);
    
    res = binary_search(LA, sizeof(LA)/sizeof(int), 3);
    printf("res(3) %i\n", res);

    res = binary_search(LA, sizeof(LA)/sizeof(int), 15);
    printf("res(15) %i\n", res);

    res = binary_search(LA, sizeof(LA)/sizeof(int), 16);
    printf("res(16) %i\n", res);

    int x,y;

    for(y=0; y<=15 ;y++){
        for(x=0;x<=16;x++){
            if( (x==y+8) || (x==8-y) || (y==8))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

int linear_search(int *arr, int len, int n){
    int i;
    for (i=0;i<len;i++){
        if(arr[i] == n) return i;
    }
    return -1;
}

int binary_search(int *arr, int len, int n){
    int low, high, mid;
    low = 0, high = len;
    while(low <= high){
        mid = low + ((high-low)/2);

        if(arr[mid] == n)
            return mid;
        else if(arr[mid] < n){
            low = mid+1;
        }
        else{//means arr[mid] < n
            high = mid-1;
        }
    }
    return -1;
}