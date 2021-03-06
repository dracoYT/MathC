#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void help()
{
    printf("\n");
    printf("Math`C app help\n");
    printf("Usage: math [ctab | -m | -d | -sqrt | -a | -s | -sd | -v | help] [args...]");
    printf(
        "\nctab        | Shows the multiplication table of the requested value [Args: <number> ]\n"
        "-m          | Multiplication [Args: <number1> <number2>]\n"
        "-d          | Division [Args: <number to divide> <divisor>]\n"
        "-sqrt       | Root [Args: <radical index> <residing>]\n"
        "-a          | Add [Args: <number1> <number2>]\n"
        "-s          | Substract [Args: <number1> <number2>]\n"
        "-sd         | Second degree equation solver [Args: <x^2 coefficient> <x coefficient> <constant term>]\n"
        "-v          | Show the version of MATH plugin. \n"
        "\n"
        "\n If you want help 'n maths don't ask me!\n"
    );
}

int main(int argc, char *argv[])
{

    if (argc < 2)
    {
        help();
        return 0;
    }

    // Made By DracoYT https://github.com/dracoYT/MathC
    if (!strcmp(argv[1], "help"))
    {
        help();
    }

    if (!strcmp(argv[1], "ctab"))
    {

        printf("The multiplication table of: ", argv[1]);
        for (int i = 0; i < 11; i++)
        {
            printf("%d*%d = %d\n", atoi(argv[2]), i, atoi(argv[2]) * i);
        }
    }

    if (!strcmp(argv[1], "-m"))
    {
        double res = atof(argv[2]) * atof(argv[3]);
        printf("%f\n", res);
    }

    if (!strcmp(argv[1], "-d"))
    {
        double res = atof(argv[2]) / atof(argv[3]);
        printf("%f\n", res);
    }

    if (!strcmp(argv[1], "-a"))
    {
        double res = atof(argv[2]) + atof(argv[3]);
        printf("%f\n", res);
    }

    if (!strcmp(argv[1], "-s"))
    {
        double res = atof(argv[2]) - atof(argv[3]);
        printf("%f\n", res);
    }

    if (!strcmp(argv[1], "-sqrt"))
    {
        double res = sqrt(atoi(argv[2]));
        printf("%f\n", res);
    }
    //Second degree Equation Solver
    //-------------------
    //D=b^2-4ac
    //x1=(-b+sqrt(D))/2a
    //x2=(-b-sqrt(D))/2a
    //-------------------
	if (!strcmp(argv[1], "-sd"))
	{
		double delta = pow(atof(argv[3]), 2.0) - 4.0 * atof(argv[2]) * atof(argv[4]);
		if(atof(argv[2]) == 0.0)
        {
            printf("Second degree can't have x^2 coeffecient equal to 0\n");
        }
        else
        {
            if (delta < 0)
            {
                printf("No solution in R\n");
            }
            else if (delta == 0.0)
            {
                printf("%lf\n", (-atof(argv[3])) / (2.0 * atof(argv[2])));
            }
            else
            {
                printf("%lf\t%lf\n", (-atof(argv[3]) + sqrt(delta)) / (2.0 * atof(argv[2])), (-atof(argv[3]) - sqrt(delta)) / (2.0 * atof(argv[2])));
            }
        }
	}

    if (!strcmp(argv[1], "-v"))
    {
        printf("Version: math@1.0.3");
        printf("Made by @DracoYT");
    }

    return 0;
}
