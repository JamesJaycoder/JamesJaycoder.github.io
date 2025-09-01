// introduce myself nya solve pud ta, btw i sumpay ra nako ang solving
#include<stdio.h>

int main() 
{
	
	char name[50];
    int age;
    char address[50];
    char hobby[50];
    float height;
    int a1, b2, sum, product;
    
 printf("Ahmm hello po, Maayong adlaw sa tanan ako diay ni si James Jay kanang future programmer diay HAHAHA, btw g send nako ni sa imo kay ganahan nako ipa try akoang binuhat nga code, simple rani siya pero dugay pud ni nako nahuman kay lagi bag o pako aning trabahoa HAHAHA. Btw paki click nalang po sa Enter sa cp ninyo or pc para mag sugod nata.\n ");
    getchar();
    
    printf("Enter your name:  ");
    gets(name);
    
    printf("Enter your age (numbers only): ");
    scanf("%d", &age);
    getchar();
    
    printf("Enter your address: ");
    gets(address);
    
    printf("Enter your hobby:  ");
    gets(hobby);
    
    printf("Enter your height(cm) [do not use ( ' ) and put a numbers only  to avoid bugs]:  ");
    scanf("%f", &height);
    
    
printf("\n\nOkay let's proceed to our main topic, which is to find a sum of two value and multiply the sum into the first value.NUMBERS ONLY!!!\n\n");
    
    printf("Enter value:  ");
    scanf("%d", &a1);
    printf("Enter value:  ");
    scanf("%d", &b2);
    
    sum = a1 + b2;
    printf("\n%d + %d = %d", a1, b2, sum);
    
    product = sum * a1;
    printf("\n%d * %d = %d\t", sum, a1, product);
 
    printf("\nPress enter to pass your answer.\n");
  getchar();
  getchar();
  

 printf("\nAnd thats all mao rana tanan salamat sa pag try sakoang code HAHA");
    

    return 0; }