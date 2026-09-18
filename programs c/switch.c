#include<stdio.h>
int main(){
    int arr[]={10,6,3,7,13,1,35};
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if(arr[i]<arr[j]){
                arr[i]=arr[j];
            }
        }
    }
    for(int k=0;k<7;k++){
        printf("%d\t",arr[k]);
    }

    return 0;
}
