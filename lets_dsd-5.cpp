//-----------------This program is q1-------------------
#include<iostream>
#include<vector>
using namespace std;
void selection_sort(vector <int> &v)
{
	for(int i=1;i<v.size();++i)
	{
		int key=v[i],j=i-1;
		while(key<v[j]&&j>=0)
		{
			v[j+1]=v[j];
			--j;
		}
		v[j+1]=key;
	}
}
int main()
{
	vector<int> v(5);
	cout<<"before sorting"<<endl;
	for(int i=0;i<v.size();++i)
	{
		cin>>v[i];
	}
	selection_sort(v);
	cout<<"after sorting"<<endl;
	for(int i=0;i<v.size();++i)
	{
		cout<<v[i]<<" ";
	}
}








