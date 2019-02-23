/*
https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements/0
@asimsab
*/
#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--) {
	    int n,d;
	    cin>>n>>d;
	    int *arr;
	    arr=(int *)malloc(n*sizeof(int));
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    int *arr2=(arr+d);
	    for(int i=0;i<n-d;i++)
	    cout<<arr2[i]<<" ";
	    for(int i=0;i<d;i++)
	    cout<<arr[i]<<" ";
	    cout<<endl;
	}
}