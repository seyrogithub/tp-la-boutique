#include <stdio.h>

int main() {
    int applePrice = 10 ;
    int sodaPrice = 20;
    int cakePrice = 30 ;
    int selectedPrice ;
    char product ;
    printf("Que souhaitez-vous acheter, si vous voulez acheter une pomme veuillez dire p, si vous voulez acheter un soda veuillez \n dire s et si vous voulez acheter un gateau veuillez dire g\n ");
scanf("%c", &product);
if(product == 112){
   selectedPrice = applePrice;
} else if (product == 's') {
    selectedPrice = sodaPrice;
} else if (product == 'g') {
    selectedPrice = cakePrice;
}

 selectedPrice = selectedPrice*1.2;
    printf("Vous devez payer : %d\n", selectedPrice);


    return 0;
}
