#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {cin>>a[i];}
    for(int j=n-1;j>=0;j--)
    {
    cout<<a[j]<<" ";}
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
