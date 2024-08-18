#include<stdio.h>
#include<conio.h>
void main()
{
float qty,amt=0;
int op;
start:

abc:
puts("*********************************************************************");
puts("\t\t\t HOTEL SAI BALAJI");
puts("\t\t\t AMEERPET");
puts("*********************************************************************");

puts("\t\t 1. Tea - 10/-");
puts("\t\t 2. Coffee/Milk/Boost/Horlicks/LemonTea/Water Bottle - 20/-");
puts("\t\t 3. Plain dosa / Idly / poha / upma /bonda - 30/-");
puts("\t\t 4. Masala/onion/karam/upma dosa /wada / sambar idly - 40/-");
puts("\t\t 5. Ghee dosa / Veg biryani/ sambarwada - 50/-");
puts("\t\t 6. Bill");
puts("\t\t 7. Cancel");
puts("\t\t 8. Close");
puts("********************************************************************");


printf("\t\t Enter Ur Option[ ]\b\b");
scanf("%d",&op);

if(op<=5){printf("Enter Quantity ");
scanf("%f",&qty);}
else if(op==6) { 
printf("Ur Billamount=%.2f",amt);amt=0;}
else if(op==7) {
printf("Ur order cancelled",amt=0);}
else if(op==8) return;
switch(op)
{
case 1: amt=amt+qty*10;break;
case 2: amt=amt+qty*20;break;
case 3: amt=amt+qty*30;break;
case 4: amt=amt+qty*40;break;
case 5: amt=amt+qty*50;break;
}

goto start;
}
