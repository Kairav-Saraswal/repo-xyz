
#include<stdio.h>
int main(){
    int i,n,pass;
    
    scanf("%d",&n);
    
    int arr[n];
    
    for(i = 0;i < n;i ++)
        scanf("%d",arr+i);
    
    printf("The array is:");
    for(i=0;i<n;i++){
        printf("%d ",*(arr+i));
    }
    for(pass=0;pass <= n-1 ; pass++){
        for(i=0;i<n-pass;i++){
            if( arr[i+1]<arr[i] ){
                int temp=arr[i];
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
