#include<stdio.h>
#include<string.h>
void input_string(char *a)
{
  printf("enter the string \n");
  scanf("%s",a);
}
void count_words(char *string)
{ char delim[] = " ,.!;:\n";    
	char *words, *ptr;
	
	int count = 0;
        ptr= string;
	
	while ((words = strtok(ptr, delim)) !=NULL)   
	      {printf("\n%s\n",words);
	       count++;
	       ptr = NULL; 
	      }
  printf("there were %d words in the string \n",count); 
	       
}

//output()



  




int main()
{
  char string[100] ;
  int words;
  input_string(string);
  count_words(string);
// output(string,  words);

     
}
