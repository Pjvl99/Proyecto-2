#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int matrices(int g[6][6]);
int resumen(int dsble[1], int rvado[1]);
int aeroplane(char *s[6][6], int pap[6][6], int d[1], int o[1]);
double calc(double hm, double hf);
int main(void){
      int matrix[6][6] = {{0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0}, 
{0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0}};
char* matriz[6][6] = {{"A1", "A2", "A3", "A4", "A5", "A6"}, {"B1", "B2", "B3", "B4", "B5", "B6"},{"C1", "C2", "C3", "C4", "C5", "C6"},
{"D1", "D2", "D3", "D4", "D5", "D6"},{"E1", "E2", "E3", "E4", "E5", "E6"},{"F1", "F2", "F3", "F4", "F5", "F6"}};
int v = 0;
int r = 0;
int a = 0;
char vuelo[5];
int t;
int i[1];
int c[1];
i[0] = 36;
c[0] = 0;
inicio:
printf("Inserte el numero de vuelo: ");
scanf("%s", vuelo);
if(strlen(vuelo) == 5){
avion:  
clearscreen();
printf("Bienvenido al TRv1                  vuelo: %s\n", vuelo);
printf("1. Reservar asiento\n");
printf("2. Ver asiento disponible\n");
printf("3. Ver Resumen\n");
printf("4. Salir\n");
printf("Opcion: ");
scanf("%d", &t);
printf("\n");
if(t == 1){
    clearscreen();
aeroplane(matriz, matrix, i, c);
goto avion;
}
else if(t == 2){
    clearscreen();
matrices(matrix);
goto avion;
}
else if (t == 3){
    clearscreen();
    resumen(i, c);
    goto avion;
}
else if (t == 4){
    
return 0;    
}
}
else{
goto inicio;    
}
}
int matrices(int g[6][6]){
int w;
int y = 0;
int x = 0;
printf("   |1||2||3||4||5||6|");
for(; x<6; x++){
y = 0;
printf("\n");
printf("|%c|", (x+65)); 
for(; y<6; y++){
printf("|%d|", g[x][y]);
}    
}
printf("\n");
printf("Presione '2' para volver al menu principal: ");
scanf("%d", &w);
if(w == 2){
return;    
}
}
int aeroplane(char *s[6][6], int pap[6][6], int d[1], int o[1]){
char ayuda[100];
int a = 0;
int v = 0;

int numero;
boletos:
printf("Inserte asiento a reservar: ");
scanf("%s", ayuda);
clearscreen();
if(strcmp(ayuda, "menu") == 0){
return;    
}
else{
for(; a<6; a++){
    v = 0;
for(; v<6; v++){
if(strcmp(s[a][v], ayuda) == 0){
if(pap[a][v] == 1){
	printf("Asiento '%s' ya esta reservado\n\n", s[a][v]);
a = 0;
v = 0;
for(; a<6; a++){
    v = 0;
for(; v<6; v++){
if(pap[a][v] == 0) {   
printf("Sugerido: '%s'\n", s[a][v]);
goto boletos;
}   
}
}
printf("Todo lleno");
return;
}
else{ 
pap[a][v] = 1;
d[0] -=1;
o[0] +=1;
clearscreen();
printf("Asiento: '%s' reservado\n", s[a][v]);
printf("Presione '2' para continuar: ");
scanf("%d", &numero);
if(numero == 2){
printf("\n\n");
return o, d;
}
}     
}
}
   
    
}
v = 0;
a = 0;
goto boletos;
}
}
int resumen(int dsble[1], int rvado[1]){
int nb;
int total;
total = dsble[0]+rvado[0];
printf("### RESUMEN\n");
printf("Reservados: %d/%d %lf%\n", rvado[0], total, calc(rvado[0], dsble[0]));
printf("Libres: %d/%d %lf%\n", dsble[0], total, calc(dsble[0], rvado[0]));
printf("Presione '2' para continuar: ");
scanf("%d", &nb);
if(nb == 2){
return;    
}
}

double calc(double hm, double hf){
int todo;
float prcntj;
todo = hm+hf;
prcntj = hm/todo;    
prcntj = prcntj*100;
return prcntj;
}
void clearscreen()
{
    system("@cls||clear");
}