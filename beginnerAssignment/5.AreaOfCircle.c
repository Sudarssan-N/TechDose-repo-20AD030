#include < stdio.h >   
#include < conio.h > #define PI 3.141  
int main()   
{
  float radius,area;
  printf("Enter the radius of the circle");
  scanf("%f",&radius);
  area=PI*radius*radius;
  printf("Area of Circle : %0.4f\n",area);
  getch();
  return 0;
}