#include<stdio.h>
void mergeArrays(int arr1[],int arr2[],int n1, int n2, int merge[]){
    int i=0,j=0,k=0;
    while (i<n1)
    {
        merge[k++]=arr1[i++];
    }
    while (j<n2)
    {
        merge[k++]=arr2[j++];
    }
      
}

int main(){
    int arr1[]={7,3,5,6,10};
    int arr2[]={2,4,11,9,0};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int merge[n1+n2];
    mergeArrays(arr1,arr2,n1,n2,merge);
    printf("merged array: {");
    for(int i=0;i<n1+n2;i++){
        printf("%d ", merge[i]);
        if(i<n1+n2-1){
            printf(",");
        }
    }
    printf("}");

}