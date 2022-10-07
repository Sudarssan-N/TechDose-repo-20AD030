Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

 

Example 1:

Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].

Example 2:

Input: intervals = [[1,4],[4,5]]
Output: [[1,5]]

class Solution {
    public int[][] merge(int[][] intervals) {
        if(intervals.length <=1)
            return intervals;
        
        Arrays.sort(intervals, (arr1, arr2)-> Integer.compare(arr1[0], arr2[0]));
        
        List<int[]> output_arr = new ArrayList();
        int[] current_interval = intervals[0];
        output_arr.add(current_interval);
        
        for(int[] interval: intervals){
           int current_begin = current_interval[0];
            int current_end = current_interval[1];
            int next_begin= interval[0];
            int next_end = interval[1];
            if(current_end >= next_begin){
                current_interval[1] = Math.max(current_end, next_end);
            }
            else {
                current_interval= interval;
                output_arr.add(current_interval);
            }
        }

        return output_arr.toArray(new int[output_arr.size()][]);
    }
}