#include <bits/stdc++.h>
using namespace std;

int main() {
    
    vector<int> arr{11, 15, 6, 8, 9, 10};
    int x = 16;
    map<int, int> storeMap ;
    for(int i=0;i<arr.size();i++) {
        map<int,int>::iterator itr ;
        itr= storeMap.find(x-arr[i]);
        if(itr==storeMap.end())
            storeMap.insert(pair<int,int>(arr[i],i));
        else{
            cout<<"Required pair found "<<arr[i]<<" "<<itr->first;
            return 0;
        }
    }
    cout<<"No matching pair";
	return 0;
}