#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	//pair declaration
	pair<int,float>p={2,9.87};
	cout<<p.first<<" "<<p.second<<endl;
	//pair array
	pair<int,int>a[]={{2,2},{3,3}};
	cout<<a[0].first<<endl;
	vector<pair<int,int>>p1;
	p1.push_back({1,2});
	p1.push_back({3,4});
	for(int i=0;i<p1.size();i++)
	{
		cout<<p1[i].first<<" "<<p1[i].second<<endl;
	}
    //pair-in-pair
    pair<int,pair<int,int>>p2={1,{0,4}};
    cout<<p2.first<<endl;
    cout<<p2.second.first;
}