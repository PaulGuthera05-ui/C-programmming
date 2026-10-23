// 3D array

#include <stdio.h>

int main (){
    int i,j,k;
    int totalOccupied = 0;

    int chain[3][5][10];

    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            for(k=0;k<10;k++){
                printf("Enter occupancy for Branch %d, Floor %d, Room %d (1 = Occupied, 0 = Vacant)", i+1, j+1, k+1);
                scanf("%d", &chain[i][j][k]);

                if(chain[i][j][k] == 1){
                    totalOccupied++;
                }
            }
        }
    }

    printf("\nTotal occupied rooms across all branches: %d\n", totalOccupied);

    return 0;
}