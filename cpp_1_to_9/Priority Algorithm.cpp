#include <stdio.h>
int main()
{

     int BuT[20],WaT[20],p[20],TaT[20],priority[20];
     float avwt=0,avtat=0;

     int i,j,n,temp,key;

     printf("\nEnter the number of the processes: ");

     scanf("%d",&n);

     for(i=1;i<=n;i++)

     {

        printf("\nEnter the burst time and priority of the process P[%d]: ",i);

        scanf("%d",&BuT[i]);
        scanf("%d",&priority[i]);
        p[i]=i;

     }

     for(i=0;i<n;i++)
     {
        key=i;
        for(j=i+1;j<n;j++)
        {
           if(priority[j]<priority[key])
           {
              key=j;
           }
        }
        temp=BuT[i];
        BuT[i]=BuT[key];
        BuT[key]=temp;

        temp=priority[i];
        priority[i]=priority[key];
        priority[key]=temp;

        temp=p[i];
        p[i]=p[key];
        p[key]=temp;
     }


     WaT[0]=0;
     TaT[0]=BuT[0];
     avtat=TaT[0];

     for(i=1;i<n;i++)
     {

           WaT[i]=WaT[i-1]+BuT[i-1];

           TaT[i]=TaT[i-1]+BuT[i];

           avwt+=WaT[i];

           avtat+=TaT[i];

     }

     avwt=avwt/n;
     avtat=avtat/n;

     printf("\n\nPROCESS\t\twaiting time\tburst time\tTurnaround time\n");

     printf("\n");

     for(i=0;i<n;i++)
     {

           printf("P[%d]\t\t%d\t\t%d\t\t%d\n",p[i],WaT[i],BuT[i],TaT[i]);

     }

     printf("\n\nAverage waiting time: %.2f",avwt);
     printf("\n\nAverage Turn around time is: %.2f",avtat);
     printf("\n");

     return 0;

}
