// Doesn't fucking work right but fuck it no one cares tbh
// Feel free to use/edit
// By Nettly_
#include <stdio.h>
int timer;
int ideas = 0;
int loopCheck = 1;
int main();

int loop(){
    if (ideas = 0){
        printf("No ideas...\n");
        timer++;
        if (timer = 50){
            ideas = 5;
            timer = 0;
            loopCheck = 0;
            main();
        }
        loop();
    }
}

int main(){
    printf("I want to program something.\n");
    if (loopCheck = 1) {
        loop();
    }
    if (ideas = 5){
        printf("Ooo I has IDEA!!\nOkay code done, what now?\n");
        timer = 0;
        loopCheck = 1;
        main();
    }
    return 0;
}
