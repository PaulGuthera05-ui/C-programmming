// Paul Guthera
// CT100/G/30675/26

#include <stdio.h>

int main()
{
    int occupied, vacant, Floor;
    int i, j;
    int occupancy[5][10];

    for(i = 0; i < 5; i++){
    for(j = 0; j < 10; j++){
        occupied = 0;
        vacant = 0;
        Floor = i + 1;
        
        
            printf("Enter occupancy for Floor %d, Room%d  (1 = Occupied, 0 = Vacant)\t ",Floor, j + 1);
            scanf("%d", &occupancy[i][j]);

            if(occupancy[i][j] == 1)
                occupied;
            else
                vacant;
        }}

        printf("Floor %d\n", Floor);
        printf("Occupied rooms: %d\n", occupied);
        printf("Vacant rooms: %d\n", vacant);
    

    return 0;
}
    