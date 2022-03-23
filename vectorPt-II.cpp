#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>ve;
	int i;
	ve.push_back(10);
	ve.push_back(20);//have more time complexity
	ve.emplace_back(30);//have less time complexity
	ve.push_back(40);
	ve.push_back(50);
	ve.push_back(60);
	for(auto it:ve)
	{
		cout<<it<<" ";
	}
	cout<<"\n";
	//erasing elements
	ve.erase(ve.begin());//erases the 1st element from starting
	for(auto it1:ve)
	{
		cout<<it1<<" ";
	}
	cout<<"\n";
	ve.erase(ve.begin()+1);//erases the 2nd element from starting
	for(auto it1:ve)
	{
		cout<<it1<<" ";
	}
	cout<<"\n";
	//to erase the elements in the range mentioned
	ve.erase(ve.begin(),ve.begin()+2);
	for(auto it2:ve)
	{
		cout<<it2<<" ";
	}
	cout<<"\n";
	//insrting elements
	ve.insert(ve.begin(),10);//10 will be inserted in the beginning
	for(auto it3:ve)
	{
		cout<<it3<<" ";
	}
	cout<<"\n";
	ve.insert(ve.begin(),2,20);//two 20's will be inserted in the beginning
    //swapping of two vectors
    //v1={3,4}
    //v2={1,2}
    //v1.swap(v2);
    ve.clear();//erases all the elements
    cout<<ve.empty();//returns true(1) if the vector is empty
}