#include <stdio.h>
#include <stdlib.h>

int find_max(int *arr, int len);
void swap(int *a1, int* a2);
void bubble_sort(int *arr, int n);
void counting_sort(int *arr, int n);

int* merge_sort(int *arr, int len);
int* merge(int *l1, int l1_len, int *l2, int l2_len, int *arr);

//how can i print integer ?


//hellow
void main(){
    int arr[] = {5,4,20,3,12,2};
    int max;
    max = find_mGFGax(arr,sizeof(arr)/sizeof(int)); 
    printf("max = %i\n",max);

    for(int i=0;i<sizeof(arr)/sizeof(int);i++)
        printf("%i,",arr[i]);

    printf("\n");
    bubble_sort(arr,sizeof(arr)/sizeof(int));
    for(int i=0;i<sizeof(arr)/sizeof(int);i++)
        printf("%i,",arr[i]);
        //can u write me a song

    printf("\n");

    int arr2[] = {5,4,20,3,12,2};
    counting_sort(arr2,sizeof(arr2)/sizeof(int));
    for(int i=0;i<sizeof(arr2)/sizeof(int);i++)
        printf("%i,",arr2[i]);
    
    printf("\n");

// Error from OpenAI!
    int arr3[] = {5,4,20,3,12,2};
    merge_sort(arr3,sizeof(arr3)/sizeof(int));
    for(int i=0;i<sizeof(arr3)/sizeof(int);i++)
        printf("%i,",arr3[i]);

    
    return 0;
}

int find_max(int *arr, int len){
    int i, max=-1;
    for(i=0;i<len;i++){
        if(max< arr[i])
        max = arr[i];
    }
    return max;
}
void counting_sort(int *arr, int n){
    int i, max;
    max = find_max(arr, n)+1;
    int idxarr[max];
    int resarr[n];

    // //clear the array
    for(i=0;i<max;i++)
        idxarr[i]=0;

    // //start incrementing idxs
    for(i=0;i<n;i++)
        idxarr[arr[i]]++;

    int j;
    for(i=0, j=0;i<max;i++){
        if(idxarr[i]){
            resarr[j++] = i;
            idxarr[i]--;
        }
    }

    //copy result array into arr
    for(i=0;i<n;i++)
        arr[i] = resarr[n-1-i];

}
void swap(int *a1, int* a2){
    int temp = *a1;
    *a1 = *a2;
    *a2 = temp;
}
void bubble_sort(int *arr, int n){
    int i,j;

    for(i=0; i <n-1;i++)
       for(j=0; j <n-i-1;j++){
        if(arr[j] < arr[j+1])
            swap(&arr[j], &arr[j+1]);
       }
}

int* merge_sort(int *arr, int len){

    if(len ==1)
        return arr;
    int* l1,*l2;
    int mid = len/2;
    l1 = merge_sort(arr, mid);
    l2 = merge_sort(arr+mid, len-mid);
    //l1 = divide arr (arr, len/2)
    //l2 = divide arr (arr+len/2, len-(len/2))

    int* new_sorted_Arr = merge(l1, mid, l2, len-mid, arr);
    return new_sorted_Arr;
}

int* merge(int *l1, int l1_len, int *l2, int l2_len, int *arr){
    int* l3_new = malloc( (l1_len+l2_len)*sizeof(int) );
    int i,j, l3_idx;
    i=0,j=0, l3_idx=0;
    while( (i<l1_len) && (j<l2_len) ){
        if(l1[i] <= l2[j])
            l3_new[l3_idx++] = l2[j++];
        else
            l3_new[l3_idx++] = l1[i++];
    }
    while( i<l1_len ){
        l3_new[l3_idx++] = l1[i++];
    }
    while( (j<l2_len) ){
        l3_new[l3_idx++] = l2[j++];
    }

    //copy them into x array
    l1_len += l2_len;
    l2_len=0;
    while((arr[l2_len] = l3_new[l2_len])&& (++l2_len<l1_len));

    return arr;
}