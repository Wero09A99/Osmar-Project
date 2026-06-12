// Programadores: Dylan Monroy, Osmar Morales, Ivann Zuñiga
// Fecha: 08/06/2026
// Proyecto ODS 12: Produccion y Consumo Responsables
// Calculadora Ambiental

#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int opcion;

    // CONTADORES
    int usuarios = 0;
    int usuariosBajo = 0;
    int usuariosMedio = 0;
    int usuariosAlto = 0;

    // ACUMULADORES
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
    char resp;

    // Pantalla 1: Titulo
    system("color 2E");
    system("cls");
    cout << "\n\n";
    cout << "        CALCULADORA AMBIENTAL  -  ODS 12\n";
    cout << "     PRODUCCION Y CONSUMO RESPONSABLES\n\n\n";
    do
    {
        cout << "  Desea continuar? (s/n): ";
        cin >> resp;
        cin.ignore();
        if (resp != 's' && resp != 'n')
        {
            system("color 0C");
            cout << "  Opcion invalida. Ingresa s o n.\n";
            system("color 2E");
        }
    } while (resp != 's' && resp != 'n');
    if (resp == 'n') return 0;

    // Pantalla 2: Problematica
    system("color 4F");
    system("cls");
    cout << "\n  PROBLEMATICA AMBIENTAL EN MEXICO\n";
    cout << "  ==================================\n\n";
    cout << "  Mexico enfrenta una grave crisis de gestion de residuos.\n";
    cout << "  Segun datos del INEGI y SEMARNAT:\n\n";
    cout << "  * Mexico genera mas de 127,000 toneladas de basura\n";
    cout << "    diariamente, de las cuales solo el 10% se recicla.\n\n";
    cout << "  * El 96% de los residuos termina en tiraderos a cielo\n";
    cout << "    abierto o rellenos sanitarios, contaminando suelos,\n";
    cout << "    aguas y afectando la salud de millones de personas.\n\n";
    cout << "  * Los plasticos de un solo uso representan el 40% de\n";
    cout << "    todos los plasticos producidos, y la mayoria se\n";
    cout << "    desecha inmediatamente despues de su uso.\n\n";
    cout << "  * Cada mexicano genera en promedio 1.1 kg de basura\n";
    cout << "    al dia, cifra que ha aumentado 30% en la ultima decada.\n\n";
    cout << "  * El desperdicio de alimentos representa el 50% de los\n";
    cout << "    residuos organicos, mientras que podrian compostarse.\n\n";
    cout << "  OBJETIVO: Concientizar sobre nuestros habitos de consumo\n";
    cout << "  y promover la reduccion, reutilizacion y reciclaje.\n\n";
    do
    {
        cout << "  Desea continuar? (s/n): ";
        cin >> resp;
        cin.ignore();
        if (resp != 's' && resp != 'n')
        {
            system("color 0C");
            cout << "  Opcion invalida. Ingresa s o n.\n";
            system("color 4F");
        }
    } while (resp != 's' && resp != 'n');
    if (resp == 'n') return 0;

    // Pantalla 3: Introduccion
    system("color 1F");
    system("cls");
    cout << "\n  QUE ES ESTA APLICACION?\n\n";
    cout << "  Esta herramienta te permite medir el impacto\n";
    cout << "  ambiental de tus habitos de consumo diario.\n\n";
    cout << "  Ingresaras:\n";
    cout << "   - Tu nombre y edad\n";
    cout << "   - Productos que compraste\n";
    cout << "   - Residuos generados (botellas, bolsas,\n";
    cout << "     envases, latas, plastico, papel,\n";
    cout << "     comida, vidrio)\n\n";
    cout << "  Obtendras:\n";
    cout << "   - Tu indice de impacto ambiental\n";
    cout << "   - Clasificacion: Bajo / Medio / Alto\n";
    cout << "   - Porcentaje de cada tipo de residuo\n";
    cout << "   - Recomendaciones personalizadas\n";
    cout << "   - Una leccion ambiental segun tu perfil\n";
    cout << "   - Estadisticas del grupo al finalizar\n\n";
    do
    {
        cout << "  Desea continuar? (s/n): ";
        cin >> resp;
        cin.ignore();
        if (resp != 's' && resp != 'n')
        {
            system("color 0C");
            cout << "  Opcion invalida. Ingresa s o n.\n";
            system("color 1F");
        }
    } while (resp != 's' && resp != 'n');
    if (resp == 'n') return 0;

    // CICLO PRINCIPAL
    do
    {
        char nombre[50];
        int edad;
        int productos;
        int botellas, bolsas, envases, latas;
        int plastico, papel, comida, vidrio;
        int residuosTotales;
        float indiceImpacto;

        // --- Datos personales ---
        system("color 0B");
        system("cls");
        cout << "\n  DATOS DEL USUARIO\n";
        cout << "  ==================\n\n";

        cout << "  Nombre: ";
        cin >> nombre;

        do
        {
            cout << "  Edad: ";
            cin >> edad;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore();
                edad = -1;
            }
            if (edad < 1 || edad > 120)
            {
                system("color 0C");
                cout << "  Error: ingresa una edad valida (1-120).\n";
                system("color 0B");
            }
        } while (edad < 1 || edad > 120);
        cin.ignore(); // limpiar tras leer edad

        // --- Pantalla de saludo ---
        system("color 0B");
        system("cls");
        cout << "\n  BIENVENIDO/A\n";
        cout << "  ==================\n\n";
        cout << "  Hola, " << nombre << "!\n\n";
        cout << "  Tienes " << edad << " anos.\n\n";
        if (edad < 18)
            cout << "  Como joven, tu participacion es clave\n  para construir un futuro mas sostenible.\n\n";
        else if (edad < 40)
            cout << "  En tu etapa de vida cada decision de consumo\n  cuenta para el planeta.\n\n";
        else
            cout << "  Tu experiencia y habitos son un ejemplo\n  para quienes te rodean.\n\n";
        cout << "  A continuacion ingresa tus datos de consumo.\n";
        do
        {
            cout << "\n  Listo para comenzar? (s/n): ";
            cin >> resp;
            cin.ignore();
            if (resp != 's' && resp != 'n')
            {
                system("color 0C");
                cout << "  Opcion invalida. Ingresa s o n.\n";
                system("color 0B");
            }
        } while (resp != 's' && resp != 'n');
        if (resp == 'n') return 0;

        // --- Datos de consumo ---
        system("color 0B");
        system("cls");
        cout << "\n  DATOS DE CONSUMO - " << nombre << "\n";
        cout << "  ==================\n\n";

        // CORRECCIÓN: validación de cin.fail() en todos los inputs numéricos
        do
        {
            cout << "  Cantidad de productos comprados (minimo 1): ";
            cin >> productos;
            if (cin.fail()) { cin.clear(); cin.ignore(); productos = -1; }
            if (productos < 1)
            {
                system("color 0C");
                cout << "  Error: debe ser al menos 1.\n";
                system("color 0B");
            }
        } while (productos < 1);
        cin.ignore();

        do
        {
            cout << "  Cantidad de botellas PET desechadas: ";
            cin >> botellas;
            if (cin.fail()) { cin.clear(); cin.ignore(); botellas = -1; }
            if (botellas < 0)
            {
                system("color 0C");
                cout << "  Error: no puede ser negativo.\n";
                system("color 0B");
            }
        } while (botellas < 0);
        cin.ignore();

        do
        {
            cout << "  Cantidad de bolsas desechadas: ";
            cin >> bolsas;
            if (cin.fail()) { cin.clear(); cin.ignore(); bolsas = -1; }
            if (bolsas < 0)
            {
                system("color 0C");
                cout << "  Error: no puede ser negativo.\n";
                system("color 0B");
            }
        } while (bolsas < 0);
        cin.ignore();

        do
        {
            cout << "  Cantidad de envases desechados: ";
            cin >> envases;
            if (cin.fail()) { cin.clear(); cin.ignore(); envases = -1; }
            if (envases < 0)
            {
                system("color 0C");
                cout << "  Error: no puede ser negativo.\n";
                system("color 0B");
            }
        } while (envases < 0);
        cin.ignore();

        do
        {
            cout << "  Cantidad de latas desechadas: ";
            cin >> latas;
            if (cin.fail()) { cin.clear(); cin.ignore(); latas = -1; }
            if (latas < 0)
            {
                system("color 0C");
                cout << "  Error: no puede ser negativo.\n";
                system("color 0B");
            }
        } while (latas < 0);
        cin.ignore();

        do
        {
            cout << "  Cantidad de residuos de plastico: ";
            cin >> plastico;
            if (cin.fail()) { cin.clear(); cin.ignore(); plastico = -1; }
            if (plastico < 0)
            {
                system("color 0C");
                cout << "  Error: no puede ser negativo.\n";
                system("color 0B");
            }
        } while (plastico < 0);
        cin.ignore();

        do
        {
            cout << "  Cantidad de residuos de papel: ";
            cin >> papel;
            if (cin.fail()) { cin.clear(); cin.ignore(); papel = -1; }
            if (papel < 0)
            {
                system("color 0C");
                cout << "  Error: no puede ser negativo.\n";
                system("color 0B");
            }
        } while (papel < 0);
        cin.ignore();

        do
        {
            cout << "  Cantidad de residuos de comida: ";
            cin >> comida;
            if (cin.fail()) { cin.clear(); cin.ignore(); comida = -1; }
            if (comida < 0)
            {
                system("color 0C");
                cout << "  Error: no puede ser negativo.\n";
                system("color 0B");
            }
        } while (comida < 0);
        cin.ignore();

        do
        {
            cout << "  Cantidad de residuos de vidrio: ";
            cin >> vidrio;
            if (cin.fail()) { cin.clear(); cin.ignore(); vidrio = -1; }
            if (vidrio < 0)
            {
                system("color 0C");
                cout << "  Error: no puede ser negativo.\n";
                system("color 0B");
            }
        } while (vidrio < 0);
        cin.ignore();

        residuosTotales =
            botellas + bolsas + envases + latas +
            plastico + papel + comida + vidrio;

        if (residuosTotales == 0)
        {
            system("color 0E");
            cout << "\n  Advertencia: no se registraron residuos.\n";
            system("color 0B");
        }

        if (residuosTotales > productos * 3)
        {
            system("color 0E");
            cout << "\n  Advertencia: el total de residuos (" << residuosTotales << ")\n";
            cout << "  es muy alto en relacion a los productos comprados (" << productos << ").\n";
            cout << "  Verifica que los datos sean correctos.\n";
            system("color 0B");
        }

        indiceImpacto = (float)residuosTotales / productos;

        // --- Reporte individual ---
        system("color 70");
        system("cls");
        cout << "\n  REPORTE INDIVIDUAL - " << nombre << " (" << edad << " anos)\n";
        cout << "  ==========================================\n";
        cout << "  Productos comprados : " << productos << "\n";
        cout << "  Residuos generados  : " << residuosTotales << "\n";
        cout << "  Indice de impacto   : " << indiceImpacto << "\n";

        cout << "\n  CLASIFICACION\n";

        if (indiceImpacto <= 1.0)
        {
            system("color 2F");
            cout << "  [BAJO] Impacto Ambiental BAJO\n";
            cout << "  Excelente trabajo, " << nombre << ".\n";
            cout << "  Continua reciclando y reutilizando materiales.\n";
            usuariosBajo++;
        }
        else if (indiceImpacto <= 3.0)
        {
            system("color 60");
            cout << "  [MEDIO] Impacto Ambiental MEDIO\n";
            cout << "  Puedes mejorar, " << nombre << ".\n";
            cout << "  Reduce el uso de plasticos y reutiliza envases.\n";
            usuariosMedio++;
        }
        else
        {
            system("color 4F");
            cout << "  [ALTO] Impacto Ambiental ALTO\n";
            cout << "  " << nombre << ", se recomienda disminuir el consumo excesivo.\n";
            cout << "  Procura reciclar y comprar solo lo necesario.\n";
            usuariosAlto++;
        }

        system("color 70");
        cout << "\n  ANALISIS DE RESIDUOS\n";

        if (plastico > papel && plastico > vidrio && plastico > comida)
            cout << "  El principal residuo generado fue el PLASTICO.\n";
        else if (papel > plastico && papel > vidrio && papel > comida)
            cout << "  El principal residuo generado fue el PAPEL.\n";
        else if (vidrio > plastico && vidrio > papel && vidrio > comida)
            cout << "  El principal residuo generado fue el VIDRIO.\n";
        else
            cout << "  El principal residuo generado fue ORGANICO (comida).\n";

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

            cout << "\n  PORCENTAJE DE RESIDUOS\n";
            if (pBotellas > 0) cout << "  Botellas : " << pBotellas << "%\n";
            if (pBolsas   > 0) cout << "  Bolsas   : " << pBolsas   << "%\n";
            if (pEnvases  > 0) cout << "  Envases  : " << pEnvases  << "%\n";
            if (pLatas    > 0) cout << "  Latas    : " << pLatas    << "%\n";
            if (pPlastico > 0) cout << "  Plastico : " << pPlastico << "%\n";
            if (pPapel    > 0) cout << "  Papel    : " << pPapel    << "%\n";
            if (pComida   > 0) cout << "  Comida   : " << pComida   << "%\n";
            if (pVidrio   > 0) cout << "  Vidrio   : " << pVidrio   << "%\n";

            if (pPlastico >= 40)
            {
                system("color 0C");
                cout << "\n  Advertencia: El plastico representa una gran parte de tus residuos.\n";
                system("color 70");
            }
            if (pPapel >= 40)
            {
                system("color 0E");
                cout << "\n  El papel es el residuo predominante.\n";
                system("color 70");
            }
            if (pComida >= 40)
            {
                system("color 0E");
                cout << "\n  Se recomienda reducir el desperdicio de alimentos.\n";
                system("color 70");
            }
        }

        cout << "\n  Presiona cualquier tecla para continuar a la leccion ambiental...\n";
        getch();

        // --- Leccion personalizada ---
        system("color 1F");
        system("cls");
        cout << "\n  LECCION AMBIENTAL PARA TI, " << nombre << "\n";
        cout << "  ==========================================\n\n";

        if (edad < 18)
        {
            cout << "  Eres joven y tienes el poder de cambiar el futuro.\n";
            cout << "  Los habitos que formes hoy duraran toda tu vida.\n";
            cout << "  Cada botella que reciclas salva energia suficiente\n";
            cout << "  para cargar tu celular por mas de 6 horas.\n\n";
        }
        else if (edad < 40)
        {
            cout << "  En tu etapa de vida tomas decisiones de consumo\n";
            cout << "  que impactan directamente al planeta.\n";
            cout << "  Un adulto promedio puede reducir su huella de carbono\n";
            cout << "  hasta un 25% cambiando habitos de compra.\n\n";
        }
        else
        {
            cout << "  Tu experiencia es valiosa para guiar a otros.\n";
            cout << "  Compartir habitos responsables con tu familia\n";
            cout << "  multiplica el impacto positivo en la comunidad.\n\n";
        }

        if (indiceImpacto <= 1.0)
        {
            system("color 2F");
            cout << "  LOGRO: Consumidor Responsable\n\n";
            system("color 1F");
            cout << "  Tu indice de impacto es excelente.\n";
            cout << "  Esto significa que generas pocos residuos\n";
            cout << "  en relacion a lo que consumes. Sigue asi.\n\n";
            cout << "  SIGUIENTE RETO: Intenta llegar a cero residuos\n";
            cout << "  en una semana llevando tus propias bolsas y\n";
            cout << "  usando envases reutilizables.\n";
        }
        else if (indiceImpacto <= 3.0)
        {
            system("color 60");
            cout << "  NIVEL: Consumidor en Proceso\n\n";
            system("color 1F");
            cout << "  Tienes margen de mejora. Cada residuo que evitas\n";
            cout << "  genera un impacto real en el medio ambiente.\n\n";
            cout << "  SABIAS QUE?\n";
            cout << "  Una bolsa de plastico tarda 400 anos en degradarse.\n";
            cout << "  Una botella PET puede tardar hasta 500 anos.\n\n";
            cout << "  CONSEJO: Lleva una bolsa de tela al mercado y\n";
            cout << "  rechaza los envases de un solo uso cuando puedas.\n";
        }
        else
        {
            system("color 4F");
            cout << "  ALERTA: Consumo de Alto Impacto\n\n";
            system("color 1F");
            cout << "  Tu nivel de residuos es preocupante, pero\n";
            cout << "  la buena noticia es que puedes cambiar hoy mismo.\n\n";
            cout << "  DATOS QUE DEBES SABER:\n";
            cout << "  * Mexico tarda en promedio 15 anos en cerrar\n";
            cout << "    un relleno sanitario. Los estamos llenando\n";
            cout << "    mas rapido de lo que se construyen.\n";
            cout << "  * El 70% de los residuos que generas podrian\n";
            cout << "    reciclarse o compostarse.\n\n";
            cout << "  PLAN DE ACCION:\n";
            cout << "  1. Esta semana: separa tu basura en organica\n";
            cout << "     e inorganica.\n";
            cout << "  2. Este mes: reduce tus compras a lo necesario.\n";
            cout << "  3. Este anio: adopta un producto reutilizable\n";
            cout << "     (botella, bolsa, contenedor).\n";
        }

        do
        {
            cout << "\n\n  Continuar al resumen del grupo? (s/n): ";
            cin >> resp;
            cin.ignore();
            if (resp != 's' && resp != 'n')
            {
                system("color 0C");
                cout << "  Opcion invalida. Ingresa s o n.\n";
                system("color 1F");
            }
        } while (resp != 's' && resp != 'n');
        if (resp == 'n') return 0;

        // --- Acumulados ---
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

        system("color 1F");
        do
        {
            cout << "\n  Desea registrar otro usuario?\n";
            cout << "  1. Si\n";
            cout << "  2. No\n";
            cout << "  Opcion: ";
            cin >> opcion;
            if (cin.fail()) { cin.clear(); cin.ignore(); opcion = -1; }
            if (opcion != 1 && opcion != 2)
            {
                system("color 0C");
                cout << "  Opcion invalida. Ingresa 1 o 2.\n";
                system("color 1F");
            }
        } while (opcion != 1 && opcion != 2);
        cin.ignore();

    } while (opcion == 1);

    // --- Estadisticas generales ---
    int residuosGrupo =
        totalBotellas + totalBolsas + totalEnvases + totalLatas +
        totalPlastico + totalPapel  + totalComida  + totalVidrio;

    system("color 5F");
    system("cls");
    cout << "\n  ESTADISTICAS GENERALES DEL GRUPO\n";
    cout << "  ==================================\n";
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

    cout << "\n  USUARIOS POR NIVEL DE IMPACTO\n";
    cout << "  Impacto Bajo  : " << usuariosBajo  << "\n";
    cout << "  Impacto Medio : " << usuariosMedio << "\n";
    cout << "  Impacto Alto  : " << usuariosAlto  << "\n";

    if (usuarios > 0)
    {
        float promedio = sumaImpactos / usuarios;
        cout << "\n  Promedio del indice de impacto: " << promedio << "\n";
    }

    cout << "\n  CONCLUSIONES\n";

    if (residuosGrupo < 100)
    {
        system("color 2F");
        cout << "  La comunidad presenta un nivel aceptable de generacion de residuos.\n";
    }
    else if (residuosGrupo < 250)
    {
        system("color 60");
        cout << "  La comunidad necesita mejorar sus habitos de consumo y reciclaje.\n";
    }
    else
    {
        system("color 4F");
        cout << "  La comunidad genera una gran cantidad de residuos\n";
        cout << "  y requiere acciones urgentes para reducir su impacto.\n";
    }

    system("color 3E");
    cout << "\n  ODS 12 - PRODUCCION Y CONSUMO RESPONSABLES\n";
    cout << "  Gracias por utilizar la Calculadora Ambiental.\n";
    cout << "\n  Presiona cualquier tecla para salir...\n";
    getch();
    return 0;
}