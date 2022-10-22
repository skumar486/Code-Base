// C++ program for
// Recursion implementation of
// Min Sum Path in a Triangle
#include <bits/stdc++.h>
using namespace std;
 
// Util function to find minimum sum for a path
int helper(vector<vector<int>>& tri, int i, int j){
    // Base Case 
    if(i == tri.size() ){
      return 0 ;
    }
   
    int mx ;
    // Add current to the maximum  of the next paths
    mx = tri[i][j] + max(helper(tri, i+1,j), helper(tri,i+1, j+1)) ;
    //return maximum
    return mx ;
}
 
 
int maxSumPath(vector<vector<int>>& tri) {
    return helper(tri, 0, 0) ;
}
 
/* Driver program to test above functions */
int main()
{
    vector<vector<int> > tri{ { 1 },
                            { 2, 1 },
                            { 3, 3, 2 } };
    cout << maxSumPath(tri);
    return 0;
}
