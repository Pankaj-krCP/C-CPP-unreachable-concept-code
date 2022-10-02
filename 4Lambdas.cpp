#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> vec{1,2,3,4,5};
    for_each(vec.begin(),vec.end(),[](int & a){a++;});
    for_each(vec.begin(),vec.end(),[] (int a){cout<<a<<" ";});
    return 0;
}