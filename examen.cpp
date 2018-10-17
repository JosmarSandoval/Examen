#include <stdio.h>
#include <conio.h>
#define p printf
#define s scanf
#define V 120.0
#define R 240.0
#define sueldo 40000

int opc,a,b,c,suma, z[6][6];
float I,calif,prom,aum,Ns;
int w,y;
main()
{
	p("1) El 3er numero es igual a la suma del 1er y 2do numero \n" );
	p("2) Intensidad de Corriente \n ");
	p("3) Calificaciones \n");
	p("4) Partido de Baloncesto \n");
	p("5) Calcular Sueldo \n");
	
	p("Selecciona del menu anterior una opcion a realizar: ");
	s("%d",&opc);
	
		switch(opc)
			{
				case 1:
					p("Usted eligio 3er=1er+2do \n");
					p("Ingresa el 1er numero: ");
					s("%d",&a);
					p("Ingresa el 2do numero: ");
					s("%d",&b);
					p("Ingresa el 3er numero: ");
					s("%d",&c);
						suma=a+b;
						if(suma==c)
						{
							p("%d + %d = %d \t",a,b,suma);
							p("%d es igual a la suma de %d + %d",c,a,b);
						}
						else
						{
						 p("%d + %d = %d \t",a,b,suma);	
						 p("%d es diferente a la suma de %d + %d",c,a,b);
						}
						break;
					case 2:
						p("Usted eligio calcular la Intensidad de Corriente \n");
						p("Cierta bombilla tiene una resistencia de 240 ohm cuando se enciende\n");
						p("¿cuanta corriente fluira atravez de la bombilla cuando se conecta \n");
						p("a 120 V que es el volaje de operacion normal?  \n");
						I=V/R;
						
						p("La intensidad de corriente es: %.2f A",I);
						break;
					case 3:
						p("Usted eligio evaluar un examen \n");
						p("Ingresa la calificacion del examen: ");
						s("%f",&calif);
							if(calif<4.99)
							{
								p("como su calificacion es %.2f: No aprueba",calif);
							}
							else
							if(calif<6.99)
							{
							 	p("como su calificacion es %.2f: Aprueba",calif);
							}
							else
							if(calif<8.99)
							{
							 	p("como su calificacion es %.2f: Se nota su esfuerzo",calif);
							}
							else
							if(calif<9.99)
							{
							 	p("como su calificacion es %.2f: Es sobresaliente",calif);
							}
							else
							if(calif=10)
							{
							 	p("como su calificacion es %.2f: Es excelente",calif);
							}
							else
							{
								p("Error");
							}
							break;
					 case 4:
					  	p("Usted eligio calcular el promedio de puntos de 5 jugadores en 4 juegos \n");
						  for(w=1;w<=4;w++)
						  {
						  p("Para el partido %d \n",w);
						  	for(y=1;y<=5;y++)
							  {
							  	p("Ingresa los puntos del jugador %d: ",y);
							  	s("%d",&z[w][y]);
							  	
							  }	
						  }
						 for(y=1;y<=5;y++)
						 {
						 	for(w=1;w<=4;w++)
						 	{
						 		suma=(suma + (z[w][y])); 
						 		
						 	}
						 	prom=suma/4;
						 	p("El promedio del jugador %d fue: %.2f \n", y, prom);
						 	suma=0;
						 }
						break;
					 case 5:
					 	p("Usted eligio calcular el sueldo de un empleado \n");
						p("¿cuantos anios lleva trabajando?");
						s("%d",&a);
						if(a<3)
						{
						p("como tiene menos de 3 años, se le aumenta el 3% \n");
						aum=sueldo*.03;
						Ns=sueldo+aum;
						p("Su nuevo sueldo es: %.2f",Ns);	
						}
						else 
						if(a<5)
						{
						p("como tiene menos de 5 años y mas de 3, se le aumenta el 5% \n");
						aum=sueldo*.05;
						Ns=sueldo+aum;
						p("Su nuevo sueldo es: %.2f",Ns);	
						}	 
						else 
						if(a<10)
						{
						p("como tiene menos de 10 años y mas de 5, se le aumenta el 7% \n");
						aum=sueldo*.07;
						Ns=sueldo+aum;
						p("Su nuevo sueldo es: %.2f",Ns);	
						}
						else 
						if(a>10)
						{
						p("como tiene mas de 10 años, se le aumenta el 10% \n");
						aum=sueldo*.10;
						Ns=sueldo+aum;
						p("Su nuevo sueldo es: %.2f",Ns);	
						}
						break;
							  		  	 			
					
					}				
		
	getch();
}
