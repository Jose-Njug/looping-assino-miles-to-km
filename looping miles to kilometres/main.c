 #include <stdio.h>
 int main(void)
 {
 printf ("A table showing the conversion of Miles to Kilometres\n");
 float a;
 while (a <= 100)
 {
 printf("%6.2f miles = %6.2f kilometres\n",
 a , a * 1.609);
 a = a + 10;
 }
 return 0;
 }
