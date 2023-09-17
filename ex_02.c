#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n,m;
    double p,q;
    int sum1, diff1;
    double sum2, diff2;
    scanf("%d %d", &n, &m);
    scanf("%lf %lf", &p, &q);
    sum1 = n + m;
    diff1 = n - m;
    sum2 = p + q;
    diff2 = p - q;
    printf("%d %d\n", sum1, diff1);
    printf("%.1lf %.1lf\n", sum2, diff2);
    return 0;
}
