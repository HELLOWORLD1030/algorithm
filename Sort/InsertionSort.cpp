//
// Created by HELLO_WORLD on 1/11/2023.
//
#include<cstdio>
void InsertSort(int *a,int n){
    for(int i=1;i<=n;i++){
        int key=a[i];
        int j=i-1;//prev
        while(j>=0&&a[j]>key){
            a[j+1]=a[j];
            j-=1;
            a[j+1]=key;
        }
    }

}
int InsertSortMain(){
    int a[5]={1,10,3,7,5};
    InsertSort(a,sizeof(a)/sizeof(int));
    for(int i=0;i<sizeof(a)/sizeof(int);i++){
        printf("%d ",a[i]);
    }
    return 0;
}