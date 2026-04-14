#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int A[5] = {74, 48, 30, 17, 62};
   int i, min, max;
   
   int max_idx = 0; 
   int min_idx = 0;

   min = max = *A;		
   
   for(i = 0; i < 5; i++)
   {
      if(*(A + i) > max) 	
      {
         max = *(A + i); 
         max_idx = i;    
      }
      
      if(*(A + i) < min) 	
      {
         min = *(A + i); 
         min_idx = i;    
      }
   }
   
   printf("陣列裡元素的最大值為 %d，其索引值為 %d\n", max, max_idx);
   printf("陣列裡元素的最小值為 %d，其索引值為 %d\n", min, min_idx);
   
   system("pause");
   return 0;
}