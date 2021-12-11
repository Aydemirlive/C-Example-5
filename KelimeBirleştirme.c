#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char isim[10];
    char soyad[10];
    char dizi[20];
    int i,j,k;
    printf("Ýsim gir\n");
    scanf("%s",isim);
    printf("Soyisim gir\n");
    scanf("%s",soyad);
    for(i=0;isim[i]!='\0';i++){
    dizi[i]=isim[i];}
    for(j=0;soyad[j]!='\0';j++){
    dizi[i+j]=soyad[j];}
    for(k=0;k<i+j;k++){
    printf("%c",dizi[k]);}
    
    
  system("PAUSE");	
  return 0;
}
