#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
    
    vector<int> nums={100,80,60,70,60,75,85};
    stack<pair <int,int>> stack_pair;
    vector<int> v;
    for(int i=0;i<nums.size();i++)
    {
        if(stack_pair.size()==0)
        {
            v.push_back(-1);
        }else if(stack_pair.size()>0 && stack_pair.top().first>nums[i])
        {
            v.push_back(stack_pair.top().second);
        }else if(stack_pair.size()>0 && stack_pair.top().first<=nums[i])
        {
            while(stack_pair.size() && stack_pair.top().first<=nums[i])
            {
                stack_pair.pop();
            }
            if(stack_pair.size()==0)
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(stack_pair.top().second);
            }
        }
        stack_pair.push({nums[i],i});
    }
    
    for(int i=0;i<v.size();i++)
    {
        v[i]=i-v[i];
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }

    return 0;
}
