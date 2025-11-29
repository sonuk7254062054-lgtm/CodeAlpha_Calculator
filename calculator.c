#include <stdio.h>
#include <math.h>
int main() {
  int a,b,choice;
  float result;
  printf("    SIMPLE CALCULATOR    \n ");
  printf(" enter the 1st number: ");
  scanf("%d", &a);                                         //taking first input from user
  printf(" enter the 2nd number: ");
  scanf("%d", &b);                                         //taking second input from user
  printf("\n enter the option: \n");                      
  printf("\n1. addition");                                 
  printf("\n2. subtraction");
  printf("\n3. multiplication");
  printf("\n4. divide");
  printf("\n5. modulus");
  printf("\n6. power");
  printf("\n enter your choice: ");                         
  scanf("%d", &choice);                                       //taking choice input from user
  switch(choice) {
    case 1:
    result = a + b;
    printf("result = %f\n", result);                          //addition operation
        break;
    case 2:
    result = a - b;
    printf("result = %f\n", result);                           //subtraction operation
    break;
    case 3:
    result = a * b;
    printf("result = %f\n", result);                           //multiplication operation
    break;
    case 4:
    if(b==0){
      printf("Error: Division by zero is not allowed.\n");

    } else {
    result = (float)a / b;
    printf("result = %f\n", result);                            //division operation
    }
    break;
    case 5:
    result = a % b;
    printf("result = %f\n", result);                             //modulus operation
    break;
    case 6:
    result = pow(a,b);
    printf("result = %f\n", result);                             //power operation
    break;
    default:
    printf("Invalid choice! please select between 1 to 6 ");              //default case if user enters invalid choice
  }
  return 0;
}