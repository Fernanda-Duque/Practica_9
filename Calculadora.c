#include <stdio.h>

float suma(float num1, float num2);
float resta(float num1, float num2);
float mult(float num1, float num2);
float div(float num1, float num2);

void main ()
{
  int elec = 0;
  do 
    {
      print("Elige una operacion: \n");
      printf("1-Suma\n");
      printf("2-Resta\n");
      printf("3-Multiplicacion\n");
      printf("4-Division\n");

      printf("Elige: ");
      scanf("%i", &elec); 
    } while (elec < 1 || elec > 4);
  
  printf("Dame la primera cifra: ");
  scanf("%f", &n1);
  print("dame la segunda cifra: ");
  scanf("%f"; &n2);

  swtch (elec)
  {
    case 1:
      res = suma(n1,n2);
      break;
    case 2:
      res = resta(n1,n2);
      break;
    case 3:
      res = mult(n1,n2);
      break;
    case 4:
      res = div(n1,n2);
      default;
      break;
    }
  printf("el resultado es: %f", res);
}

//Operacion para la suma
float suma(float num1, float num2)
{
  float res;
  res = num1 + num2;
  return res;
}

//Operacion para la resta
float resta(float num1, float num2)
{
  float res;
  res = num1 - num2;
  return res;
}

//Operacion para la multiplicacion
float mult(float num1, float num2)
{
  float res;
  res = num1 * num2;
  return res;
}

//Operacion para la division
float div(float num1, float num2)
{
  float res;
  res = num1 / num2;
  return res;
}














