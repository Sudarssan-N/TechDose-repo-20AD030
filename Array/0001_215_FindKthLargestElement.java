class Solution {
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

	int swap(int i, int j, int[] nums){
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