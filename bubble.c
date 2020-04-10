
#include<stdio.h>
void main()
{
int a[30],n,i;
printf("ENter the no of element");
scanf("%d",&n);

printf("Enter the array element");
	for(i=0;i<n;i++)
	{
	scanf("%d",a[i]);
	}
	for(i=0;i<n;i++)
	{
	printf("%d",a[i]);
	}
	
	
	printf("sorted array is ");
	bubble_sort1(a,n);
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	
//getch();
}


void bubble_sort1(int a[],int n)
{
int i,j,temp;
for(i=1	;i<n;i++)

for(j=0;j<n;j++)
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;


}

}

