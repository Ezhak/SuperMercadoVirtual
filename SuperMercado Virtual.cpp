/*
    SuperMercado Virtual.
*/

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <Windows.h>
#include "SuperMercado Virtual.h"

using namespace std;

int main()
{
    int articleNumber, articleAmount, typeofPayment;
    int stopShopping = -1;
    int totalAmount = 0;
    int shoppingAmount = 0;
    int parcialArticleAmount = 0;
    int noCreditCard = 0;
    int creditCard = 0;
    int deliveryService = 0;
    int deliveryAmount = 0;


    PlaySound(TEXT("boot.wav"), NULL, SND_ALIAS);
    cout << "Bienvenido a su SuperMercado Virtual, sea usted libre de elegir los productos que desea llevar" << endl;
    cout << "Por favor, recuerde que por razones de conocimiento publico, no es posible que se acerque" << endl;
    cout << "a adquirir los productos de forma presencial, por lo que usted tendra la opcion de delivery" << endl;
    cout << "en caso contrario, tendra una autorizacion a venir a retirarlo" << endl;
    cout << "------------------------------------------------------------------------" << endl;
    cout << "Escoja los productos, asi luego indique la cantidad de unidades que desea llevar" << endl;
    cout << "1. Aceite Girasol \t\t $60.00" << "\t\t 6. Dulce de leche \t\t $25.00" << endl;
    cout << "2. Paquete de Papas Fritas \t $120.00" << "\t 7.Paquete de Arroz \t\t $43.00" << endl;
    cout << "3. Detergente \t\t\t $68.00" << "\t\t 8.Paquete de Cafe Molido \t $54.00" << endl;
    cout << "4. Jugo de Naranja \t\t $35.00" << "\t\t 9.Rollo de Servilletas \t $80.00" << endl;
    cout << "5. Gaseosa Cola \t\t $43.00" << "\t\t 10.Pack de 6 Cervezas \t\t $110.00" << endl;
    cout << "------------------------------------------------------------------------" << endl;
    while (stopShopping != 11) {
        cout << "Ingrese un numero de articulo del menu" << endl;
        PlaySound(TEXT("buttonselect.wav"), NULL, SND_ALIAS);
        cin >> articleNumber;
        cout << "Cuantas unidades de ese producto desea llevar?" << endl;
        PlaySound(TEXT("buttonselect.wav"), NULL, SND_ALIAS);
        cin >> articleAmount;



        switch (articleNumber) {
        case 1:
            parcialArticleAmount = articleAmount * 60;
            totalAmount += parcialArticleAmount;
            PlaySound(TEXT("buttonselect.wav"), NULL, SND_ALIAS);
            cout << "Su monto parcial a pagar es de:$" << parcialArticleAmount << endl;
            cout << "Su monto acumulado hasta el momento es de:$" << totalAmount << endl;
            cout << "------------------------------------------------------------------------" << endl;
            cout << "Digite '11' para finalizar la compra, si no, ingrese '0' para continuar comprando" << endl;
            cin >> stopShopping;
            break;

        case 2:
            parcialArticleAmount = articleAmount * 120;
            totalAmount += parcialArticleAmount;
            PlaySound(TEXT("buttonselect.wav"), NULL, SND_ALIAS);
            cout << "Su monto parcial a pagar es de:$" << parcialArticleAmount << endl;
            cout << "Su monto acumulado hasta el momento es de:$" << totalAmount << endl;
            cout << "------------------------------------------------------------------------" << endl;
            cout << "Digite '11' para finalizar la compra, si no, ingrese '0' para continuar comprando" << endl;
            cin >> stopShopping;
            break;
        case 3:
            parcialArticleAmount = articleAmount * 68;
            totalAmount += parcialArticleAmount;
            PlaySound(TEXT("buttonselect.wav"), NULL, SND_ALIAS);
            cout << "Su monto parcial a pagar es de:$" << parcialArticleAmount << endl;
            cout << "Su monto acumulado hasta el momento es de:$" << totalAmount << endl;
            cout << "------------------------------------------------------------------------" << endl;
            cout << "Digite '11' para finalizar la compra, si no, ingrese '0' para continuar comprando" << endl;
            cin >> stopShopping;
            break;
        case 4:
            parcialArticleAmount = articleAmount * 35;
            totalAmount += parcialArticleAmount;
            PlaySound(TEXT("buttonselect.wav"), NULL, SND_ALIAS);
            cout << "Su monto parcial a pagar es de:$" << parcialArticleAmount << endl;
            cout << "Su monto acumulado hasta el momento es de:$" << totalAmount << endl;
            cout << "------------------------------------------------------------------------" << endl;
            cout << "Digite '11' para finalizar la compra, si no, ingrese '0' para continuar comprando" << endl;
            cin >> stopShopping;
            break;
        case 5:
            parcialArticleAmount = articleAmount * 43;
            totalAmount += parcialArticleAmount;
            PlaySound(TEXT("buttonselect.wav"), NULL, SND_ALIAS);
            cout << "Su monto parcial a pagar es de:$" << parcialArticleAmount << endl;
            cout << "Su monto acumulado hasta el momento es de:$" << totalAmount << endl;
            cout << "------------------------------------------------------------------------" << endl;
            cout << "Digite '11' para finalizar la compra, si no, ingrese '0' para continuar comprando" << endl;
            cin >> stopShopping;
            break;
        case 6:
            parcialArticleAmount = articleAmount * 25;
            totalAmount += parcialArticleAmount;
            PlaySound(TEXT("buttonselect.wav"), NULL, SND_ALIAS);
            cout << "Su monto parcial a pagar es de:$" << parcialArticleAmount << endl;
            cout << "Su monto acumulado hasta el momento es de:$" << totalAmount << endl;
            cout << "------------------------------------------------------------------------" << endl;
            cout << "Digite '11' para finalizar la compra, si no, ingrese '0' para continuar comprando" << endl;
            cin >> stopShopping;
            break;
        case 7:
            parcialArticleAmount = articleAmount * 43;
            totalAmount += parcialArticleAmount;
            PlaySound(TEXT("buttonselect.wav"), NULL, SND_ALIAS);
            cout << "Su monto parcial a pagar es de:$" << parcialArticleAmount << endl;
            cout << "Su monto acumulado hasta el momento es de:$" << totalAmount << endl;
            cout << "------------------------------------------------------------------------" << endl;
            cout << "Digite '11' para finalizar la compra, si no, ingrese '0' para continuar comprando" << endl;
            cin >> stopShopping;
            break;
        case 8:
            parcialArticleAmount = articleAmount * 54;
            totalAmount += parcialArticleAmount;
            PlaySound(TEXT("buttonselect.wav"), NULL, SND_ALIAS);
            cout << "Su monto parcial a pagar es de:$" << parcialArticleAmount << endl;
            cout << "Su monto acumulado hasta el momento es de:$" << totalAmount << endl;
            cout << "------------------------------------------------------------------------" << endl;
            cout << "Digite '11' para finalizar la compra, si no, ingrese '0' para continuar comprando" << endl;
            cin >> stopShopping;
            break;
        case 9:
            parcialArticleAmount = articleAmount * 80;
            totalAmount += parcialArticleAmount;
            PlaySound(TEXT("buttonselect.wav"), NULL, SND_ALIAS);
            cout << "Su monto parcial a pagar es de:$" << parcialArticleAmount << endl;
            cout << "Su monto acumulado hasta el momento es de:$" << totalAmount << endl;
            cout << "------------------------------------------------------------------------" << endl;
            cout << "Digite '11' para finalizar la compra, si no, ingrese '0' para continuar comprando" << endl;
            cin >> stopShopping;
            break;
        case 10:
            parcialArticleAmount = articleAmount * 110;
            totalAmount += parcialArticleAmount;
            PlaySound(TEXT("buttonselect.wav"), NULL, SND_ALIAS);
            cout << "Su monto parcial a pagar es de:$" << parcialArticleAmount << endl;
            cout << "Su monto acumulado hasta el momento es de:$" << totalAmount << endl;
            cout << "------------------------------------------------------------------------"<< endl;
            cout << "Digite '11' para finalizar la compra, si no, ingrese '0' para continuar comprando" << endl;
            cin >> stopShopping;
            break;

        default:
            PlaySound(TEXT("invalid.wav"), NULL, SND_ALIAS);
         cout << "Codigo invalido de producto, ingrese un codigo valido porfavor" << endl;
        }
    }
    cout << "------------------------------------------------------------------------" << endl;
    PlaySound(TEXT("processingstuff.wav"), NULL, SND_SYNC);
    cout << "Perfecto, el monto total de su compra es de:$" << totalAmount << endl << endl;
    cout << "Desea abonar en efectivo o con Tarjeta de Credito?" << endl;
    cout << "------------------------------------------------------------------------" << endl;
    cout << "Ingrese '0' si usted desea abonar en efectivo, con un recargo del 5%" << endl;
    cout << "Ingrese '1' si usted desea abonar con tarjeta de credito, con un descuento de 10%" << endl;
    cin >> typeofPayment;

    while(typeofPayment > 1) {
        cout << "------------------------------------------------------------------------" << endl;
        PlaySound(TEXT("invalid.wav"), NULL, SND_ALIAS);
        cout << "Codigo de metodo de pago invalido, ingrese un '0' si usted desea abonar en efectivo" << endl;
        cout << "caso contrario, ingrese '1' si usted desea abonar con tarjeta de credito" << endl;
        cin >> typeofPayment;
    }

    if (typeofPayment == 0) {
        noCreditCard = totalAmount + ((totalAmount * 5) / 100);
        cout << "------------------------------------------------------------------------" << endl;
        PlaySound(TEXT("buttonselect.wav"), NULL, SND_ALIAS);
        cout << "Perfecto, usted abonara en efectivo, adicionando un 5% de recargo sobre su compra" << endl;
        cout << "Su saldo anterior era de:$" << totalAmount << endl;
        cout << "Su nuevo saldo con el recargo de %5 es de:$" << noCreditCard << endl;
        shoppingAmount = noCreditCard;
    }
    else {
        if (typeofPayment == 1)
            creditCard = totalAmount - ((totalAmount * 10) / 100);
        cout << "------------------------------------------------------------------------" << endl;
        PlaySound(TEXT("buttonselect.wav"), NULL, SND_ALIAS);
        cout << "Perfecto, usted abonara con tarjeta de credito, teniendo un descuento del 10% sobre su compra" << endl;
        cout << "Su saldo anterior era de:$" << totalAmount << endl;
        cout << "Su nuevo saldo con el descuento de %10 es de:$" << creditCard << endl;
        shoppingAmount = creditCard;
    }


    cout << "------------------------------------------------------------------------" << endl;
    PlaySound(TEXT("buttonselect.wav"), NULL, SND_ALIAS);
    cout << "El servicio de delivery para llevar sus compras esta disponible" << endl;
    cout << "Este servicio cuesta con un recargo de $95" << endl;
    cout << "Desea usted que llevemos su compra a su domicilio? Digite '0' para confirmar" << endl;
    cout << "En caso contrario, digite '1' debera retirarlo en una hora aproximdamente en el domicilio: H. Yrigoyen 99" << endl;
    cin >> deliveryService;

    while (deliveryService > 1) {
        cout << "------------------------------------------------------------------------" << endl;
        cout << "Se ingreso una opcion invalida, ingrese un '0' si usted utilizar el servicio de delivery" << endl;
        cout << "caso contrario, ingrese '1' si usted desea retirar su compra en el supermercado" << endl;
        cin >> deliveryService;
    }
    if (deliveryService == 0) {
        deliveryAmount = shoppingAmount+100;
        PlaySound(TEXT("buttonselect.wav"), NULL, SND_ALIAS);
        cout << "------------------------------------------------------------------------" << endl;
        cout << "Usted ha aceptado el servicio de delivery" << endl;
        cout << "Su saldo actual con el recargo de $95 es de:$" << deliveryAmount << endl;
        cout << "------------------------------------------------------------------------" << endl;
   }
    else {
        if (deliveryService == 1)
            PlaySound(TEXT("buttonselect.wav"), NULL, SND_ALIAS);
        cout << "------------------------------------------------------------------------" << endl;
        cout << "Usted eligio no utilizar el servicio de delivery, debera retirar su compra en una hora aproximdamente en el domicilio: H. Yrigoyen 99" << endl;
        cout << "Su monto a pagar en total para su compra es del total de:$" << shoppingAmount << endl;
        cout << "------------------------------------------------------------------------" << endl;
    }
    PlaySound(TEXT("processingstuff.wav"), NULL, SND_SYNC);
    cout << "------------------------------------------------------------------------" << endl;
    PlaySound(TEXT("buttonselect.wav"), NULL, SND_ALIAS);
    cout << "Muchisimas gracias por utilizar nuestro servicio digital de compra, que tenga un buen dia" << endl;
    cout << "------------------------------------------------------------------------" << endl << endl << endl;

    system("pause");
    return 0;
}
