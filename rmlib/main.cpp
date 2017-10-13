#include <iostream>
#include "rmlib.cpp"
#include "rmref_h/rmRef_H.cpp"
#include "encryption/encryption.cpp"

using namespace std;

int main()
{

    char num1 = 't';
    void* ptr1 = &num1;

    double num2 = 2.34;
    void* ptr2 = &num2;

    int num3 = 3598;
    void* ptr3 = &num3;

    string gato = serialize(ptr2, sizeof(double));

    rm_init("127.0.0.1", 10529, "", 4464);
    rm_new("dato", ptr1, sizeof(char));
    rm_new("b5", ptr2, sizeof(double));
    rm_new("a5", ptr3, sizeof(int));
    rm_new("ej", ptr2, sizeof(double));

    rm_new("key", ptr1, sizeof(char));
    rm_new("k1", ptr2, sizeof(double));
    rm_new("k3", ptr3, sizeof(int));
    rm_new("k7", ptr2, sizeof(double));

    rmRef_H hola = rm_get("k1");

    rm_delete(&hola);

    //cout <<  "HOLA " <<(*((char*) hola.get_value())) << endl;

    /*rmRef_H prueba = rm_get("a3");

    rmRef_H prueba2 = rm_get("a4");

    rmRef_H prueba3 = rm_get("a5");


    if (hola.get_key() != "-1")
        cout << hola.get_key() << "," << hola.get_svalue() << endl;
    else
        cout << "Me cago en la cona" << endl;

    cout << prueba.get_key() << "," << prueba.get_svalue() <<  endl;

    cout << prueba2.get_key() << "," << prueba2.get_svalue() <<  endl;

    cout << prueba3.get_key() << "," << prueba3.get_svalue() <<  endl;

    cout <<  "HOLA " <<(*((char*) hola.get_value())) << endl;

    cout <<  "PRUEBA1 " <<(*((int*) prueba.get_value())) << endl;

    cout <<  "PRUEBA2 " <<(*((double*) prueba2.get_value())) << endl;

    cout <<  "PRUEBA3 " <<(*((double*) prueba3.get_value())) << endl;

    cout << ( prueba2 == prueba3 )<< endl;

    cout << ( hola != prueba3 )<< endl;
    */
    return 0;
}
