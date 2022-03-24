#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.emplace_back(30);
	sort(v1.begin(),v1.end(),greater<int>());
	for(auto it:v1)
		cout<<it<<" ";

}