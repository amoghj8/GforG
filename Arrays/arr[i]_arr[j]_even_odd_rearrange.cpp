#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<int> inp{1, 2, 1, 4, 5, 6, 8, 8};
    vector<int> x = inp;
    sort(x.begin(), x.end());
    if(inp.size()&1)
    {
        for(int j=x.size()-1,i=x.size()-2;i>=0;i-=2,j--) {
            inp[i] = x[j];
        }
        for(int j=0,i=x.size()-1;i>=0;i-=2,j++) {

            inp[i] = x[j];
        }

    }
    else {
        {
        for(int j=x.size()-1,i=x.size()-1;i>=0;i-=2,j--) {
            inp[i] = x[j];
        }
        for(int j=0,i=x.size()-2;i>=0;i-=2,j++) {
            inp[i] = x[j];
        }
    }
    }
    for(auto ele: inp) {
        cout<<ele<<"\t";
    }

    return 0;
}
