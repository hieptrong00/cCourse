#include <stdio.h>

main() {
    int *a;
//    int a[10][10];
    int n,m;
    int i,j;
/*    printf("Cho biet so hang: ");
    scanf("%d", &n);
    printf("Cho biet so cot: ");
    scanf("%d", &m);
*/

    for(i=1; i<4; i++) {
        for (j = 1; j < 4; j++) {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", a + i + j);
//            scanf("%d", *a[i][j]);
        }
    }
    printf("Mang vua nhap la: \n");
        for(i=1; i<=n; i++)
            for(j=1; j<=m; j++) {
                printf("%5d", *(a+i+j));
//                printf("%5d", a[i][j]);
                printf("\n");
            }

}