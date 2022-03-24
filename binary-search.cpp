//code for lower bound
//complexity:log(n)
#include<bits/stdc++.h>
using namespace std;
int binary(int arr[],int t,int n)
{
	int left=0,right=n-1;
    while(left<=right)
    {
    	int mid=(left+right)>>1;
    	if(arr[mid]>=t){
    		right=mid-1;
    	}
    	else
    	{
    		left=mid+1;
    	}
    }
    return left;
}
int main()
{
	int n=9;
	int arr[n]={1,2,3,4,5,6,7,8,9};
	int pos=binary(arr,4,n);
	cout<<pos;
}