#include<stdio.h>
#include<conio.h>

void selectionSort(int a[10], int n) {
	int i, j;
	int temp;
	int smallest;
	for(i=0; i<n-1; i++) {
		smallest = i;
		for(j=i+1; j<n; j++) {
			if(a[j] < a[smallest]) {
				smallest = j;
			}
		}
		if(smallest != i) {
			temp = a[smallest];
			a[smallest] = a[i];
			a[i] =temp;
		}
	}

	printf("Sorted array...");
	for(i=0; i<n; i++) {
		printf("%d ", a[i]);
	}
}

void main() {
	int n;
	int i;
	int a[10];
	clrscr();

	printf("Enter no of elements: ");
	scanf("%d", &n);

	for(i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}

	selectionSort(a, n);

	getch();
}