#include<iostream>
#include<vector>
using namespace std;
int main()
{
	//creation of vector
	vector<int>ve;//ve is the name given to vector
	//inserting elements in vector
	//we can do this by using push_back() function
	ve.push_back(10);
	ve.push_back(20);
	ve.push_back(30);
	//ve.emplace(40);
	//for loop will print the elements in vector
	cout<<"Elements in vector ve are:";
	for(int i=0;i<ve.size();i++)
	{
		cout<<ve[i]<<" ";
	}
	cout<<"\n";
	//creation of vector called arr with parameters
	cout<<"Elements in the vector arr are:";
	vector<int>arr(3,100);  //{100,100,100}
	//vector<int>arr(5)   //{0,0,0,0,0}
	for(int i=0;i<arr.size();i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	arr.push_back(20);
	cout<<"Elements in vector arr after inserting another element:";
	for(int i=0;i<arr.size();i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	//copy one vector to another vector
	cout<<"Coping elements from vector ve to vel:";
	vector<int>vel(ve);
	for(int i=0;i<vel.size();i++)
	{
		cout<<vel[i]<<" ";
	}
	cout<<"\n";
	//Iterator : It points to the address of the element in  the vector
	vector<int>::iterator it = arr.begin();
	//print the address of the 1st element
	cout<<"Address of the 1st element in arr vector:";
	cout<<&it<<"\n";
	//print the 1st element
	cout<<"Element at the 1st address:";
	cout<<*(it)<<"\n";
	it++;
	//after incrementing to 1 it will print the 2nd element
	cout<<"Element at 2nd address:";
	cout<<*(it)<<"\n";
	//we can print the values by using for loop, which will decrease the code
	for(vector<int>::iterator it = arr.begin();it!=arr.end();it++);
	{
		cout<<*(it)<<" ";
	}
	cout<<"\n";
	//We can replace vector<int>::iterator with auto which will decrease our code
	for(auto it = arr.begin();it!=arr.end();it++)
	{
		cout<<*(it)<<" ";
	}
	cout<<"\n";
	//We can also replace arr.begin();it!=arr.end();it++ with arr for simplification
	for(auto it : arr)
	{
		cout<<it<<" ";
	}
	cout<<"\n";
	return 0;
}
