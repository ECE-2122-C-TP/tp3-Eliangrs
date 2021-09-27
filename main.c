#include <stdio.h>

int EXERCICE1 (){
    int a = 0 ; int b = 0;
    printf("saisissez un entier : \n");
    scanf("%d",&a);
    printf("saisissez un entier : \n");
    scanf("%d",&b);
    if (a<b)
    {
        printf("le plus grand nombre est %d: \n", b);
    }
    else if (a>b)
    {
        printf("le plus grand nombre est %d : \n", a);
    }
    else {
        printf("les deux nombres sont egaux\n");
            }


    return 0;
}

int EXERCICE2 (){
    int lar; int lon;
    printf("saisissez la longueur : \n");
    scanf("%d", &lon);
    printf("saisissez la largeur : \n");
    scanf("%d",&lar);
    printf("l'aire du rectangle est : %d \n" , lar*lon);
    printf("le perimetre du rectangle est : %d \n" , ((lar+lon)*2));

    return 0;

}

int EXERCICE3 (){
    int entier;
    printf("saisissez un entier : \n");
    scanf("%d", &entier);
    if (entier %3==0){
        printf("l'entier est un multiple de 3\n");
    }
    else {
        printf("l'entier n'est pas un multiple de 3\n");
    }
    if (entier>=10){
        printf("l'entier est supérieur ou egal a 10\n");
    }
    else {
        printf("l'entier n'est pas superieur ou egal a 10\n ");
    }

        return 0;

    }

int EXERCICE4 () {
    int votreAge;int etudiant;
    printf("etes vous un etudiant ? 1 si oui ou 0 si non \n");
    scanf("%d", &etudiant);
    printf("saisissez votre age :\n");
    scanf("%d", &votreAge);
    if (votreAge<12){
        printf("tarif enfant 4 euros\n");
    }
    else if (votreAge>=12 && votreAge<=17 || etudiant == 1 && votreAge<27 || votreAge>65) {
        printf("tarif jeune 6 euros \n");
    }
    else {
        printf("plein tarif : 9$\n");
    }

    return 0;
}

int EXERCICE5() {
    int numeroDeLaBoissson;
    printf("saisissez le numero de la boisson : \n");
    scanf("%d", &numeroDeLaBoissson);
    if (numeroDeLaBoissson == 3)  {
        printf("vous avez choisi un coca cola\n");
    }
    else if (numeroDeLaBoissson == 1) {
        printf("vous avez choisi un fanta\n");
    }
    else if (numeroDeLaBoissson == 2){
        printf("vous avez choisi un orangina\n");

    }
    else if (numeroDeLaBoissson == 11) {
        printf("vous avez choisi un cafe\n");
    }
    else if (numeroDeLaBoissson == 10) {
        printf("vous avez choisi un the\n");
    }
    else {
        printf("Erreur de saisie\n");
    }

    return 0;

}

int EXERCICE6(){
    float note1; float note2; float note3;
    etape2:
    printf("saisissez la premiere note : \n");
    scanf("%f", &note1);
    printf("saisissez la deuxieme note : \n");
    scanf("%f", &note2);
    printf("saisissez la troisieme note : \n");
    scanf("%f", &note3);

    while ((note1)>20 || (note2)>20 || (note3)>20 || (note1)<0 || (note2)<0 || (note3)<0){
        printf("les notes saisies ne sont pas valides, recommencez. \n");
        goto etape2;
    }
    printf("la moyenne des notes est : %f \n", ((note1 + note2 + note3)/3));


    return 0;

}

int EXERCICE7(){
    int nombreDeClassesOuvertes; int nombresDeleves; int nombresElevesClasses;
    printf("saisissez le nombre de classes ouvertes : \n");
    scanf("%d", &nombreDeClassesOuvertes );
    printf("le nombre de classes ouvertes est : %d \n", nombreDeClassesOuvertes);
    for (int k=0; k<=nombreDeClassesOuvertes; k++ ) {
        printf("saisissez le nombre d eleves : \n", k);
        scanf("%d", &nombresDeleves);
        nombresDeleves = nombresDeleves + nombresElevesClasses;
        printf("le nombre deleves dans l ecole est : %d \n ");
    }
    return 0;

}

int EXERCICE8(){
    int nombreEntier;
    printf("saisissez un nombre entier\n");
    scanf("%d", &nombreEntier);
    if (nombreEntier % 2 !=0 || nombreEntier % 7 !=0) {
        printf("resaisir un entier. \n");
    }
    else {
        printf("l entier est un multiple de 7 et de 2 \n ");

    }

        return 0;
}

int EXERCICE9(){
    int nombreDePierresDispo; int nombreDetagesPos; int etage=0;
    etape1:
    printf("saisissez le nombres de pierres disponibles\n");
    scanf("%d",&nombreDePierresDispo);
    while (nombreDePierresDispo<=0){
        printf("il est impossible de construire un etage\n");
        goto etape1;}
    if (nombreDePierresDispo >=1){
        for(int k=1; k<=nombreDePierresDispo; k++){
            if(etage<=nombreDePierresDispo){
                nombreDetagesPos+=1;
                etage+=nombreDePierresDispo+nombreDetagesPos;}}
            }
            printf("le nombre d etages possibles est : %d \n", nombreDetagesPos-1);

    return 0;
        }






int main(){
    EXERCICE1();
    EXERCICE2();
    EXERCICE3();
    EXERCICE4();
    EXERCICE5();
    EXERCICE6();
    EXERCICE7();
    EXERCICE8();
    EXERCICE9();
}



