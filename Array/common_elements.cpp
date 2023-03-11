#include<iostream>
#include<vector>
#include<set>
using namespace std;
vector<int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            int x=0,y=0,z=0;
            set <int> set1;
            set <int> set2;
            set <int> set3;
            for(int i=0;i<n1;i++)
            {
                set1.insert(A[i]);
            }
            for(int i=0;i<n2;i++)
            {
                set2.insert(B[i]);
            }
            for(int i=0;i<n3;i++)
            {
                set3.insert(C[i]);
            }
            int P[set1.size()];
            int Q[set2.size()];
            int R[set3.size()];
            int a=0;
                for (auto it = set1.begin(); it !=set1.end(); ++it)
                {
                    P[a]=*it;
                    a++;
                }
                a=0;
                for (auto it = set2.begin(); it !=set2.end(); ++it)
                {
                    Q[a]=*it;
                    a++;
                }
                a=0;
                for (auto it = set3.begin(); it !=set3.end(); ++it)
                {
                    R[a]=*it;
                    a++;
                }


            vector<int> ans;

            while(x<set1.size()&&y<set2.size()&&z<set3.size())
            {
                if(P[x]==Q[y]&&Q[y]==R[z])
                {
                    //cout<<P[x]<<" ";
                    ans.push_back(P[x]);
                    x++;
                    y++;
                    z++;
                }
                else if(P[x]<Q[y])
                {
                    x++;
                }
                else if(Q[y]<R[z])
                {
                    y++;
                }
                else
                {
                    z++;
                }
            }
            return ans;

        }
int main()
{

    int A[7] = {1, 5, 10, 20, 40, 80,80};
    int B[6] = {1,6, 7, 20, 80, 100};
    int C[10] = {1,3, 4, 15,15, 20, 30, 70, 80, 120};

    vector<int> temp = commonElements(A,B,C,7,6,10);
    for(int i=0;i<temp.size();i++)
    {
        cout<<temp[i]<<" ";
    }
}
