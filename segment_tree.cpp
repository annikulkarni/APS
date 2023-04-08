#include<bits/stdc++.h>
using namespace std;
void construct_tree(int arr[],int seg_tree[],int lo,int hi,int pos)
{
    if(lo==hi)
    {
        seg_tree[pos]=arr[lo];
        return ;
    }
    int mid = lo + (hi-lo)/2;
    construct_tree(arr,seg_tree,lo,mid,(2*pos)+1);
    construct_tree(arr,seg_tree,mid+1,hi,(2*pos)+2);
    seg_tree[pos] = min(seg_tree[(2*pos)+1],seg_tree[(2*pos)+2]);
 
}
int range_min_query(int seg_tree[],int qlo,int qhi,int hi,int lo,int pos)
{
    if(qlo<=lo&&qhi>=hi)
    {
        return seg_tree[pos];
    }
    else if(qlo>hi||qhi<lo)
    {
        return INT_MAX;
    }
    int mid = lo + (hi-lo)/2;
    return min(range_min_query(seg_tree,qlo,qhi,mid,lo,2*pos+1),range_min_query(seg_tree,qlo,qhi,hi,mid+1,2*pos+2));
}
int main()
{
   int n = 8;
   int arr[n] = {-1,2,4,0,5,3,-3,1};
   
   int size = 2*pow(2, ceil(log(n)/log(2)))-1;
   cout<<size<<endl;
   int seg_tree[size];
   for(int i=0;i<size;i++)
   {
      seg_tree[i] = INT_MAX;
   }
   construct_tree(arr,seg_tree,0,n-1,0);
   for(int i=0;i<size;i++)
   {
        cout<<seg_tree[i]<<" ";
   }
   cout<<endl;
   cout<<range_min_query(seg_tree,2,6,n-1,0,0);

}