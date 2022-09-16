import java.util.*;

public class radixSort{

	static int getMax(int[] arr, int len){
		int max = arr[0];
		for(int i=1;i<len;i++){
			if(max<arr[i]){
				max = arr[i];
			}
		}
		return max;
	}

	static void sort(int[] arr, int len,int exp){
		
		int count[] = new int[11];
		int finArr[] = new int[len];
		Arrays.fill(count, 0);
		for(int i=0;i<len;++i){
			++count[(arr[i]/exp)%10];
		}
		for(int i=1;i<10;++i){
			count[i]+= count[i-1];
		}
		for(int i=len-1;i>=0;i--){
			finArr[count[(arr[i]/exp)%10]-1] = arr[i];
			--count[(arr[i]/exp)%10];
		}
		for(int i=0;i<len;++i){
			arr[i] = finArr[i];
		}
	}

	static void radixSort(int[] arr, int n){
		int m = getMax(arr, n);
		for(int i=1;m/i>0;i*=10){
			sort(arr,n,i);
		}
	}
	public static void main(String[] args) {
		int[] arr = {500,300,21,4,324,456,657,54,98, 568};
		int len = arr.length;
		// System.out.println("")
		radixSort(arr, len);

		System.out.println("Sorted Array");
		for(int i=0;i<len;i++){
			System.out.println(arr[i]+" ");
		}
	}
}