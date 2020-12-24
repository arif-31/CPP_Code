#include<stdio.h>
int main()
{
	int n,BuT[31],WaT[31],TuT[31],Avwt=0,Avtat=0,i,j;
	printf("Enter total number of processes(maximum 30):");
	scanf("%d",&n);

	printf("\nEnter Process Burst Time\n");
	for(i=0; i<n; i++) {
		printf("P[%d]:",i+1);
		scanf("%d",&BuT[i]);
	}

	WaT[0]=0;
	for(i=1; i<n; i++) {
		WaT[i]=0;
		for(j=0; j<i; j++)
			WaT[i] += BuT[j];
	}

	printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");


	for(i=0; i<n; i++) {
		TuT[i]=BuT[i]+WaT[i];
		Avwt+=WaT[i];
		Avtat+=TuT[i];
		printf("\nP[%d]\t\t%d\t\t%d\t\t%d",i+1,BuT[i],WaT[i],TuT[i]);
	}

	Avwt/=i;
	Avtat/=i;
	printf("\n\nAverage Waiting Time:%d",Avwt);
	printf("\nAverage Turnaround Time:%d\n\n",Avtat);

	return 0;
}
