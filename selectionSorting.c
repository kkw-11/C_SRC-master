#include <stdio.h>

int main(void)
{

	int nums[] = {50, 30, 10, 100, 90, 60, 40, 70, 80, 20};
	
	// sorting
	for (int i = 0 ; i < 10 -1; ++i) {
		for (int j = i + 1; j < 10; ++j){
			if (nums[i] > nums[j]){
				int tmp = nums[i];
				nums[i] = nums[j];
				nums[j] = tmp;
			}	
		}
	}

	
	
	for (int i = 0; i< 10; ++i)
		printf("%d ", nums[i]);
	printf("\n");
	
	
	return 0;
}
