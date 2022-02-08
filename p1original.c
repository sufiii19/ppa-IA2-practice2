#include<stdio.h>
void input(float *base,float *height)
{
  printf("enter the base\n");
  scanf("%f",base);
  printf("enter the height\n");
  scanf("%f",height);
}
void find_ar(float height,float base,float *area)
{
  *area=0.5*base*height;
}
void output(float base, float height, float area)
{
  printf("the area of triangle with base %f and height %f is %f\n",base,height,area);
}
int main()
{
  float base,height,area;
  input(&base,&height);
  find_ar(base,height,&area);
  output(base,height,area);
  return 0;
}