#include <iostream>
#include <vector>
using namespace std;

//Time Complexity - O(n)
//Space Complexity - O(1)

int main() {

    int t;
    long long n,s,j=0,result,i;
    vector<long long> arr;
    cin>>t;
    while(t--)
    {
        result = 0;
        cin>>n>>s;
        arr.resize(n);
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            result+=arr[i];
            while(result > s && j<=i)//keep removing element until result greater than sum
            {
                result-=arr[j];
                j++;
            }
            if(result == s)
            {
                cout<<j+1<<" "<<i+1<<"\n";
                break;  //stops taking input once the sum is matched
            }
        }
        if(i==n)
            cout<<"-1\n";
    }

	return 0;
}