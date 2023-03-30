#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cout.tie(NULL);
	string a,s;
	cin>>a;
	int n;
	cin>>n;
	s.resize(a.length());
	copy(a.begin(),a.end(),s.begin());
	while(n--)
	{
		int t;
		int mask;
		int ans;
		int x;
		cin>>t;
		if(t==1)
		{
			int l,r;
			char ch;
			cin>>l>>r;
			cin>>ch;
            for(int i=l-1;i<r;i++)
            {
                s[i]=ch;
            }
		}
		else{
			int l,r;
			cin>>l>>r;
			mask = 0;
			ans = 0;
			for(int i=l-1;i<r;i++)
			{
				 x = s[i]-'a';
				mask = 1<<x;
				ans = ans ^ mask;
			}
			if(!(ans & (ans-1)))
			{
				cout<<"Yes"<<endl;
			}
			else{
				cout<<"No"<<endl;
			}
		}
	}

}