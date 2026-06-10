// Programador: El wesaso
// Fecha: 08/06/2026
// Proyecto ODS 12: Produccion y Consumo Responsables
// Calculadora Ambiental

#include <iostream>
#include <stdlib.h>

#ifdef __BORLANDC__
#include <conio.h>
#endif

using namespace std;

int main()
{
    int opcion;

    // Contadores
    int usuarios = 0;
    int usuariosBajo = 0;
    int usuariosMedio = 0;
    int usuariosAlto = 0;

    // Acumuladores grupales
    int totalProductos = 0;
    int totalBotellas = 0;
    int totalBolsas = 0;
    int totalEnvases = 0;
    int totalLatas = 0;
    int totalPlastico = 0;
    int totalPapel = 0;
    int totalComida = 0;
    int totalVidrio = 0;

    float sumaImpactos = 0;
    cout << "CALCULADORA AMBIENTAL - ODS 12\n";
    cout << "PRODUCCION Y CONSUMO RESPONSABLES\n";

    do
    {
        int productos;
        int botellas, bolsas, envases, latas;
        int plastico, papel, comida, vidrio;
        int residuosTotales;
        float indiceImpacto;

        cout << "\nDATOS DEL USUARIO\n";

        // Validacion: productos >= 1
        do
        {
            cout << "Cantidad de productos comprados: ";
            cin >> productos;
            if (productos < 1)
                cout << "Error: debe ser al menos 1.\n";
        } while (productos < 1);

        // Validacion: residuos >= 0
        do
        {
            cout << "Cantidad de botellas desechadas: ";
            cin >> botellas;
            if (botellas < 0)
                cout << "Error: no puede ser negativo.\n";
        } while (botellas < 0);

        do
        {
            cout << "Cantidad de bolsas desechadas: ";
            cin >> bolsas;
            if (bolsas < 0)
                cout << "Error: no puede ser negativo.\n";
        } while (bolsas < 0);

        do
        {
            cout << "Cantidad de envases desechados: ";
            cin >> envases;
            if (envases < 0)
                cout << "Error: no puede ser negativo.\n";
        } while (envases < 0);

        do
        {
            cout << "Cantidad de latas desechadas: ";
            cin >> latas;
            if (latas < 0)
                cout << "Error: no puede ser negativo.\n";
        } while (latas < 0);

        do
        {
            cout << "Cantidad de residuos de plastico: ";
            cin >> plastico;
            if (plastico < 0)
                cout << "Error: no puede ser negativo.\n";
        } while (plastico < 0);

        do
        {
            cout << "Cantidad de residuos de papel: ";
            cin >> papel;
            if (papel < 0)
                cout << "Error: no puede ser negativo.\n";
        } while (papel < 0);

        do
        {
            cout << "Cantidad de residuos de comida: ";
            cin >> comida;
            if (comida < 0)
                cout << "Error: no puede ser negativo.\n";
        } while (comida < 0);

        do
        {
            cout << "Cantidad de residuos de vidrio: ";
            cin >> vidrio;
            if (vidrio < 0)
                cout << "Error: no puede ser negativo.\n";
        } while (vidrio < 0);

        residuosTotales =
            botellas + bolsas + envases + latas +
            plastico + papel + comida + vidrio;

        if (residuosTotales == 0)
        {
            cout << "\nAdvertencia: no se registraron residuos.\n";
        }

        indiceImpacto = (float)residuosTotales / productos;

        cout << "\nREPORTE INDIVIDUAL\n";
        cout << "Productos comprados: " << productos << endl;
        cout << "Residuos generados: " << residuosTotales << endl;
        cout << "Indice de impacto: " << indiceImpacto << endl;

        cout << "\nCLASIFICACION\n";

        if (residuosTotales <= 10)
        {
            cout << "Impacto Ambiental BAJO\n";
            usuariosBajo++;
            cout << "Excelente trabajo.\n";
            cout << "Continua reciclando y reutilizando materiales.\n";
        }
        else if (residuosTotales <= 25)
        {
            cout << "Impacto Ambiental MEDIO\n";
            usuariosMedio++;
            cout << "Puedes mejorar reduciendo el uso de plasticos.\n";
            cout << "Intenta reutilizar bolsas y envases.\n";
        }
        else
        {
            cout << "Impacto Ambiental ALTO\n";
            usuariosAlto++;
            cout << "Se recomienda disminuir el consumo excesivo.\n";
            cout << "Procura reciclar y comprar solo lo necesario.\n";
        }

        cout << "\nANALISIS DE RESIDUOS\n";

        if (plastico > papel &&
            plastico > vidrio &&
            plastico > comida)
        {
            cout << "El principal residuo generado fue el PLASTICO.\n";
        }
        else if (papel > plastico &&
                 papel > vidrio &&
                 papel > comida)
        {
            cout << "El principal residuo generado fue el PAPEL.\n";
        }
        else if (vidrio > plastico &&
                 vidrio > papel &&
                 vidrio > comida)
        {
            cout << "El principal residuo generado fue el VIDRIO.\n";
        }
        else
        {
            cout << "El principal residuo generado fue ORGANICO.\n";
        }

        if (residuosTotales > 0)
        {
            float pBotellas = (botellas * 100.0) / residuosTotales;
            float pBolsas = (bolsas * 100.0) / residuosTotales;
            float pEnvases = (envases * 100.0) / residuosTotales;
            float pLatas = (latas * 100.0) / residuosTotales;
            float pPlastico = (plastico * 100.0) / residuosTotales;
            float pPapel = (papel * 100.0) / residuosTotales;
            float pComida = (comida * 100.0) / residuosTotales;
            float pVidrio = (vidrio * 100.0) / residuosTotales;

            cout << "\nPORCENTAJE DE RESIDUOS\n";
            cout << "Botellas: " << pBotellas << "%\n";
            cout << "Bolsas: " << pBolsas << "%\n";
            cout << "Envases: " << pEnvases << "%\n";
            cout << "Latas: " << pLatas << "%\n";
            cout << "Plastico: " << pPlastico << "%\n";
            cout << "Papel: " << pPapel << "%\n";
            cout << "Comida: " << pComida << "%\n";
            cout << "Vidrio: " << pVidrio << "%\n";

            if (pPlastico >= 40)
                cout << "\nAdvertencia: El plastico representa una gran parte de tus residuos.\n";
            if (pPapel >= 40)
                cout << "\nEl papel es el residuo predominante.\n";
            if (pComida >= 40)
                cout << "\nSe recomienda reducir el desperdicio de alimentos.\n";
        }

        usuarios++;
        totalProductos += productos;
        totalBotellas += botellas;
        totalBolsas += bolsas;
        totalEnvases += envases;
        totalLatas += latas;
        totalPlastico += plastico;
        totalPapel += papel;
        totalComida += comida;
        totalVidrio += vidrio;
        sumaImpactos += indiceImpacto;

        // Validacion: opcion solo acepta 1 o 2
        do
        {
            cout << "\nDesea registrar otro usuario?\n";
            cout << "1. Si\n";
            cout << "2. No\n";
            cout << "Opcion: ";
            cin >> opcion;
            if (opcion != 1 && opcion != 2)
                cout << "Opcion invalida. Ingresa 1 o 2.\n";
        } while (opcion != 1 && opcion != 2);

        system("cls");

    } while (opcion == 1);

    int residuosGrupo =
        totalBotellas + totalBolsas + totalEnvases + totalLatas +
        totalPlastico + totalPapel + totalComida + totalVidrio;

    cout << "\nESTADISTICAS GENERALES DEL GRUPO\n";
    cout << "Usuarios registrados: " << usuarios << endl;
    cout << "\nProductos comprados: " << totalProductos << endl;
    cout << "Botellas: " << totalBotellas << endl;
    cout << "Bolsas: " << totalBolsas << endl;
    cout << "Envases: " << totalEnvases << endl;
    cout << "Latas: " << totalLatas << endl;
    cout << "Plastico: " << totalPlastico << endl;
    cout << "Papel: " << totalPapel << endl;
    cout << "Comida: " << totalComida << endl;
    cout << "Vidrio: " << totalVidrio << endl;
    cout << "\nTotal de residuos generados: " << residuosGrupo << endl;

    cout << "\nUSUARIOS POR NIVEL DE IMPACTO\n";
    cout << "Impacto Bajo: " << usuariosBajo << endl;
    cout << "Impacto Medio: " << usuariosMedio << endl;
    cout << "Impacto Alto: " << usuariosAlto << endl;

    if (usuarios > 0)
        cout << "\nPromedio del indice de impacto: "
             << sumaImpactos / usuarios << endl;

    cout << "\nCONCLUSIONES\n";

    if (residuosGrupo < 100)
        cout << "La comunidad presenta un nivel aceptable de generacion de residuos.\n";
    else if (residuosGrupo < 250)
        cout << "La comunidad necesita mejorar sus habitos de consumo y reciclaje.\n";
    else
        cout << "La comunidad genera una gran cantidad de residuos y requiere acciones urgentes para reducir su impacto.\n";

    cout << "\nODS 12 - PRODUCCION Y CONSUMO RESPONSABLES\n";
    cout << "Gracias por utilizar la Calculadora Ambiental.\n";

    return 0;
}