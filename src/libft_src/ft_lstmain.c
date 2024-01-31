
#include "libft.h"
int main()
{
    t_list *head = ft_lstnew("ciao");

    head->next = ft_lstnew("questa");
    head->next->next = ft_lstnew("lista");
    head->next->next->next = ft_lstnew("funziona");
    head->next->next->next->next = ft_lstnew("bene");
    t_list *current = head;
    while (current != NULL)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }
    free(head->next->next->next->next);
    free(head->next->next->next);
    free(head->next->next);
    free(head->next);
    free(head);

    return 0;
}