#include <iostream>
using namespace std;
int main()
{
	int arr[100],sum=0,n;
	float avg;
	cout<<"Enter size of array: ";
	cin>>n;
	cout<<"Enter array elements: ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		sum=sum+arr[i];
		
	}
	cout<<"Sum = "<<sum<<endl;
	avg=sum/n;
	cout<<"Avg = "<<avg;
}
