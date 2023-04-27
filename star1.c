#include <stdio.h>

int main() {
   int i, n;
   printf("Kaç adet yıldız çizmek istersiniz? ");
   scanf("%d", &n);
   for(i=0; i<n; i++) {
      printf("* ");
   }
   return 0;
}
