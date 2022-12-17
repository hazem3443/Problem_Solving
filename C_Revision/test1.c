#include <stdio.h>
#include <stdbool.h>

bool uniqueOccurrences(int* arr, int arrSize);
int main()
{
    printf("Hello World\n");
    int arr[] = {1,2,2,1,1,3};
    printf(uniqueOccurrences(arr, sizeof(arr)/sizeof(int))?"True":"False");
    printf("\n");//ture

    int arr2[] = {1,2};
    printf(uniqueOccurrences(arr2, sizeof(arr2)/sizeof(int))?"True":"False");
    printf("\n");//false

    int arr3[] = {-3,0,1,-3,1,1,1,-3,10,0};
    printf(uniqueOccurrences(arr3, sizeof(arr3)/sizeof(int))?"True":"False");
    printf("\n");//ture

    int arr4[] = {3,5,-2,-3,-6,-6};
    printf(uniqueOccurrences(arr4, sizeof(arr4)/sizeof(int))?"True":"False");
    printf("\n");//false

    return 0;
}

bool uniqueOccurrences(int* arr, int arrSize)
{
    // int occ[2000]={0};
    // bool res=1;
    // for(int i=0;i < arrSize;i++){
    //     occ[arr[i]+1000]++;
    // }
    // for(int i=0;i < arrSize;i++){
    //     printf("%i(%i), ",arr[i],occ[arr[i]+1000]);
    // }
    // printf("\n");

    // //check that the arr of occ have unique values
    // int occ2[1001]={0};
    // for(int i=0;i < 2000;i++){
    //     if(occ[i]>0){
    //         printf("%i, ",occ[i]);
    //         occ2[occ[i]]++;
    //     }
    // }
    // printf("\n");
    // for(int i=0;i < 2000;i++){
    //     if(occ[i]>0)
    //         printf("%i(%i), ",occ[i], occ2[occ[i]]);
    // }
    // printf("\n");
    // for(int i=0;i < 1001;i++){
    //     if(occ2[i]>0){
    //         printf("%i(%i), ",occ2[i],i);
    //         if(occ2[i]>1)
    //             (res&=0);
    //         else
    //             (res&=1);
    //     }
    // }
    // return res;

    int occ[2000]={0};
    bool res=1;
    for(int i=0;i < arrSize;i++){
        occ[arr[i]+1000]++;
    }
    
    //check that the arr of occ have unique values
    int occ2[1001]={0};
    for(int i=0;i < 2000;i++){
        if(occ[i]>0)
            occ2[occ[i]]++;
    }
    for(int i=0;i < 1001;i++){
        if(occ2[i]>0){
            if(occ2[i]>1)
                (res&=0);
            else
                (res&=1);
        }
    }
    return res;
}