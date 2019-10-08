#include <stdio.h>

int main(){
    int projects = 1;
    int time = 100;
    printf("Projects: %i, Days left: %i\n", projects, time);
    while(projects < 1000){
        time = time - 1;
        projects = projects++ * projects++;
        printf("Projects: %i, Days left: %i\n", projects, time);
    }
}
