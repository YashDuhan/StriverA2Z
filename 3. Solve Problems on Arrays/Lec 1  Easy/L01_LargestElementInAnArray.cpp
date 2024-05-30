// Link : https://www.geeksforgeeks.org/problems/largest-element-in-array4009/0

//Brute Force soln
    // 1. Sort the array
   //  2. Return the last element

    // Time Complexity : O(nlogn)
    // Space Complexity : O(1)

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        sort(arr.begin(),arr.end());
        return arr[n-1];
    }
};


//Optimal Soln
    // 1. Initialise a max variable with INT_MIN
    // 2. Traverse over the array with arr[i] > max; set max = arr[i];
    // 3. Return max

    // Time Complexity : O(n)
    // Space Complexity : O(1)

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int maximum = INT_MIN;
        for(auto i:arr){
            if(i > maximum){
                maximum = i;
            }
        }
        return maximum;
    }
};
