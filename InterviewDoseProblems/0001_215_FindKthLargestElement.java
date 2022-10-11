Given an integer array nums and an integer k, return the kth largest element in the array.

Note that it is the kth largest element in the sorted order, not the kth distinct element.

You must solve it in O(n) time complexity.

 

Example 1:

Input: nums = [3,2,1,5,6,4], k = 2
Output: 5

Example 2:

Input: nums = [3,2,3,1,2,4,5,5,6], k = 4
Output: 4


class Solution {

	//quickSelect based algorithm
	int getPivot(int low, int high, int[] arr){
		int pivot = arr[high];
		int i=low, j=low;
		while(i<=high){
			if(arr[i]<= pivot){
				swap(i,j,nums);
				j++;
			}
			i++;
		}
		return j-1;
	}

	void swap(int i, int j, int[] nums){
		int temp = nums[i];
		nums[i] = nums[j];
		nums[j] = temp;
	}

	public int quickSort(int low, int high, int[] nums, int k){
		if(low<high){
			int pivotLoc = getPivot(low, high, nums);
			if(pivotLoc ==  nums.length-k)
				return nums[pivotLoc];
			else if(pivotLoc > nums.length-k)
				return quickSort(low,pivotLoc-1, nums, k);
			else
				return quickSort(pivotLoc+1, high, nums, k);
		}
		return -1;
	}
    public int findKthLargest(int[] nums, int k) {
        return quickSort(0,nums.length, nums, k);
    }
}