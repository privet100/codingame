#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    // the position of the light of power
    int light_x;
    int light_y;
    // Thor's starting position
    int initial_tx;
    int initial_ty;
    scanf("%d%d%d%d", &light_x, &light_y, &initial_tx, &initial_ty);

    while (1) {
        // The remaining amount of turns Thor can move. Do not remove this line.
        int remaining_turns;
        scanf("%d", &remaining_turns);

        if      (initial_tx < light_x && initial_ty > light_y)
        {
            printf("NE\n");
            initial_tx++;
            initial_ty--;
        }
        else if (initial_tx < light_x && initial_ty < light_y)
        {
            printf("SE\n");
            initial_tx++;
            initial_ty++;
        }
        else if (initial_tx > light_x && initial_ty < light_y)
        {
            printf("SW\n");
            initial_tx--;
            initial_ty++;
        }
        else if (initial_tx > light_x && initial_ty > light_y)
        {
            printf("NW\n");
            initial_tx--;
            initial_ty--;
        }
        else if (initial_ty > light_y)
            printf("N\n");
        else if (initial_tx < light_x)
            printf("E\n");
        else if (initial_ty < light_y)
            printf("S\n");
        else if (initial_tx > light_x)
            printf("W\n");
    }

    return 0;
}
