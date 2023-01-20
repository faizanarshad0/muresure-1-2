#include<iostream>
using namespace std;

class add
{
	private:
		int n;
		int first[n];
		int second[n];
		public:
	
	int n;
	cout<<"enter the arry length:";
	cin>>n;
	int first[n],second[n],sum[n];
	cout<<"enter the elements of 1st array:";
	for(int i=0;i<n;i++)
	cin>>first[n];
	cout<<"enter the elements of 2nd array:";
	for(int j=0;j<n;j++)
	cin>>second[n];
	cout<<"sum the elements of  array:";
	for(int k=0;k<n;k++)
	{
	
	sum[k]=first[n]+second[n];
	cout<<sum[k]<<"";
}
	return 0;
};
int main()
{
	
}





