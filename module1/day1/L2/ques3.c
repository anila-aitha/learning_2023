#include <stdio.h>
int vowel(char ch)
{
     switch(ch)
  {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
      return 1;
      break;
      default: return 0;
  }
}

int main()
{
  char op,val;
  scanf("%c",&op);
  if( vowel(op))
  printf("VOWEL");
  else 
  printf("Not a Vowel");
 
}
