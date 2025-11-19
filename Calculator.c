#include <stdio.h>

int main()
  {
  int a,b;
  int Operand;

  printf("welcome to Sam's calculator!\nPlease choose the operation you would like to perform!\n");
  printf("1.Addition\n2.Subtraction\n3.Division\n4.Multiplicaton\n5.Modulus\n");
  scanf("%d", &Operand);
    if(Operand > 5)
    printf("Error!Please select within the range given!\n");
     else
     printf("Enter 2 interger numbers(separated by space)\n");
     scanf("%d %d",&a,&b);

  switch(Operand)
  { case 1:printf("%d + %d=%d\n", a, b, a+b);
   break;

   case 2:printf("%d - %d=%d\n",a,b,a-b);
    break;

    case 3:if(b != 0 )
    printf("%d / %d=%.2f\n",a,b, (double)a/b);
     else
     printf("Math error\n");
     break;

     case 4:printf("%d * %d=%d\n",a,b,a*b);
      break;

      case 5:if(b != 0 )
     printf("%d %% %d=%d\n", a, b,a % b);
       else
       printf("Error:Modulus by zero is not allowed\n");
       break;

      default:printf("Please select within the options given!\n");
       break;

  }
  return 0;
  }
