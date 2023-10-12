#include <stdio.h>

// Function prototypes
void ft_ft(int *nbr);
void ft_ultimate_ft(int *********nbr);
void ft_swap(int *a, int *b);
void ft_div_mod(int a, int b, int *div, int *mod);
void ft_ultimate_div_mod(int *a, int *b);
void ft_putstr(char *str);
int ft_strlen(char *str);
void ft_rev_int_tab(int *tab, int size);
void ft_sort_int_tab(int *tab, int size);

int main() {
    int ex = 0; // Exercise number

    printf("------------\n\n");

    // Exercise 00 - ft_ft
    int ex00_nbr = 0;
    printf("Exercise %02d - ft_ft:\n", ex++);
    printf("Before: %d\n", ex00_nbr);
    ft_ft(&ex00_nbr);
    printf("After: %d", ex00_nbr);

    printf("\n\n------------\n\n");

    // Exercise 01 - ft_ultimate_ft
    int	ex_01n;
	int	*ex_01ptr1;
	int	**ex_01ptr2;
	int	***ex_01ptr3;
	int	****ex_01ptr4;
	int	*****ex_01ptr5;
	int	******ex_01ptr6;
	int	*******ex_01ptr7;
	int	********ex_01ptr8;
	int	*********ex_01ptr9;

	ex_01n = 5;
	ex_01ptr1 = &ex_01n;
	ex_01ptr2 = &ex_01ptr1;
	ex_01ptr3 = &ex_01ptr2;
	ex_01ptr4 = &ex_01ptr3;
	ex_01ptr5 = &ex_01ptr4;
	ex_01ptr6 = &ex_01ptr5;
	ex_01ptr7 = &ex_01ptr6;
	ex_01ptr8 = &ex_01ptr7;
	ex_01ptr9 = &ex_01ptr8;
    int ex01_nbr = 0;
    printf("Exercise %02d - ft_ultimate_ft:\n", ex++);
    printf("Before: %d\n", ex01_nbr);
    ft_ultimate_ft(ex_01ptr9);
    printf("After: %d", ex_01n);

    printf("\n\n------------\n\n");

    // Exercise 02 - ft_swap
    int ex02_a = 10, ex02_b = 20;
    printf("Exercise %02d - ft_swap:\n", ex++);
    printf("Before: a=%d, b=%d\n", ex02_a, ex02_b);
    ft_swap(&ex02_a, &ex02_b);
    printf("After: a=%d, b=%d", ex02_a, ex02_b);

    printf("\n\n------------\n\n");

    // Exercise 03 - ft_div_mod
    int ex03_a = 10, ex03_b = 3, ex03_div, ex03_mod;
    printf("Exercise %02d - ft_div_mod:\n", ex++);
    printf("a=%d, b=%d\n", ex03_a, ex03_b);
    ft_div_mod(ex03_a, ex03_b, &ex03_div, &ex03_mod);
    printf("Division result: %d\n", ex03_div);
    printf("Modulus result: %d", ex03_mod);

    printf("\n\n------------\n\n");

    // Exercise 04 - ft_ultimate_div_mod
    int ex04_a = 10, ex04_b = 3;
    printf("Exercise %02d - ft_ultimate_div_mod:\n", ex++);
    printf("a=%d, b=%d\n", ex04_a, ex04_b);
    ft_ultimate_div_mod(&ex04_a, &ex04_b);
    printf("After division: a=%d, b=%d", ex04_a, ex04_b);

    printf("\n\n------------\n\n");

    // Exercise 05 - ft_putstr
    char ex05_str[] = "Hello, World!";
    printf("Exercise %02d - ft_putstr:\n", ex++);
    printf("Input string: %s\n", ex05_str);
    ft_putstr(ex05_str);

    printf("\n\n------------\n\n");

    // Exercise 06 - ft_strlen
    char ex06_str[] = "Hello, World!";
    printf("Exercise %02d - ft_strlen:\n", ex++);
    printf("Input string: %s\n", ex06_str);
    int ex06_len = ft_strlen(ex06_str);
    printf("Length: %d", ex06_len);

    printf("\n\n------------\n\n");

    // Exercise 07 - ft_rev_int_tab
    int ex07_tab[] = {1, 2, 3, 4, 5};
    int ex07_size = sizeof(ex07_tab) / sizeof(int);
    printf("Exercise %02d - ft_rev_int_tab:\n", ex++);
    printf("Original array: ");
    for (int i = 0; i < ex07_size; i++) {
        printf("%d ", ex07_tab[i]);
    }
    printf("\n");
    ft_rev_int_tab(ex07_tab, ex07_size);
    printf("Reversed array: ");
    for (int i = 0; i < ex07_size; i++) {
        printf("%d ", ex07_tab[i]);
    }

    printf("\n\n------------\n\n");

    // Exercise 08 - ft_sort_int_tab
    int ex08_tab[] = {5, 3, 1, 4, 2};
    int ex08_size = sizeof(ex08_tab) / sizeof(int);
    printf("Exercise %02d - ft_sort_int_tab:\n", ex++);
    printf("Original array: ");
    for (int i = 0; i < ex08_size; i++) {
        printf("%d ", ex08_tab[i]);
    }
    printf("\n");
    ft_sort_int_tab(ex08_tab, ex08_size);
    printf("Sorted array: ");
    for (int i = 0; i < ex08_size; i++) {
        printf("%d ", ex08_tab[i]);
    }
    printf("\n\n------------\n\n");

    return 0;
}
