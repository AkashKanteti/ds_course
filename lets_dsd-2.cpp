#include<iostream>
using namespace std;
int size=4;
int main()
{
	int arr[size] {4,7,2,9};
	cout<<"how rotations u want to make"<<endl;
	int r;
	cin>>r;
	while(r>=size)
	{
		r-=size;
	}
	int dup[size];
	int i=r,j=0;
	do
	{
		if(i==size)
		i=0;
		dup[j++]=arr[i++];
	}while(r!=i);
	cout<<"after "<<r<<" rotations array is"<<endl;
	for(int x=0;x<size;++x)
		cout<<dup[x]<<" ";
}
