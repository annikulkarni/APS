
#include<bits/stdc++.h>
using namespace std;
//BRUTE FORCE APPROACH 
// After picking the element you move to the next element because you dont want duplicates 
// you store the ds in a set to avoid duplicates
// you sort the array to get the combinations in sorted order
// void comination_sum(int arr[],set<vector<int>> &ans , vector<int> &ds,int target, int ind, int n)
// {
//     if(ind == n)
//     {
//       if(target==0)
//       {
//         ans.insert(ds);
//       }
//       return;
//     }
//     if(arr[ind]<=target)
//     {
//         ds.push_back(arr[ind]);
//         comination_sum(arr,ans,ds,target-arr[ind],ind+1,n);
//         //ind+1 to move to the next element to avoid duplicates
//         ds.pop_back();
//     }
//     comination_sum(arr,ans,ds,target,ind+1,n);
// }
//Efficient approach 
void combination_sum(int arr[],vector<vector<int>> &ans , vector<int> &ds,int target, int ind, int n)
{
    
    if(target==0)
    {
        ans.push_back(ds);
        return;
    }
    
    
    for(int i=ind;i<n;i++)
    {
        if(i>ind&&arr[i]==arr[i-1]) continue;
        //i>ind is to include the element if the previous pick is first
        //if its not the first pick and value is same as previous element ,
        // we ignore because it would make the combination duplicated
        if(arr[i]>target) break;
        // if the current value is greater than target we just stop there 
        // because we won't get any element which would reach the target 
        // as array is sorted
        ds.push_back(arr[i]);
        //push the element in the ds
        combination_sum(arr,ans,ds,target-arr[i],i+1,n);
        // call the function again fot further index and subtract the target 
        //value with current element
        ds.pop_back();

    }
}

int main()
{
    vector<vector<int>> ans;
    vector<int> ds;
    int arr[] = {1,1,1,2,2};
    sort(arr,arr+5);
    //do get the combinations in sorted order
    combination_sum(arr,ans,ds,4,0,5);
    // auto it = ans.begin();
    // while(it != ans.end())
    // {
    //     for(int i = 0 ;i<(*it).size();i++)
    //     {
    //         cout<<(*it)[i]<<" ";
    //     }
    //     cout<<endl;
    //     it++;
    // }
  
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
}


