#include <stdio.h>

int main(){
	
	int arr[] = {3, 1, 2, 6, 4, 5, 7, 8};
	int n = sizeof(arr) / sizeof(arr[0]); 
	
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(arr[i] > arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				}
			}
	printf("%d", arr[i]);
	}
	
	return 0;
}



