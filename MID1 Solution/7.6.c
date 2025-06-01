#include<stdio.h>
int main()
{
    int a[200],b[200],c[500];
    int i,m,n,mn,ax,bx,cx;
    ax = bx = cx = 0;

printf("Enter no. of elements in arrays: ");
scanf("%d %d", &n, &m);

printf("Enter elements of first array: ");
for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
}

printf("Enter elements of second array: ");
for (i = 0; i < m; i++) {
    scanf("%d", &b[i]);
}

mn = m + n;

while (ax < n && bx < m) {
    if (a[ax] < b[bx]) {
        c[cx] = a[ax];
        ax++;
    } else {
        c[cx] = b[bx];
        bx++;
    }
    cx++;
   }

if (ax == n) {
    while (bx < m) {
        c[cx] = b[bx];
        bx++;
        cx++;
    }
} else {
    while (ax < n) {
        c[cx] = a[ax];
        ax++;
        cx++;
    }
}

printf("The sorted array is: ");
for (i = 0; i < mn; i++) {
    printf("%d ", c[i]);
}
printf("\n");


}
