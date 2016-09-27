#include <stdio.h>

int main()
{
float Weight;
float Height;
float BMI;
char choice;


void bereken(){
    choice = "Y";
    printf( "vul uw gewicht in(KG): " );
    scanf( "%f", &Weight );
    printf( "Vul uw hoogte in(M): " );
    scanf( "%f", &Height );

    BMI = Weight/(Height*Height);
    printf("Dit is jouw BMI %.f",  BMI);


        if(BMI < 18.5){
            printf("\nU heeft ondergewicht");
        } else if(BMI > 18.5 && BMI < 24.9){
            printf("\nU heeft een normaal gewicht");
        }else if(BMI > 25 && BMI < 29.9){
            printf("\nU heeft overgewicht");
        } else if (BMI > 30 && BMI < 39.9){
            printf("\nU heeft heel erg veel overgewicht");
        } else if (BMI > 40){
            printf("\nU breng en bezoek aan de dokter en vraag of je nog lang te leven heb.");
        }
 }

 bereken();

 while(1 == 1){
        scanf("%c", &choice);
        printf("\n Wilt u opnieuw uw BMI berekenen? (Y/N): ");
        scanf("%c", &choice);
        switch(choice){
            case 'Y':
            case 'y':
            case 'yes':
            case 'Yes':
            case 'YES':
                bereken();
            break;
            case 'N':
            case 'n':
            case 'no':
            case 'No':
            case 'NO':
                return 0;
            break;
            default:
                printf("Error 404; Try Again\n");
        }


 }
}
