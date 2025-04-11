#include <unistd.h>
#include "sort.h"
/**
 * _putchar - Fonction qui écrit un caractère à l'écran
 * @c: le caractère à afficher
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}
void print_number(int n)
{
    if (n < 0)
    {
        _putchar('-');
        n = -n;
    }

    if (n / 10)
        print_number(n / 10);

    _putchar(n % 10 + '0');
}

/**
 * selection_sort - tri un tableau d'entiers en ordre croissant
 * @array: tableau d'entiers à trier
 * @size: taille du tableau
 */
void selection_sort(int *array, size_t size)
{
    int temp;
    size_t i, min_index; 
    size_t k; 
    size_t j;

    for (i = 0; i < size - 1; i++)
    {
        min_index = i;

        for (j = i + 1; j < size; j++)
        {
            if (array[j] < array[min_index])
            {
                min_index = j;
            }
        }
        if (min_index != i) 
        {
            temp = array[i];
            array[i] = array[min_index];
            array[min_index] = temp;
            for (k = 0; k < size; k++) 
            {
                print_number(array[k]);
                if (k < size - 1) 
                {
                    _putchar(' ');
                }
            }
            _putchar('\n');
        }
    }
}
