#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	vector<int>ve;
	int i;
	ve.push_back(10);
	ve.push_back(20);//have more time complexity
	ve.emplace_back(30);//have less time complexity
	for(i=0;i<ve.size();i++)
	{
		cout<<ve[i]<<" ";
	}
	ve.pop_back();//to remove last element
	cout<<"\n";
	for(auto it:ve)
	{
		cout<<it<<" ";
	}
	cout<<"\n";
	//iterator declaration
    auto it1=ve.begin();
    cout<<*it1;
    cout<<"\n";
    auto it2=ve.end()-1;
    cout<<*it2;
    cout<<"\n";
    //to print the vector using loops
    for(auto it3=ve.begin();it3!=ve.end();it3++)
    {
    	cout<<*it3<<" ";
    }
    cout<<"\n";
    //rbegin() reverses the list 
    for(auto it4=ve.rbegin();it4!=ve.rend();it4++)
    {
    	cout<<*it4<<" ";
    }
    cout<<"\n";
    ve.push_back(5);
    //to sort
    //before sorting
    for(auto it5:ve)
    {
    	cout<<it5<<" ";
    }
    cout<<"\n";
    sort(ve.begin(),ve.end());
    for(auto it6:ve)//after sorting
    {
    	cout<<it6<<" ";
    }

}