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
    for (int i=0;i<n;i++)
    {
        if(frames[i]==-1)
        printf(" ");
        else
        printf("%d",frames[i]);
    }
    printf("\n");
}

void optimal(int pages[], int n, int capacity){
    int frames[capacity];
    int pageFaults=0;
    int index, farthest, futureIndex;
    for(int i=0;i<capacity;i++)
    frames[i]=-1;
    for(int i=0;i<n;i++)
    {
        int page=pages[i];
        index = findIndex(frames, capacity, page);
        if (index==-1)
        {
            int emptyIndex = findIndex(frames, capacity, -1);
        if (emptyIndex!=-1)
        {
            frames[emptyIndex]=page;
        }
        else
        {
            farthest = i+1;
            futureIndex= -1;
            for(int j=0;j<capacity;j++)
            {
                int currentFrame = frames[j];
                int k;
            for (k=i+1;k<n;k++)
            {
                if(currentFrame==pages[k])
                {
                    if(k>farthest)
                    {
                        farthest=k;
                        futureIndex=j;
                    }
                    break;
                }
            }
            if(k==n)
            {
                futureIndex=j;
                break;
            }
            }
            frames[futureIndex]=page;
            }
            pageFaults++;
        }
        printFrame(frames, capacity);
        }
    }

}