#include <iostream>
#include <cmath>
using namespace std;
// https://www.tutorialspoint.com/cplusplus/cpp_strings.htm


//https://es.wikibooks.org/wiki/Programaci%C3%B3n_en_C%2B%2B/Herencia

int glob;

#define PI 3.14159


int factorial(int a);
void dont_modify( double a);
void modify1( double *a);
void modify2( double &a);
void sine_func( double x[], double f[], int N);


// DECLARACIONES
//

// Definición de una clase base para vehiculos
class VehiculoRodante
{
public:
 // CICLO DE VIDA
 /* En este lugar se sitúan los constructores, los destructores, y/o los constructores copia */

 // OPERADORES
 /* Aquí van los métodos que se apliquen sobre operadores */

 // OPERACIONES
 /* Aquí van los métodos de esta clase que no sean ni de acceso ni de petición o tratamiento */

 /*
 * Función 'set_ruedas'
 * Asigna al dato miembro 'mRuedas' el valor 'num'
 */
 void set_ruedas(int num)
 {
  this->mRuedas = num;
 }

 /*
 * Función 'get_ruedas'
 * Devuelve el valor que hay dentro del dato miembro 'mRuedas'
 */
 int get_ruedas(void)
 {
  return this->mRuedas;
 }

 /*
 * Función 'set_pasajeros'
 * Asigna al dato miembro 'mPasajeros' el valor 'num'
 */
 void set_pasajeros(int num)
 {
  this->mPasajeros = num;
 }

 /*
 * Función 'get_pasajeros'
 * Devuelve el valor que hay dentro del dato miembro 'mPasajeros'
 */
 int get_pasajeros(void)
 {
  return this->mPasajeros;
 }

private:
 /* Generalmente en 'private' se sitúan los datos miembros */
 int mRuedas;
 int mPasajeros;
};

// Definición de una clase 'Camion' derivada de la clase base 'VehiculoRodante'.
class Camion : public VehiculoRodante
{

public:
 /*
 * Función 'set_carga'
 * Asigna al dato miembro 'mCarga' el valor 'size'
 */
 void set_carga(int size)
 {
  this->mCarga = size;
 }

 /*
 * Función 'get_carga'
 * Devuelve el valor que hay dentro del dato miembro 'mCarga'
 */
 int get_carga(void)
 {
  return this->mCarga;
 }


 /*
 * Función 'Mostrar'
 * Muestra por pantalla las ruedas, pasajeros y la capacidad de carga del objeto 'Camion'
 */
 void Mostrar(void);

 // PETICIONES/TRATAMIENTOS
 /* Aquí van las funciones del tipo "Is", que generalmente devuelven true/false */

private:
 /* Generalmente en 'private' se sitúan los datos miembros */
 int mCarga;
};

void Camion::Mostrar(void)
{
 std::cout << "ruedas: " << this->get_ruedas() << std::endl;
 std::cout << "pasajeros: " << this->get_pasajeros() << std::endl;
 std::cout << "Capacidad de carga en pies cúbicos: " << this->get_carga() << std::endl;
}

// main() is where program execution begins.
int main() {
    glob=1.0;
    
    int a=2;
    int b=1;
    int i,j,k;
    double c=a*b*0.3;
    
    cout << "Hello World" << endl; // prints Hello World with an enter
    
    cout << glob << endl;
    cout << PI << endl;
    cout << c << endl;
    
    //loops in c++
    for(i=0;i<10;i++){
        cout << i <<"!="<< factorial(i) << endl;
    }
    
    // how NOT to  modify variables
    cout << "a before " << a << endl;
    dont_modify(a);
    cout << "a after " << a << endl;

    
    // how to  modify variables
    c=1.0;
    double d=2.0;
    cout << "c before " << c << endl;
    modify1(&c);
    cout << "c after " << c << endl;
    
    cout << "d before " << d << endl;
    modify2(d);
    cout << "d after " << d << endl;
    
    int N=1000;
    double x[N];
    double f[N];
    
    for(int i=0; i< N; i++){
        x[i]=(i+1)*2*PI/N;
        
    }
    cout << "2pi=" << x[N-1] << endl;
    sine_func(x, f,  N);
    cout << "sin(2pi)=" << f[N-1] << endl;

    
    
    /// Para usar las clase definidas
    Camion Camion1;
  Camion Camion2;
    
    Camion1.set_ruedas(18);
  Camion1.set_pasajeros(2);
  Camion1.set_carga(3200);

  Camion2.set_ruedas(6);
  Camion2.set_pasajeros(3);
  Camion2.set_carga(1200);

  Camion1.Mostrar();
  std::cout << std::endl;
  Camion2.Mostrar();
  std::cout << std::endl;
    
    
    return 0;
}



int factorial(int a){
    
    int res=1;
    if(a!=0){
        for(int i=1;i<a+1;i++){
            res*=i;
            
        }
    }
    return res;
}

void dont_modify( double a){
    a=a*2;
}
void modify1( double *a){
    *a = *a*2;

}
void modify2( double &a){
    a = a*2;
    
}

void sine_func( double x[],double f[], int N){

    for(int i=0; i<N; i++){
        f[i]=sin(x[i]);
    
    }
}
