#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main() {
 int gd = DETECT, gm;
 int y = 0, x = 10, m[20], k[20], n, a[20], i;
 float b[20];
 initgraph(&gd, &gm, "c:\tc\bgi");
 printf("Generating the Graphs");
 printf("\nEnter the no. of inputset");
 scanf("%d", &n);
 printf("\nEnter the input sizes and corresponding time taken");
 for (i = 0; i < n; i++) {
  printf("\nEnter input size");
  scanf("%d", &a[i]);

 }
 cleardevice();
 //represents y axis
 line(10, 0, 10, 400);
 //represents x axis
 line(10, 400, 600, 400);
 while (y <= 400) {
  line(0, y, 10, y);
  y = y + 20;
 }
 while (x <= 600) {
  line(x, 400, x, 410);
  x = x + 20;
 }
 
