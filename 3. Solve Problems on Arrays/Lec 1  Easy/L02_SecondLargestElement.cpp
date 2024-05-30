// Link : https://www.geeksforgeeks.org/problems/second-largest3735/1

// Brute Force Soln
// 1. Sort the array
//  2. Return the second-last element

// Time Complexity : O(nlogn) + O(n)
// Space Complexity : O(1)

class Solution{
public:
    // Function returns the second
    // largest elements

    int print2largest(int arr[], int n) {
        // code here
        sort(arr, arr+n);
        int largest = arr[n-1];
        for(int i = n-2; i >= 0; i--){
            if(arr[i] != largest){ //to check for case where [2,3,4,5,5] (2 largest are present)
                return arr[i];
            }
        }
        return -1;
    }
};


// Better Solution
 // Time Complexity : O(2n) (O(n) + O(n))

class Solution{
public:
    // Function returns the second
    // largest elements
    int print2largest(int arr[], int n) {
        // code here

        //base-case
        //if array has 1 element then it's the largest and there's no 2nd largest
        if(n < 2){
            return -1;
        }

        //calculating the largest element
        int largest = -1;
        for(int i = 0; i<n; i++){
            if(arr[i] > largest){
                largest = arr[i];
            }
        }

        //second largest
        int second_largest = -1;
        for(int i = 0; i<n; i++){
            if(arr[i] > second_largest && arr[i] != largest){
                second_largest = arr[i];
            }
        }

        return second_largest;
    }
};