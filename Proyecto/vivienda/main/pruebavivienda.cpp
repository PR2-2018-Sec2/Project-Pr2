/**
 *  @name: Grupo vivienda
 *  @brief: Creacion de clase tipo vivienda
 * 
 * */
#include<vivienda.h>

int main(){
    ///Prueba constructor por defecto y geters
    Vivienda nueva;
    std::cout<<"Numero vivienda "<<nueva.get_numero_vivienda() <<" \n";
    std::cout<<"Tipo "<<nueva.get_tipo_vivienda()<<" \n";
    std::cout<<"Tamaño "<<nueva.get_tamanio()<<" \n";
    std::cout<<"Nro habitacion "<<nueva.get_nro_habitacion()<<" \n";
    std::cout<<"Nro baños "<<nueva.get_nro_banios()<<" \n";
    std::cout<<"Nro max de personas "<<nueva.get_nro_max_personas()<<" \n";
    std::cout<<"Nro estacionamiento "<<nueva.get_nro_estacionamiento()<<" \n";
    std::cout<<"Estado "<<nueva.get_estado()<<" \n";
    std::cout<<"Valoracion "<<nueva.get_valoracion()<<" \n";
    
    ///prueba constructor por parametros

    Vivienda otra(23, "apartamento", 100.5, 3,1,3,1,"ocupada", 12345);

    std::cout<<"\n\n\nNumero vivienda "<<otra.get_numero_vivienda() <<" \n";
    std::cout<<"Tipo "<<otra.get_tipo_vivienda()<<" \n";
    std::cout<<"Tamaño "<<otra.get_tamanio()<<" \n";
    std::cout<<"Nro habitacion "<<otra.get_nro_habitacion()<<" \n";
    std::cout<<"Nro baños "<<otra.get_nro_banios()<<" \n";
    std::cout<<"Nro max de personas "<<otra.get_nro_max_personas()<<" \n";
    std::cout<<"Nro estacionamiento "<<otra.get_nro_estacionamiento()<<" \n";
    std::cout<<"Estado "<<otra.get_estado()<<" \n";
    std::cout<<"Valoracion "<<otra.get_valoracion()<<" \n";

    Vivienda cambiar;
    cambiar.set_numero_vivienda(4);
    cambiar.set_tipo_vivienda("Habitacion");
    cambiar.set_tamanio(100.3);
    cambiar.set_nro_habitacion(1);
    cambiar.set_nro_banios(1);
    cambiar.set_nro_max_personas(1);
    cambiar.set_nro_estacionamiento(1);
    cambiar.set_estado("Ocupada");
    cambiar.set_valoracion(9995);

    std::cout<<"\n\n\nNumero vivienda "<<cambiar.get_numero_vivienda() <<" \n";
    std::cout<<"Tipo "<<cambiar.get_tipo_vivienda()<<" \n";
    std::cout<<"Tamaño "<<cambiar.get_tamanio()<<" \n";
    std::cout<<"Nro habitacion "<<cambiar.get_nro_habitacion()<<" \n";
    std::cout<<"Nro baños "<<cambiar.get_nro_banios()<<" \n";
    std::cout<<"Nro max de personas "<<cambiar.get_nro_max_personas()<<" \n";
    std::cout<<"Nro estacionamiento "<<cambiar.get_nro_estacionamiento()<<" \n";
    std::cout<<"Estado "<<cambiar.get_estado()<<" \n";
    std::cout<<"Valoracion "<<cambiar.get_valoracion()<<" \n";


    return 0;
}