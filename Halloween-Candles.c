#include<stdio.h>
#include<stdlib.h>

int main(){

    int n, *dizi, c, i, max, cost=0;

    scanf("%d",&n);
    
    dizi=(int*)malloc(n*sizeof(int));
    
    for(i=0;i<n;i++)
        scanf("%d",&dizi[i]);
    
    scanf("%d",&c);
    
    max=dizi[0];
    
    for(i=1;i<n;i++)
        if(dizi[i]>max)
            max=dizi[i];

    for(i=0;i<n;i++)    
        cost+=max-dizi[i];

    if(cost>c){
        printf("0");
        exit(0);
    }
    else if(cost==c){
        printf("1");
        exit(0);
    }

    c=c-cost;

    if(n%c==0){
        printf("1");
        exit(0);
    }

    printf("0");
    
    return 0;
}