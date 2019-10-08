#include <stdio.h>

int main(){
    int day = 0;
    int stress = 0;
    int axe = stress++;
    while (day < 100){
        stress += stress++ * axe * 7;
        int axe = stress++;
        day++;
        printf("Day: %i || Stress Level: %i%%\n", day, stress);
    }
    return 0;
}
