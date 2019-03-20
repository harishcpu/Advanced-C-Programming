#include "header.h"

int RemElement(void* Mem)
{
	int choice;
	int nb = 0, pos = 0;

	system("clear");
	printf("\t\t" BOLDMAGENTA "REMOVE AN ELEMENT\n" RESET);
	DispElement(Mem, 0);
	printf("You want to remove : ");
	scanf("%d", &choice), getc(stdin);
	if (choice > count) {
		printf("Wrong choice\n");
		return 0;
	}

    for (int i = 0; i < count; i++)
        printf("%2d %2d\n", *(*(N + i) + 0), *(*(N + i) + 1));

    for (int i = 0; i < count; i++) 
    {
        if (choice == *(*(N + i) + 0)) 
        {
			nb = *(*(N + i) + 1);
			printf("pos : %d\n", pos);
	        printf("nb : %d\n", nb);
            for (int j = i + 1; j < 8; j++) 
            {
//                    *(*(N + j - 1) + 0) = *(*(N + j) + 0);
                    *(*(N + j - 1) + 1) = *(*(N + j) + 1);
                    *(ary + j - 1) = *(ary + j);
            }
            break;
		}
        else
            pos += *(*(N + i) + 1);
	}

	unsigned long mask1 = 0, mask2 = 0;
    if (choice != 1)
	    mask1 = (-1ul >> (sizeof(Mem) * 8 - pos));
	mask2 = (-1ul << (pos + nb));
	
    print_bits(&mask1);
    print_bits(&mask2);
    
	mask1 &= *(long *)Mem;
	mask2 &= *(long *)Mem;
    
    print_bits(&mask1);
    print_bits(&mask2);
    
    if((pos + nb) == 64)
	    *(long *)Mem = (mask1 | (*(long *)Mem = 0));
    else
	    *(long *)Mem = (mask2 >> nb) | (mask1 | (*(long *)Mem = 0));
	print_bits(Mem);

    for (int i = 0; i < count; i++)
        printf("%2d %2d\n", *(*(N + i) + 0), *(*(N + i) + 1));
    
	printf("full : %d\n", *(*(N + choice) + 1));
    printf("nb : %d\n", nb);
	full -= nb;
	printf("full : %d\n", *(*(N + choice) + 1));
	count -= 1;
}
