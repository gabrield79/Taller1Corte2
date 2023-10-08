#include <stdio.h>
#include <string.h>
 
 main()
 {
 	char codigoProducto[10],codigoAlmacen[5],codigoAlmacenProducto[15]={};
 	int tamanoCodigoProducto, tamanoCodigoAlmacen;
 	printf("Ingrese el codigo del Producto: ");
 	scanf("%d",&codigoProducto);
 	printf("Ingrese el codigo del Almacen: ");
 	scanf("%d",&codigoAlmacen);
	tamanoCodigoProducto=sizeof(codigoProducto);
	tamanoCodigoAlmacen=sizeof(codigoAlmacen);
	strcat(codigoAlmacenProducto,codigoProducto);
	strcat(codigoAlmacenProducto,codigoAlmacen);
	
	if (tamanoCodigoProducto==10)
	{
		printf("El codigo del producto es correcto\n");
		if(codigoProducto=="8949899430"||codigoProducto=="7653512593"||codigoProducto=="9383867373"||codigoProducto=="88392904209")
		{
			printf("Este producto tiene un descuento del 20%");
		}
		else
		{
			printf("Este producto no tiene descuento");
		}
	}
	
	else
	{
		printf("El codigo del producto es incorrecto\n");
	}
	
	if (tamanoCodigoAlmacen==5 and strstr(codigoAlmacen,"20"))
	{
		printf("El codigo de almacen es correcto");
			if(codigoAlmacenProducto=="894985943020763"||codigoAlmacenProducto=="165331255320221"||codigoAlmacenProducto=="248386737320130"||codigoAlmacenProducto=="183923092220561")
		{
			printf("Usted participa por la rifa de un carro");
		}
            else
		{
			printf("No participa por la rifa del carro");
		}
	}
	else
	{
	    printf("El codigo de almacen es incorrecto");
	}
}
