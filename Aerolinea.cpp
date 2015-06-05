#include "Aerolinea.h"
#include "MenuPrincipal.h"
#include "Archivo.h"
Aerolinea::Aerolinea()
{
    MenuPrincipal* Menu;
    Menu = new MenuPrincipal;
    Archivo archivo;
    archivo.Leer(&vuelos);
    Menu->Show(&vuelos);
}
