import java.util.*;

public class quickSort{
	public static void main(String[] args){
		int[] arr = {10,7,6,4,3,2,7,8,9};
		int n = arr.length;

		quickSort(arr, 0, n-1);
		System.out.println("Sorted using quickSort");
		printArr(arr, n);

	}
	 
	static int partition (int[] arr, int low, int high){
		int pivot = arr[high];
		int i = low-1;
		for(int j=low;j<high;j++){
			if(arr[j]<pivot){
				i++;
				swap(arr, i,j);
			}	
		}
		swap(arr, i+1, high);
		return (i+1);
	}

	static void swap(int[] arr, int i, int j){
		int temp = arr[j];
		arr[j] = arr[i];
		arr[i] = temp;
	}

	static void quickSort(int [] arr, int low, int high){
		if(low<high){
			int part = partition(arr, low, high);
			quickSort(arr, low, part-1);
			quickSort(arr, part+1, high);
		}
	}

	static void printArr(int[] arr, int size){
		for(int i=0;i<size; i++){
			System.out.println(arr[i]+" ");
		}
		System.out.println();
	}
}