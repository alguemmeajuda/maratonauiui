#include <stdio.h>
 int main(){
    int h, m, s1, s2;

  printf ("digite quantos segundos deseja converter");
  scanf ("%d" , &s1);
  m=s1/60;
  h=m/60;
  s2=s1-(m*60);
  printf ("%d:%d:%d \n", h, m, s2);
  return 0;
 }
