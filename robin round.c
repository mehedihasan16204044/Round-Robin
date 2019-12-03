#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,time,count=0,bt[50],wt[50],tat[50],b[50];
float totalwt=0,totaltt=0,avgwt=0,avgtt;
printf("enter number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n enter the brust time of %d process",i+1);
scanf("%d",&bt[i]);
b[i]=bt[i];
}
i=0;
for(time=0;count!=n;time++)
{
while (bt[i]==0)
{
i=(i+1)%n;
}
bt[i]--;
if(bt[i]==0)
{
tat[i]=time+1;
c++;
}
i=(i+1)%n;
}
printf("\n process burst waiting turnaround");
for(i=0;i<n;i++)
{
wt[i]=tat[i]-b[i];
printf("\n%d\t%d\t %d\t %d",i+1,b[i],wt[i],tat[i]);
totalwt=totalwt+wt[i];
totaltt=totaltt+tat[i];
}
printf("\n %d %f %f",n,totalwt,totaltt);
avgwt=totalwt;
avgtt=totaltt;
printf("\navg witing time %f",avgwt);
printf("\navg turnaround time %f",avgtt);
return 0;
}
