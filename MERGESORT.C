#include<stdio.h>
#include<conio.h>
#include<time.h>

int a[15], c[15];

void merge(int low, int mid, int high) {
	int i, j, k;
	i = low;
	j = mid+1;
	k = low;

	while(i <= mid && j <= high) {
		if(a[i] < a[j]) {
			c[k] = a[i];
			k++;
			i++;
		} else {
			c[k] = a[j];
			j++;
			k++;
		}
	}

	while(i <= mid) {
		c[k] = a[i];
		k++;
		i++;
	}

	while(j <= high) {
		c[k] = a[j];
		j++;
		k++;
	}

	for(i=0; i<= k-1; i++)
		a[i] = c[i];
}

void mergesort(int low, int high) {
	if(low < high) {
		int mid;
		mid = (low+high)/2;
		mergesort(low, mid);
		mergesort(mid+1, high);
		merge(low, mid, high);
	}
}

void main() {
	int n, i;
	clock_t start, end, time;
	clrscr();
	start = clock();

	printf("Enter no of elements: ");
	scanf("%d", &n);

	printf("Enter elements: ");
	for(i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}

	printf("\nArray before sorting...\n");
	for(i=0; i<n; i++) {
		printf("%d", a[i]);
	}

	mergesort(0, n-1);

	printf("\nArray after sorting...\n");
	for(i=0; i<n; i++) {
		printf("%d", a[i]);
	}

	end = clock();

	printf("Time taken: %d", ((end-start)/CLK_TCK));
	getch();
}