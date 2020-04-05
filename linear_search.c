#include<iostream>
#include<stdlib.h>
using namespace std;

int search(int arr[], int key, int n)
{
int i;
for(i=0;i<n;i++)
if(arr[i]==key)
return i;
return -1;
}
int main(void)
{
int arr[30],n;
int key;
cout<<"enter number of element: ";// addition is printed
//int n;
cin>>n;
//cout<<"Enter the array";
for(int i=0;i<n;i++)
{
arr[i]=rand()%100;
cout<<" "<<arr[i];
}
cout<<"Enter the key:";
cin>>key;

int result=search(arr,key,n);
if(result==-1)
cout<<"not found";
else
cout<<"found at :" <<result+1;
}

