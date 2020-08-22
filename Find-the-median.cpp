#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t,n;
	cin>>t;
	if(t==1)
	{
	    cin>>n;
	    cout<<n<<endl;
	}
	else
	{
	priority_queue<int> max;
	priority_queue<int,vector<int>,greater<int>> min;
	cin>>n;
	int s=n;
	cout<<n<<endl;
	t--;
	while(t--)
	{
	    cin>>n;
	    if(min.size()==0 && max.size()==0)
	    {
	        if(s>n)
	        {
	            min.push(s);
	            max.push(n);
	        }
	        else
	        {
	            min.push(n);
	            max.push(s);
	        }
	        cout<<(n+s)/2<<endl;;
	    }
	    else
	    {
	        if(n<=max.top())
	           max.push(n);
	        else
	           min.push(n);
	        int a=min.size();
	        int b=max.size();
	        if(abs(a-b)>1)
	        {
	            if(a>b)
	            {
	                int ele=min.top();
	                min.pop();
	                max.push(ele);
	            } 
	            else
	            {
	                int ele=max.top();
	                max.pop();
	                min.push(ele);
	            }
	        }
	        a=min.size();
	        b=max.size();
	        if(a==b)
	        {
	            s=max.top()+min.top();
	            cout<<s/2<<endl;
	        }
	        else
	        {
	            if(a>b)
	              cout<<min.top()<<endl;
	            else
	              cout<<max.top()<<endl;
	            
	        }
	    }
	    
	} 
	}
	return 0;
}
