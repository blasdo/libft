#include <stdlib.h>
#include "libft.h"
#include <limits.h>
#include <stdio.h>


int main(void)
{
    char * str;
    t_list *lst_head = ft_lstnew(ft_lstnew(ft_itoa(INT_MAX)));
    t_list *ultimate;

    ultimate = lst_head;
    long long mayonesaconqueso = 0;
    while ((ultimate->content))
    {
        ft_lstadd_back(&ultimate, ft_lstnew((ft_itoa(mayonesaconqueso))));
        ultimate = ultimate->next;
        ++mayonesaconqueso;
    }
    printf("%lld, %s, %d\n", mayonesaconqueso, "0123456789", 1);
    ft_putendl_fd("", 1);
    ft_lstclear(&lst_head, &free);
    ft_putnbr_fd(240, 1);
}
