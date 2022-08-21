/*
Write a function that returns day of a year for a given integer bettween 1-365 and a year
information. (if it is a leap year that takes 366 days) (Consider in a leap year February takes
29 days and a year is 366 days)
*/
#include <stdio.h>
#include <stdlib.h>
struct DATE//Section a
{
	int day;
	int month;
	int year;
};
typedef struct DATE Date;
Date diff(Date D1,Date D2)//section b
{
	Date D;
	if(D1.day<D2.day)
	{
		D1.day+=30;
		D1.month--;
	}
	if(D1.month<D2.month)
	{
		D1.month+=12;
		D1.year--;
	}
	if(D1.year<D2.year)
	{
		printf("impossible situation!");
		exit(1);
	}
	D.day=D1.day-D2.day;
	D.month=D1.month-D2.month;
	D.year=D1.year-D2.year;
	return D;
}
int leap(int year)
{
	if(year%400==0) return 1;
	if(year%100==0) return 0;
	if(year%4==0) return 1;
	return 0;
}
void printDate(Date D)
{
	printf("%d/%d/%d\n",D.day,D.month,D.year);
}
Date dayOfYear(int day,int year)
{
	int i,sum=0,d,m;
	Date D;
	int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	if(leap(year)==1) month[2]=29;
	for(i=0;i<13;i++)
	{
		sum+=month[i];
		month[i]=sum;
	}
	i=1;
	while(day>month[i]) i++;
	m=i;
	d=day-month[m-1];
	D.day=d;
	D.month=m;
	D.year=year;
	return D;
}
void testSectionc()
{

	int day,year;
	Date D;
	printf("Enter day:");
	scanf("%d",&day);
	printf("Enter year:");
	scanf("%d",&year);
	D=dayOfYear(day,year);
	printf("The %d. day of year is:\n",day);
	printDate(D);
	
}
void testSectionb()
{
	Date D1,D2,D;
	printf("Enter Date (dd/mm/yy):");
	scanf("%d/%d/%d",&D1.day,&D1.month,&D1.year);
	printf("Enter Date (dd/mm/yy):");
	scanf("%d/%d/%d",&D2.day,&D2.month,&D2.year);
	D=diff(D1,D2);
	printf("The difference between :\n");
	printDate(D1);
	printf("and\n");
	printDate(D2);
	printf("is\n");
	printDate(D);
}
int main()
{
	//testSectionb();
	testSectionc();

}
