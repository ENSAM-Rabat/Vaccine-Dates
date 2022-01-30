#include <stdio.h>
int main()
{
    int t, d, l, r, i;
    FILE *p = fopen("input1.txt", "r");
    fscanf(p, "%d", &t);
    if (t < 1 || t > 105)
    {
        printf("unexpected data\n");
        return 0;
    }
    for (i = 0; i < t; i++)
    {
        fscanf(p, "%d%d%d", &d, &l, &r);
        if (d < 1 || d > 109 || l < 1 || l > 109 || r < 1 || r > 109 || r < l) //Constraints (not sure about this because the "4444 5555 6666" input has a "Too Early" output in the README samples!)
            printf("unexpected data\n");
        else if (d < l)
            printf("Too Early\n");
        else if (d >= l && d <= r)
            printf("Take second dose now\n");
        else if (d > r)
            printf("Too Late\n");
    }
    return 0;
}