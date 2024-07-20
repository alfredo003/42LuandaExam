#include <stdio.h>
int	max(int* tab, unsigned int len)
{
 	unsigned int i =0;
 	int result = 0;
 	
 	if(len == 0)
 		return (0);
 	result = tab[i];
 	while(len > i)
 	{
 		if(tab[i] > result)
			result = tab[i];
 		i++;
 	}
 	
 	return (result);
}
int main()
{
    int array[] = {5, 2, 9, 1, 5};
    unsigned int size = sizeof(array) / sizeof(array[0]);
    
    // Chama a função para encontrar o máximo e ordenar o array
    int max_value = max(array, size);
    
    // Imprime o resultado
    printf("Array ordenado: ");
    for (unsigned int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    printf("Valor máximo encontrado: %d\n", max_value);
    
    return 0;
}
