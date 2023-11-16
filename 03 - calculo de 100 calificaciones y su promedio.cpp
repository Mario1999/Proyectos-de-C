// By: @Mario1999 on GitHub
/* Este programa pide 100 notas, luego calcula de forma automatica:
-el promedio de las primeras 50 notas
-el promedio de las 50 notas restantes
al finalizar suma los 2 resultados y calcula el promedio de ellos   */
#include <iostream>
using namespace std;

int main() {
  float calificaciones[100]; 
  float prom1 = 0, prom2 = 0, total;
  // pide las 100 calificaciones de 1 en 1
  cout << "Ingresa las 100 calificaciones: \n================================" << endl;
  for(int i=0; i<100; i++) {
    cout <<  "Calificacion #" <<i+1 << ": " ;
	cin >> calificaciones[i];
  }
// calcula el promedio de las notas 1 a la 50
  for(int i=0; i<50; i++) {
    prom1 += calificaciones[i]; 
  }
  prom1 /= 50;
// calcula el promedio de la nota 51 a la 100
  for(int i=50; i<100; i++) {
    prom2 += calificaciones[i];
  } 
  prom2 /= 50;
//calcula el promedio de los 2 resultados obtenidos
  total = prom1 + prom2;
  total /= 2;

  // Imprime los resultados
  cout << "\n=======================================\nPromedio de las primeras 50 calificaciones: " << prom1 << endl;
  cout << "Promedio de las segundas 50 calificaciones: " << prom2 << endl;
  cout << "Promedio de los promedios: " << total << endl;
  
  return 0;
}
