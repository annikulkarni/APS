#include<iostream>
#include<vector>
#include<algorithm>
/*find idx1 : traverse from right to left
 nums[i]<nums[i+1]
 then find idx2 where nums[i]>nums[idx1]
 swap nums[idx1] and nums[idx2]
 then sort the part of the vector from idx1+1 to end
 then the resulting vector is next permutation*/
using namespace std;
 void nextPermutation(vector<int>& nums) {
        int idx1=-1;
        if(nums.size()==1)
        {
            return ;
        }
         for(int i=nums.size()-2;i>=0;i--)
         {
             if(nums[i]<nums[i+1])
             {
                 idx1 = i;
                 break;
             }
         }
        if(idx1==-1)
        {
            sort(nums.begin(),nums.end());
        }
        else
        {
            int idx2=0;
            for(int i=nums.size()-1;i>=0;i--)
         {
             if(nums[i]>nums[idx1])
             {
                 idx2 = i;
                 break;
             }
         }
        swap(nums[idx1],nums[idx2]);
        sort(nums.begin()+idx1+1,nums.end());
        }

    }

int main()
{
    vector<int> arr={4,1,5,3,2};
    nextPermutation(arr);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}

