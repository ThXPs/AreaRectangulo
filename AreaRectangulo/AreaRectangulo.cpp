#include <iostream>
using namespace std;

float calcularArea(float base, float altura) {
return base * altura; 
}
int main() {
float base, altura; 
cout << "Ingrese la base del rectangulo: "; 
cin >> base; 
cout << "Ingrese la altura del rectangulo: "; 
cin >> altura;

float area = calcularArea(base, altura);

cout << "El area del rectangulo con base " << base << " y altura " << altura << " es: " << area << endl;
return 0;
}