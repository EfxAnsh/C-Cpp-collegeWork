#include<stdio.h>
void main(){
    int A[50],B[50],M[100],p,i,n,j,k=0;
printf("\nEnter the size of array A: ");
scanf("%d", &p);
printf("\n Enter sorted element of A: ");
for(i=0;i<p;i++){
    scanf("%d", &A[i]);
}
printf("\n Enter the size of array B: ");
scanf("%d", &n);
printf("\n Enter sorted element of B: ");
for(j=0;j<n;j++){
    scanf("%d", &B[j]);
}
i=0;
j=0;
while(i<p&&j<n){
    if(A[i]<B[j]){
        M[k]=A[i];
        i++;
    }
    else{
        M[k]=B[j];
        j++;
    }
    k++;
}
if(i>=p){
    while(j<n){
        M[k]=B[j];
        j++;
        k++;
    }
}
if(j>=n){
    while(i<p){
        M[k]=A[i];
        i++;
        k++;
    }
}
printf("\n After Merging: \n");
for(i=0;i<p+n;i++){
    printf("%d ", M[i]);
}

}