#include<stdio.h>
int main()
{
	int BuT[31],Store[31],WaT[31],TaT[31],i,j,n,total=0,pos,temp;
	float Avgwt,AvgTaT;
	printf("Enter number of process:");
	scanf("%d",&n);
	printf("\nEnter Burst Time:\n");
	for(i=0; i<n; i++) {
		printf("p%d:",i+1);
		scanf("%d",&BuT[i]);
		Store[i]=i+1;
	}
	for(i=0; i<n; i++) {
		pos=i;
		for(j=i+1; j<n; j++) {
			if(BuT[j]<BuT[pos])
				pos=j;
		}

		temp=BuT[i];
		BuT[i]=BuT[pos];
		BuT[pos]=temp;

		temp=Store[i];
		Store[i]=Store[pos];
		Store[pos]=temp;
	}

	WaT[0]=0;
	for(i=1; i<n; i++) {
		WaT[i]=0;
		for(j=0; j<i; j++)
			WaT[i]+=BuT[j];

		total+=WaT[i];
	}

	Avgwt=(float)total/n;
	total=0;
	printf("\nProcess\t    Burst Time    \tWaiting Time\tTurnaround Time");
	for(i=0; i<n; i++) {
		TaT[i]=BuT[i]+WaT[i];
		total+=TaT[i];
		printf("\np%d\t\t  %d\t\t    %d\t\t\t%d",Store[i],BuT[i],WaT[i],TaT[i]);
	}
	AvgTaT=(float)total/n;
	printf("\n\nAverage Waiting Time=%.2f",Avgwt);
	printf("\nAverage Turnaround Time=%.2f\n",AvgTaT);
	return 0;
}
