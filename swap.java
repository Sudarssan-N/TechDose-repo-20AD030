

class Solution {

	public int partition(int low, int high, int[] nums){
		int pivot = nums[high];
		int i=low, j=low;
		while(i<high){
			if(nums[i]<=pivot){
				swap(i,j,nums);
				j++;
			}
			i++;
		}
		return j-1;
	}

	void swap(int i,int j, int[] nums){
		int temp = nums[i];
		nums[i] = nums[j];
		nums[j] = temp;
	}

	int quickSelect(int low, int high, int[] nums, int k){
		if(low<high){
			int pivotLoc = partition(low, high, nums);
			if(pivotLoc== nums.length-k){
				return nums[pivotLoc];
			}
			else if(pivotLoc > nums.length-k){
				return quickSelect(low, pivotLoc-1,nums,k);
			}
			else {
				return quickSelect(pivotLoc-1, high, nums, k);
			}
		}
		return -1;
	}
    public String kthLargestNumber(String[] nums, int k) {
        int[] arr = new int[nums.length];
        for (int i = 0; i < nums.length; i++) {
            arr[i] = Integer.valueOf(nums[i]);
        }
        return Integer.toString(quickSelect(0,nums.length-1, arr,k));
    }
}