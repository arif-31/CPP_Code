#include<stdio.h>
int main()
{
	int BuT[100],WaT[100],TaT[100],b[100];
	int i,n,time,count=0;
	float totalwt=0,totalTT=0,avgwt,avgtt;

	printf("Enter total number of process : ");
	scanf("%d",&n);
	for(i=0; i<n; i++) {
		printf("\nEnter the burst time of %d process : ",i+1);
		scanf("%d",&BuT[i]);
		b[i] = BuT[i];
	}
	i=0;
	for(time=0; count!=n; time++) {
		while(BuT[i] == 0) {
			i=(i+1)%n;
		}
		BuT[i]--;
		if(BuT[i]==0) {
			TaT[i] = time+1;
			count++;
		}
		i = (i+1)%n;
	}
	printf("\nprocess   burst   waitng   turnaround   ");
	for(i=0; i<n; i++) {
		WaT[i] = TaT[i] - b[i];
		printf("\n   %d \t    %d \t     %d \t    %d",i+1,b[i],WaT[i],TaT[i]);
		totalwt = totalwt + WaT[i];
		totalTT = totalTT + TaT[i];
	}
	printf("\n  %d  %f  %f",n,totalwt,totalTT);
	avgwt = totalwt / n;
	avgtt = totalTT / n;
	printf("\nAverage waiting time is %f",avgwt);
	printf("\nAverage turnaround time is %f \n\n",avgtt);
	return 0;
}
