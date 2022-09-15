#include "main.h"

#include <string.h>



/**
 *
 *  * main - Entry point
 *
 *   *
 *
 *    * Description: prints _putchar using putchar prototype
 *
 *     *
 *
 *      * Return: Always 0 (Success)
 *
 *      */



int main(void)

{

		char str[] = "_putchar";

			int ch;



				for (ch = 0; ch < 8; ++ch)

							_putchar(str[ch]);

					_putchar('\n');



						return (0);

}



TASK 1

#include "main.h"



/**
 *
 *  * print_alphabet 
 *
 *  */



void print_alphabet(void)

{

		int ch;



			for (ch = 'a'; ch <= 'z'; ++ch)

						_putchar(ch);

				_putchar('\n');

}
