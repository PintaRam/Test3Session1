#include<stdio.h>
#include<string.h>
void input_string(char *a)
{
  printf("enter the string \n");
  scanf("%[^\n]s",a);
}
void count_words(char *string)
{ 
 
  char* word;
  int i=0;
  string[strcspn(string, "\n")] = 0;

  word=strtok(string, " ,\".-");

  while( word != NULL)
  {
      printf("%s ", word);
      word=strtok(NULL, " ,\".-");
      i++;

  }

   printf("there were %d words in the string \n",i); 



	       
}





  




int main()
{
  char string[1000];
  
  input_string(string);
 count_words(string);
// output(string,  words);
  
     
}
