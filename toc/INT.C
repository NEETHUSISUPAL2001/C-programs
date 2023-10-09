#include <stdio.h>
#include<conio.h>

void readAndStoreIntegers(int nums[], int *count, int limit);

int main() {
    int nums[5]; 
    int count = 0;
int i; 
   clrscr();
    printf("Enter integers (up to 5, press Enter after each, finish with Enter):\n");

    readAndStoreIntegers(nums, &count, 5);

    if (count > 0) {
	printf("Entered numbers:\n");
	for (i = 0; i < count; i++) {
	    printf("%d ", nums[i]);
	}
	printf("\n");
	getch();
    } else {
	printf("No numbers entered.\n");
    }

    return 0;
}

void readAndStoreIntegers(int nums[], int *count, int limit) {
    *count = 0;

    while (*count < limit) {
	int num;
	if (scanf("%d", &num) == 1) {
	    nums[*count] = num;
	    (*count)++;
	} else {
	    if (*count == 0) {
		break;
	    }
	}

    }
}

