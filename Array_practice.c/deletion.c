#include<stdio.h>
int main(){
    int arr[100]={0};
    int index=2;
    //int k=3;
    int n=10;
    int i,j;
    for (i=0;i<n;i++){
        arr[i]=i+1;
            }
for(int i=0;i<n;i++){
    printf("The original elements of arr[%d]= %d\n ", i,arr[i]);
}
j=index;
while(j<n){
    arr[j-1]=arr[j];
    j++;
}
n--;
printf("\narray after deletion: \n");
for(int i=0;i<n;i++){
    printf("arr[%d]=%d\n",i,arr[i]);
}
}