#include<iostream>
using namespace std;
int main()
{
	int n,pos,ele,c;
	cout<<"Enter capacity:";
	cin>>c;
	cout<<"Enter number of elements:";
	cin>>n;
	if(n==c)
	{
		cout<<"Insertion is not possible"; 
		 
    }
    else
    {
    	cout<<"Enter the elements:";
	int arr[n];
	for(int i=0;i<n;i++)
	{	
		cin>>arr[i];
    }
	cout<<"Enter the position in which the element has to insert:";
	cin>>pos;
	cout<<"Enter the element to be inserted:";
	cin>>ele;
	for(int j=n-1;j>=pos-1;j--)
	{
		arr[j+1]=arr[j];
	}
	arr[pos-1]=ele;
	n++;
	cout<<"Elements in the array after insertion:";
	for(int k=0;k<n;k++)
	{
		cout<<arr[k]<<" ";
	}
	}
	return 0;
}
