#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{

    if(argc < 2){
    return 0;
}
//help
if(!strcmp(argv[1], "help"))
{
    printf("\n");
    printf("Math`C app help\n");
    printf("Ussage: math [ctab | -m | -d | -sqrt | -a | -s | -v | help] [args...]");
    printf(
        "\nctab        | Shows the multiplication table of the requested value [Args: <number> ]\n"
        "-m          | Multiplication [Args: <number1> <number2>]\n"
        "-d          | Division [Args: <number to divide> <divisor>]\n"
        "-sqrt       | Root [Args: <radical index> <residing>]\n"
        "-a          | Add [Args: <number1> <number2>]\n"
        "-s          | Substract [Args: <number1> <number2>]\n"
        "-v          | Show the version of MATH plugin. \n"
        "\n"
        "\n If you want help 'n maths don't ask me!\n"

    );

}

// Arguments


  if(!strcmp(argv[1], "ctab"))
  {
      
      printf("The multiplication table of: ", argv[1]);
     for(int i = 0; i < 11; i++)
    {
    printf("%d*%d = %d\n", atoi(argv[2]), i, atoi(argv[2])*i);
    }
  }

      if(!strcmp(argv[1], "-m"))
  {
 double res = atof(argv[2]) * atof(argv[3]); // <---
      printf("Result: %f", res );
      }
      if(!strcmp(argv[1], "-d"))
  {
 double res = atof(argv[2]) / atof(argv[3]); // <---
      printf("Result: %f", res );
      }
            if(!strcmp(argv[1], "-a"))
  {
 double res = atof(argv[2]) + atof(argv[3]); // <---
      printf("Result: %f", res );
      }
            if(!strcmp(argv[1], "-s"))
  {
 double res = atof(argv[2]) - atof(argv[3]); // <---
      printf("Result: %f", res );
      }

            if(!strcmp(argv[1], "-sqrt"))
  {
 printf("Oh, your values are... I don't know because I dont make this function yet" );
      }

      if(!strcmp(argv[1], "-v"))
  {
 printf("Version: math@1.0.3" );
      }


  //EOF
}