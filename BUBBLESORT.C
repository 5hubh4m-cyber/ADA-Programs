#include<stdio.h>
#include<conio.h>

void bubbleSort(int a[10], int n) {
	int i, j;
	int temp;
	for(i=0; i<n-1; i++) {
		for(j=0; j<n-i-1; j++) {
			if(a[j] > a[j+1]) {
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}

	printf("Sorted array...\n");
	for(i=0; i<n; i++) {
		printf("%d ", a[i]);
	}
}


void main() {
	int n;
	int i;
	int a[10];
	clrscr();

	printf("Enter no of elements in array: ");
	scanf("%d", &n);

	for(i=0; i<n; i++)
		scanf("%d", &a[i]);

	bubbleSort(a, n);

	getch();
}