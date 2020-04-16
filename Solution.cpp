#include <iostream>
using namespace std;

int main() {
	//code
	int t=0;
	cin >> t;
	
	while(t--)
	{
	    int n=0;
	    cin >> n;
	    int a[n];
	    int sum=0,sum1=0;
	    for(int i=0; i<n/2; i++)
	    {
	        cin >> a[i];
	        sum = sum+a[i];
	    }
	    for(int i=n/2; i<n; i++)
	    {
	        cin >> a[i];
	        sum1 = sum1+a[i];
	    }
	    int diff=(sum1>sum)?sum1-sum:sum-sum1;
	    cout << diff << endl;
	}
	return 0;
}