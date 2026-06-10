// Programador: El wesaso
// Fecha: 08/06/2026
// Proyecto ODS 12: Produccion y Consumo Responsables
// Calculadora Ambiental

#include <iostream.h>
#include <stdlib.h>
#include <conio.h>


int main()
{
    int opcion;

    // Contadores
    int usuarios     = 0;
    int usuariosBajo = 0;
    int usuariosMedio= 0;
    int usuariosAlto = 0;

    // Acumuladores grupales
    int totalProductos = 0;
    int totalBotellas  = 0;
    int totalBolsas    = 0;
    int totalEnvases   = 0;
    int totalLatas     = 0;
    int totalPlastico  = 0;
    int totalPapel     = 0;
    int totalComida    = 0;
    int totalVidrio    = 0;

    float sumaImpactos = 0;

    // Pantalla 1: Titulo
    clrscr();
    textcolor(YELLOW);
    textbackground(GREEN);
    cout << "\n\n";
    cout << "        CALCULADORA AMBIENTAL  -  ODS 12\n";
    cout << "     PRODUCCION Y CONSUMO RESPONSABLES\n";
    textcolor(LIGHTGRAY);
    textbackground(BLACK);
    cout << "\n\n";
    textcolor(WHITE);
    cout << "           Presiona cualquier tecla...\n";
    textcolor(LIGHTGRAY);
    getch();

    // Pantalla 2: Introduccion
    clrscr();
    textcolor(CYAN);
    cout << "\n  QUE ES ESTA APLICACION?\n\n";
    textcolor(LIGHTGRAY);
    cout << "  Esta herramienta te permite medir el impacto\n";
    cout << "  ambiental de tus habitos de consumo diario.\n\n";
    textcolor(LIGHTGREEN);
    cout << "  Ingresaras:\n";
    textcolor(LIGHTGRAY);
    cout << "   - Productos que compraste\n";
    cout << "   - Residuos generados (botellas, bolsas,\n";
    cout << "     envases, latas, plastico, papel,\n";
    cout << "     comida, vidrio)\n\n";
    textcolor(LIGHTGREEN);
    cout << "  Obtendras:\n";
    textcolor(LIGHTGRAY);
    cout << "   - Tu indice de impacto ambiental\n";
    cout << "   - Clasificacion: Bajo / Medio / Alto\n";
    cout << "   - Porcentaje de cada tipo de residuo\n";
    cout << "   - Recomendaciones personalizadas\n";
    cout << "   - Estadisticas del grupo al finalizar\n\n";
    cout << "           Presiona cualquier tecla...\n";
    getch();

    do
    {
        int productos;
        int botellas, bolsas, envases, latas;
        int plastico, papel, comida, vidrio;
        int residuosTotales;
        float indiceImpacto;

        clrscr();
        textcolor(CYAN);
        cout << "\n  DATOS DEL USUARIO\n";
        textcolor(LIGHTGRAY);

        // Validacion: productos >= 1
        do
        {
            cout << "  Cantidad de productos comprados: ";
            cin >> productos;
            if (productos < 1)
            {
                textcolor(LIGHTRED);
                cout << "  Error: debe ser al menos 1.\n";
                textcolor(LIGHTGRAY);
            }
        } while (productos < 1);

        // Validacion: residuos >= 0
        do
        {
            cout << "  Cantidad de botellas desechadas: ";
            cin >> botellas;
            if (botellas < 0)
            {
                textcolor(LIGHTRED);
                cout << "  Error: no puede ser negativo.\n";
                textcolor(LIGHTGRAY);
            }
        } while (botellas < 0);

        do
        {
            cout << "  Cantidad de bolsas desechadas: ";
            cin >> bolsas;
            if (bolsas < 0)
            {
                textcolor(LIGHTRED);
                cout << "  Error: no puede ser negativo.\n";
                textcolor(LIGHTGRAY);
            }
        } while (bolsas < 0);

        do
        {
            cout << "  Cantidad de envases desechados: ";
            cin >> envases;
            if (envases < 0)
            {
                textcolor(LIGHTRED);
                cout << "  Error: no puede ser negativo.\n";
                textcolor(LIGHTGRAY);
            }
        } while (envases < 0);

        do
        {
            cout << "  Cantidad de latas desechadas: ";
            cin >> latas;
            if (latas < 0)
            {
                textcolor(LIGHTRED);
                cout << "  Error: no puede ser negativo.\n";
                textcolor(LIGHTGRAY);
            }
        } while (latas < 0);

        do
        {
            cout << "  Cantidad de residuos de plastico: ";
            cin >> plastico;
            if (plastico < 0)
            {
                textcolor(LIGHTRED);
                cout << "  Error: no puede ser negativo.\n";
                textcolor(LIGHTGRAY);
            }
        } while (plastico < 0);

        do
        {
            cout << "  Cantidad de residuos de papel: ";
            cin >> papel;
            if (papel < 0)
            {
                textcolor(LIGHTRED);
                cout << "  Error: no puede ser negativo.\n";
                textcolor(LIGHTGRAY);
            }
        } while (papel < 0);

        do
        {
            cout << "  Cantidad de residuos de comida: ";
            cin >> comida;
            if (comida < 0)
            {
                textcolor(LIGHTRED);
                cout << "  Error: no puede ser negativo.\n";
                textcolor(LIGHTGRAY);
            }
        } while (comida < 0);

        do
        {
            cout << "  Cantidad de residuos de vidrio: ";
            cin >> vidrio;
            if (vidrio < 0)
            {
                textcolor(LIGHTRED);
                cout << "  Error: no puede ser negativo.\n";
                textcolor(LIGHTGRAY);
            }
        } while (vidrio < 0);

        residuosTotales =
            botellas + bolsas + envases + latas +
            plastico + papel  + comida  + vidrio;

        if (residuosTotales == 0)
        {
            textcolor(YELLOW);
            cout << "\n  Advertencia: no se registraron residuos.\n";
            textcolor(LIGHTGRAY);
        }

        indiceImpacto = (float)residuosTotales / productos;

        // Reporte individual
        clrscr();
        textcolor(CYAN);
        cout << "\n  REPORTE INDIVIDUAL\n";
        textcolor(LIGHTGRAY);
        cout << "  Productos comprados : " << productos       << "\n";
        cout << "  Residuos generados  : " << residuosTotales << "\n";
        cout << "  Indice de impacto   : " << indiceImpacto   << "\n";

        // Clasificacion
        textcolor(CYAN);
        cout << "\n  CLASIFICACION\n";
        textcolor(LIGHTGRAY);

        if (residuosTotales <= 10)
        {
            textcolor(LIGHTGREEN);
            cout << "  Impacto Ambiental BAJO\n";
            textcolor(LIGHTGRAY);
            usuariosBajo++;
            cout << "  Excelente trabajo.\n";
            cout << "  Continua reciclando y reutilizando materiales.\n";
        }
        else if (residuosTotales <= 25)
        {
            textcolor(YELLOW);
            cout << "  Impacto Ambiental MEDIO\n";
            textcolor(LIGHTGRAY);
            usuariosMedio++;
            cout << "  Puedes mejorar reduciendo el uso de plasticos.\n";
            cout << "  Intenta reutilizar bolsas y envases.\n";
        }
        else
        {
            textcolor(LIGHTRED);
            cout << "  Impacto Ambiental ALTO\n";
            textcolor(LIGHTGRAY);
            usuariosAlto++;
            cout << "  Se recomienda disminuir el consumo excesivo.\n";
            cout << "  Procura reciclar y comprar solo lo necesario.\n";
        }

        // Analisis de residuos
        textcolor(CYAN);
        cout << "\n  ANALISIS DE RESIDUOS\n";
        textcolor(LIGHTGRAY);

        if (plastico > papel &&
            plastico > vidrio &&
            plastico > comida)
            cout << "  El principal residuo generado fue el PLASTICO.\n";
        else if (papel > plastico &&
                 papel > vidrio  &&
                 papel > comida)
            cout << "  El principal residuo generado fue el PAPEL.\n";
        else if (vidrio > plastico &&
                 vidrio > papel  &&
                 vidrio > comida)
            cout << "  El principal residuo generado fue el VIDRIO.\n";
        else
            cout << "  El principal residuo generado fue ORGANICO.\n";

        if (residuosTotales > 0)
        {
            float pBotellas = (botellas * 100.0) / residuosTotales;
            float pBolsas   = (bolsas   * 100.0) / residuosTotales;
            float pEnvases  = (envases  * 100.0) / residuosTotales;
            float pLatas    = (latas    * 100.0) / residuosTotales;
            float pPlastico = (plastico * 100.0) / residuosTotales;
            float pPapel    = (papel    * 100.0) / residuosTotales;
            float pComida   = (comida   * 100.0) / residuosTotales;
            float pVidrio   = (vidrio   * 100.0) / residuosTotales;

            textcolor(CYAN);
            cout << "\n  PORCENTAJE DE RESIDUOS\n";
            textcolor(LIGHTGRAY);
            cout << "  Botellas : " << pBotellas << "%\n";
            cout << "  Bolsas   : " << pBolsas   << "%\n";
            cout << "  Envases  : " << pEnvases  << "%\n";
            cout << "  Latas    : " << pLatas    << "%\n";
            cout << "  Plastico : " << pPlastico << "%\n";
            cout << "  Papel    : " << pPapel    << "%\n";
            cout << "  Comida   : " << pComida   << "%\n";
            cout << "  Vidrio   : " << pVidrio   << "%\n";

            if (pPlastico >= 40)
            {
                textcolor(YELLOW);
                cout << "\n  Advertencia: El plastico representa una gran parte de tus residuos.\n";
                textcolor(LIGHTGRAY);
            }
            if (pPapel >= 40)
            {
                textcolor(YELLOW);
                cout << "\n  El papel es el residuo predominante.\n";
                textcolor(LIGHTGRAY);
            }
            if (pComida >= 40)
            {
                textcolor(YELLOW);
                cout << "\n  Se recomienda reducir el desperdicio de alimentos.\n";
                textcolor(LIGHTGRAY);
            }
        }

        // Acumuladores
        usuarios++;
        totalProductos += productos;
        totalBotellas  += botellas;
        totalBolsas    += bolsas;
        totalEnvases   += envases;
        totalLatas     += latas;
        totalPlastico  += plastico;
        totalPapel     += papel;
        totalComida    += comida;
        totalVidrio    += vidrio;
        sumaImpactos   += indiceImpacto;

        // Continuar o salir
        do
        {
            cout << "\n  Desea registrar otro usuario?\n";
            cout << "  1. Si\n";
            cout << "  2. No\n";
            cout << "  Opcion: ";
            cin >> opcion;
            if (opcion != 1 && opcion != 2)
            {
                textcolor(LIGHTRED);
                cout << "  Opcion invalida. Ingresa 1 o 2.\n";
                textcolor(LIGHTGRAY);
            }
        } while (opcion != 1 && opcion != 2);

    } while (opcion == 1);

    // Estadisticas generales
    int residuosGrupo =
        totalBotellas + totalBolsas  + totalEnvases + totalLatas +
        totalPlastico + totalPapel   + totalComida  + totalVidrio;

    clrscr();
    textcolor(YELLOW);
    textbackground(GREEN);
    cout << "\n  ESTADISTICAS GENERALES DEL GRUPO\n";
    textcolor(LIGHTGRAY);
    textbackground(BLACK);
    cout << "  Usuarios registrados : " << usuarios       << "\n";
    cout << "  Productos comprados  : " << totalProductos << "\n";
    cout << "  Botellas  : " << totalBotellas << "\n";
    cout << "  Bolsas    : " << totalBolsas   << "\n";
    cout << "  Envases   : " << totalEnvases  << "\n";
    cout << "  Latas     : " << totalLatas    << "\n";
    cout << "  Plastico  : " << totalPlastico << "\n";
    cout << "  Papel     : " << totalPapel    << "\n";
    cout << "  Comida    : " << totalComida   << "\n";
    cout << "  Vidrio    : " << totalVidrio   << "\n";
    cout << "  Total de residuos    : " << residuosGrupo  << "\n";

    textcolor(CYAN);
    cout << "\n  USUARIOS POR NIVEL DE IMPACTO\n";
    textcolor(LIGHTGREEN);
    cout << "  Impacto Bajo  : " << usuariosBajo  << "\n";
    textcolor(YELLOW);
    cout << "  Impacto Medio : " << usuariosMedio << "\n";
    textcolor(LIGHTRED);
    cout << "  Impacto Alto  : " << usuariosAlto  << "\n";
    textcolor(LIGHTGRAY);

    if (usuarios > 0)
        cout << "\n  Promedio del indice de impacto: "
             << sumaImpactos / usuarios << "\n";

    textcolor(CYAN);
    cout << "\n  CONCLUSIONES\n";
    textcolor(LIGHTGRAY);

    if (residuosGrupo < 100)
        cout << "  La comunidad presenta un nivel aceptable de generacion de residuos.\n";
    else if (residuosGrupo < 250)
        cout << "  La comunidad necesita mejorar sus habitos de consumo y reciclaje.\n";
    else
    {
        textcolor(LIGHTRED);
        cout << "  La comunidad genera una gran cantidad de residuos\n";
        cout << "  y requiere acciones urgentes para reducir su impacto.\n";
        textcolor(LIGHTGRAY);
    }

    textcolor(YELLOW);
    textbackground(GREEN);
    cout << "\n  ODS 12 - PRODUCCION Y CONSUMO RESPONSABLES\n";
    cout << "  Gracias por utilizar la Calculadora Ambiental.\n";
    textcolor(LIGHTGRAY);
    textbackground(BLACK);

    getch();
    return 0;
}