#include "ft_printf.h"

int	main(void){
	int len = ft_printf("%c\n", 'a');
	ft_printf("%d\n", len);
	int len1 = ft_printf("%d\n", -769483);
	ft_printf("%d\n", len1);
	int len2 = ft_printf("%u\n", 65487);
	ft_printf("%d\n", len2);
	int len3 = ft_printf("%s\n", "POOPMONKEY");
	ft_printf("%d\n", len3);
	int x = 42;
	int len4 = ft_printf("%p\n", &x);
	ft_printf("%d\n", len4);
	int len5 = ft_printf("%x\n", 6345987);
	ft_printf("%d\n", len5);
	int len6 = ft_printf("%X\n", 5382);
	ft_printf("%d\n", len6);
	int len7 = ft_printf("%%\n");
	ft_printf("%d\n", len7);
	return (0);
}