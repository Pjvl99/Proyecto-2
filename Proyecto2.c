#include <stdio.h>
int matrices();
int main(void){
char vuelo[5];
int t;
inicio:
printf("Inserte el numero de vuelo: ");
scanf("%s", vuelo);
if(strlen(vuelo) == 5){
printf("Bienvenido al TRv1                  vuelo: %s\n", vuelo);
printf("1. Reservar asiento\n");
printf("2. Ver asiento disponible\n");
printf("3. Ver Resumen\n");
printf("4. Salir\n");
printf("Opcion: ");
scanf("%d", &t);
printf("\n");
if(t == 1){
    
}
else if(t == 2){
matrices();    
}
else if (t == 3){
    
}
else if (t == 4){
return 0;    
}
}
else{
goto inicio;    
}

}

int matrices(){
int matrix[6][6] = {{0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0}, 
{0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0}};
int y = 0;
printf("   |A||B||C||D||E||F|");
for(int x = 0; x<6; x++){
y = 0;
printf("\n");
printf("|%d|", (x+1)); 
for(; y<6; y++){
   
printf("|%d|", matrix[x][y]);

}    
}


}
