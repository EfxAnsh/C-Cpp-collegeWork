#include<stdio.h>
int main(){
    int arr[100]={0};
    int index=2;
    int n=10;
    for(int i=0;i<n;i++){
        arr[i]=i+1;
    }

    for(int i=0;i<n;i++){
        printf("array before insertion: %d\n", arr[i]);
    }
int target=40;
for(int i=n;i>=index;i--){
    arr[i+1]=arr[i];
}
arr[index]=target;
n++;

printf("array after insrtion: \n");
for(int i=0;i<n;i++){
    printf("arr[%d]=%d\n",i,arr[i]);
}
}