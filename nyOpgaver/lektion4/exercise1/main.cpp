#include "die.h"
int main() {

    Die terning;

    for (int count = 0; count<100001; count++) {
        terning.roll();

        if (count % 1000 == 0) {
            terning.log_dice_rolls();
        }
    }
 

}