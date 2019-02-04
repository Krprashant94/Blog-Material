    /*

     * C Program to Implement the KMP Pattern Searching Algorithm  

     */

    #include <stdio.h>

    #include <string.h>

    #include <ctype.h>

     

    int main()

    {

        char string[100], matchcase[20], c;

        int i = 0, j = 0, index;

     

        /*Scanning string*/

        printf("Enter string: ");

        scanf("%s", string);
        
        /*Scanning substring*/

        printf("Enter substring: ");

        scanf("%s", matchcase);
        
        for (i = 0; i < strlen(string) - strlen(matchcase) + 1; i++)

        {

            index = i;

            if (string[i] == matchcase[j])

            {

                do

                {

                    i++;

                    j++;

                } while(j != strlen(matchcase) && string[i] == matchcase[j]);

                if (j == strlen(matchcase))

                {

                    printf("Match found from position %d to %d.\n", index + 1, i);

                    return 0;

                }

                else

                {

                    i = index + 1;

                    j = 0;

                }

            }

        }

        printf("No substring match found in the string.\n");

     

        return 0;

    }
