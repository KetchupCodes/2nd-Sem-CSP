#include <stdio.h>
#include "header.h"
#define SIZE 100
int main()
{
    int numnum;
    char str[SIZE], keystr[SIZE];
    printf("Enter 1 for Encryption and 2 for Decryption \n");
    scanf("%d", &numnum);
    if (numnum == 1)
    {

        printf("Enter the key: ");
        scanf("%[^\n]s", &keystr);
        printf("Key text: %s\n", keystr);

        printf("Enter the plaintext: ");
        scanf("\n");
        scanf("%[^\n]s", &str);
        printf("Plain text: %s\n", str);

        //Calling the PlayfairCrypt function
        PlayfairCrypt(str, keystr);
    }
    else if (numnum == 2)
    {
        //Key used - to be entered in lower case letters
        printf("Enter the key: ");
        scanf("%[^\n]s", &keystr);
        printf("Key text: %s\n", keystr);

        printf("Enter the ciphertext: ");
        scanf("\n");
        scanf("%[^\n]s", &str);
        printf("Cipher text: %s\n", str);

        //Calling the PlayfairDeCrypt function
        PlayfairDeCrypt(str, keystr);
    }

    else
    {
        printf("Invalid Input \n");
    }

    return 0;
}
