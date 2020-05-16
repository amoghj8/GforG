#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t) {
	    int n;
	    cin>>n;
	    int arr[n];
	    map<int,int> arrMap;
	    map<int,int>::iterator it;
	    for(int i=0;i<n;i++) {
	        cin>>arr[i];
	        if(arr[i]!=-1)
	            arrMap.insert(pair<int,int>(arr[i],i));
	    }
	    for(it=arrMap.begin();it!=arrMap.end();it++) {
	        if(arr[it->second]!=it->second)
	            arr[it->second]=-1;
	        arr[it->first] = it->first;
	    }
	    for(int i=0;i<n;i++) {
	        cout<<arr[i]<<" ";
	    }
	    if(t!=1)
	        cout<<"\n";
	       t--;
	}
	return 0;
}