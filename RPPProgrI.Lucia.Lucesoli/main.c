#include <stdio.h>
#include <stdlib.h>


float descuentoOtorgado(float precio);
float precio;
int main()
{
    printf("Ingrese el precio del producto: ");
    scanf("%f", &precio);
    descuentoOtorgado(precio);
    return 0;
}

float descuentoOtorgado(float precioConDescuento);
(
    float precioConDescuento = precio*0.95;
    printf("El precio del producto con el descuento realizado es de: 0.2%f", precioConDescuento);
    return 0;
)






int contarCaracteres(char cadena[], char caracter)
{
    int i,contar=0;
    for(i=0;cadena[i];i++)
    {
    	if(cadena[i]==caracter)
    	{
          contar++;
		}
 	}
 	return contar;
}


void ordenarMarca(char cad[]){
    int tam = strlen(cad);

    for(int i=0; i < tam-1; i++)
    {
        for(int j= i+1; j < tam; j++){
            if( cad[i] > cad[j] ){
                aux = cad[i];
                cad[i] = cad[j];
                cad[j] = aux;
            }
        }
    }
}

















