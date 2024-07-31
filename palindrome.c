#include <stdio.h>
#include <stdlib.h>


  int is_palindrome(char str[])
  {
      int left=0;
      int right=strlen(str)-1;
      while(left<right)
      {
          if(str[left]!=str[right])
          {
              return 0;
          }
          left++;
          right--;
      }
      return 1;
  }
  int main()
  {
  char str[25];
  printf("Enter a word to check:\n");
  scanf("%s",str);
  if(is_palindrome(str))
  {
      printf("%s is a palindrome",str);
  }
  else
    printf("%s is not a palindrome",str);
  }

