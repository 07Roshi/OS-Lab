// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int i=0,pno[10],bt[10],n,wt[10],temp=0,j,tt[10];
//     float sum,at;
//     printf("Enter the number of processes:");
//     scanf("%d",&n);
//     printf("Enter the burst time of each process:");
//     for(i=0;i<n;i++)
//     {
//        printf("\n p%d",i);
//        scanf("%d",&bt[i]);
//     }
//     for(i=0;i<n-1;i++)
//     {
//         for(j=i+1;j<n;j++)
//         {
//             if(bt[i]>bt[j])
//             {
//                 temp=bt[i];
//                 bt[i]=bt[j];
//                 bt[j]=temp;
//                 temp=pno[i];
//                 pno[i]=pno[j];
//                 pno[j]=temp;
//             }
//         }
//     }
//     wt[0]=0;
//     for(i=1;i<n;i++)
//     {
//         wt[i]=wt[i-1]+bt[i-1];
//         sum=sum+wt[i];
//     }
//     printf("\n process no \t burst time \t waiting time \t turn around time\n");
//     for(i=0;i<n;i++)
//     {
//         tt[i]=wt[i]+bt[i];
//         at+=tt[i];
//         printf("\n %d \t\t %d \t\t %d \t\t %d",i,bt[i],wt[i],tt[i]);
//     }
//     printf("\n\n\t Avaerage waiting time%f\n\t Average turn around time%f",sum/n,at/n);
// }