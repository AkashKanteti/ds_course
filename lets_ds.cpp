#include<iostream>
using namespace std;
int main()
{
	int size=6;
	int arr[size] {1,34,5,33,98,4};
	cout<<"elements are"<<endl;
	for(int i=0;i<size;++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"deleting at front"<<endl;
	for(int i=1;i<6;++i)
	{
		arr[i-1]=arr[i];
	}
	--size;
	for(int i=0;i<size;++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"enter the position where u want to delete"<<endl;
	int index;
	cin>>index;
	--size;
	for(int i=index-1;i<size;++i){
		arr[i]=arr[i+1];
	}
	for(int i=0;i<size;++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
