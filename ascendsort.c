//16 March 2026
//bubble sort algorithm
//

#include<stdio.h>
int main(){
    int temp=0,i,n,pass;
    
    scanf("%d",&n);
    
    int arr[n];
    
    for(i=0;i<n;i++){
        scanf("%d",arr+i);
    }
    printf("The array is:");
    
    for(i=0;i<n;i++){
        printf("%d ",*(arr+i));
    }
    for(pass=0;pass<n-2;pass++){
        for(i=0;i<n-pass-1;i++){
            if(i+1<n && arr[i+1]<arr[i] ){
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    printf("The sorted array is:");
    
    for(i=0;i<n;i++){
        printf("%d ",*(arr+i));
    }
    return 0;
}
