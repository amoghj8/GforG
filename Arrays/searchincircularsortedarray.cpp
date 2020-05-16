#include <iostream>
using namespace std;

int SearchCircularSorted(int A[], int size, int key) {
    int left = 0;
    int right = size-1;
    
    while(left<=right){
        int mid = left + (right-left)/2;
        
        if(A[mid]==key)
            return mid;
        else if(A[mid]<=A[right]) {
            if(key>A[mid]&&key<=A[right]) {
                left = mid +1 ;
            }
            else {
                right = mid -1;
            }
        }
        else {
            if(key>=A[left]&&key<A[mid]){
                right = mid -1 ;
            }
            else {
                left = mid + 1;
            }
        }
    }
    return -1;
}
int main() {
	int t;
	cin>>t;
	while(t) {
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int key;
	    cin>>key;
	    int searchIndex = SearchCircularSorted(arr, n, key);
	    cout<<searchIndex;
	    if(t!=1)
	        cout<<"\n";
	   t--;
	}
	return 0;
}