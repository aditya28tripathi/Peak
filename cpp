/* The function should return the index of any
   peak element present in the array */

// arr: input array
// n: size of array
class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       // Your code here
       if (n == 1)
            return 0;

        for (int i = 0; i < n; i++)
        {      
            if (i == 0)
            {
                if (arr[i] >= arr[i + 1])
                    return i;
            }
            else if (i == n - 1)
            {
                if (arr[i] >= arr[i - 1])
                    return i;
            }
            else
            {
                if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
                    return i;
            }
        }

        // If no peak element is found, return -1.
        return -1;
    }
};
