import java.util.*;

public class countingSort{

	void sort(int[] arr){
		int len = arr.length;
		int count[] = new int[11];
		int finArr[] = new int[len];
		for(int i=0;i<10;++i){
			count[i]= 0;
		}
		for(int i=0;i<len;++i){
			++count[arr[i]];
		}
		for(int i=1;i<=10;++i){
			count[i]+= count[i-1];
		}
		for(int i=len-1;i>=0;i--){
			finArr[count[arr[i]]-1] = arr[i];
			--count[arr[i]];
		}
		for(int i=0;i<len;++i){
			arr[i] = finArr[i];
		}
	}
	public static void main(String[] args) {
		countingSort sort = new countingSort();
		int[] arr = {9,2,2,3,8,6,4,7,5,5};
		// System.out.println("")
		sort.sort(arr);

		System.out.println("Sorted Array");
		for(int i=0;i<arr.length;i++){
			System.out.println(arr[i]+" ");
		}
	}
}