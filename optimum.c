#include<stdio.h>
#include<stdbool.h>

int findIndex(int frames[], int n, int page)
{
    for(int i=0;i<n;i++)
    {
        if(frames[i]==page)
        return i;
    }
    return -1;
}

void printFrame(int frames[], int n)
{
    for (int n=0;i<n;i++)
    {
        if(frames[i]==-1)
        printf(" ");
        else
        printf("%d",frames[i]);
    }
    printf("\n");
}

void optimal(int pages[], int n, int capacity){
    
}