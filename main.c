#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    int inf[29][2];
    float per;

    for(i=0; i<=28; i++)
    {
        printf("#%d get signnum & neednum :", i+1);
        scanf("%d", &inf[i][0]);
        scanf("%d", &inf[i][1]);
        //printf("%d %d\n", inf[sign][0], inf[sign][1]);
    }

    printf("\n\nNumber      sign    |   need    |\n");

    for(i=0; i<=28; i++)
    {
        per =(float) inf[i][1] / inf[i][0] *100;
        //printf("#%d     %d  |   %d  | %.2f\n", i+1, inf[i][0], inf[i][1], per);
        printf("#%d %.2f\n", i+1, per);
    }
    system("pause");
    return 0;
}
