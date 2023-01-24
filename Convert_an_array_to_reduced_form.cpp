/*
Given an array with N distinct elements, convert the given array to a reduced form where all elements are in range from 0 to N-1. The order of elements is same, i.e., 0 is placed in place of smallest element, 1 is placed for second smallest element, and N-1 is placed for the largest element.

Note: You don't have to return anything. You just have to change the given array.

Example 1:

Input:
N = 3
Arr[] = {10, 40, 20}
Output: 0 2 1
Explanation: 10 is the least element so it
is replaced by 0. 40 is the largest
element so it is replaced by 3-1 = 2. And
20 is the 2nd smallest element so it is
replaced by 1.
*/

void convert(int arr[], int n) {
	    // code here
	    vector<pair<int, int>> v;
	    for (int i = 0; i < n; i++) {
	        v.push_back({arr[i], i});
	    }
	    sort(v.begin(), v.end());
	    
	    for (int i = 0; i < n; i++) {
	        arr[v[i].second] = i;
	    }
	    
	}
