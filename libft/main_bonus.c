#include "libft.h"
#include <stdio.h>
#include <string.h>
void del(void *lst)
{
	free(lst);
}

void change_value(void *v)
{
	//char *ptr;
	//ptr = v;
	printf("avant == %s\n", v);
	printf("avant == %p\n", v);
	v = strcpy(v, "bonjour");
	printf("apres == %s\n", v);
	printf("apres == %p\n", v);
}

void *change_value2(void *v)
{
	printf("avant == %s\n", v);
	printf("avant == %p\n", v);
	v = strcpy(v, "bonjour");
	printf("apres == %s\n", v);
	printf("apres == %p\n", v);
	return v;
}

int main(void)
{
	//char *nb = "bonjour";
	//char *nb2 = "bonjour tous";
	//char	*nb_last = "bonjour tous";
	t_list	*lst;
	//nb = malloc(sizeof(char *) * 7 + 1);
	lst = ft_lstnew(malloc(4));
	//A COMMENTER ET DECOMMENTER POUR FT_LSTSIZE
	/*while (lst != NULL)
	{
		printf("lst_new value == %s\n", (char *)lst->content);
		lst = lst->next;
	}*/
	t_list *new;
	new = ft_lstnew(malloc(4));
	//new = ft_lstnew((void *)nb);
	ft_lstadd_front(&lst, new);
	/*while (lst != NULL)
	{
		printf("%p\n", lst->content);
		lst = lst->next;
	}*/
	t_list *t_last;
	printf("size == %d\n", ft_lstsize(lst));
	//t_last = ft_lstlast(malloc(7));
	t_last = ft_lstlast(lst);
	/*while (t_last != NULL)
	{
		printf("t_last == %s\n", t_last->content);
		t_last = t_last->next;
	}*/	
	//t_list *back;
	//back = ft_lstnew(ft_strdup("bonjour"));
	//back = ft_lstnew((malloc(4)));
	//ft_lstadd_back(&lst, back);
	/*while (lst != NULL)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}*/
	
	t_list *lst_free;
	lst_free = ft_lstnew((malloc(5)));
	void (*ft_del)(void *);
	ft_del = &del;
	//printf("lst_free == %s\n", (char *)lst_free->content);
	ft_lstdelone(lst_free ,ft_del);
	printf("element freed == %p\n", lst_free);
	printf("element freed2 == %p\n", lst);
	ft_lstclear(&lst, ft_del);
	printf("dkkd\n");
	/*while (lst != NULL)
	{
		printf("element freed2 == %s\n", (char *)lst->content);
		lst = lst->next;
	}*/
	//t_list	*list_iter;
	/*ft_lstadd_back(&list_iter, ft_lstnew(ft_strdup("bonjour1")));

	ft_lstadd_back(&list_iter, ft_lstnew(ft_strdup("bonjour2")));
	ft_lstadd_back(&list_iter, ft_lstnew(ft_strdup("bonjour3")));
	ft_lstadd_back(&list_iter, ft_lstnew(ft_strdup("bonjour4")));
	*///printf("\n--------\n");
	/*while (list_iter != NULL)
	{
		printf("%s\n", list_iter->content);
		list_iter = list_iter->next;
	}*/
	//ft_lstiter(list_iter, change_value);
	//printf("\n-----------\n");
	/*while (list_iter != NULL)
	{
		printf("%p\n", list_iter->content);
		printf("final == %s\n", list_iter->content);
		list_iter = list_iter->next;
	}*/
	//voir change value pour valeur modifié vue que la valeur n'est pas assigné dans ft_lstiter.c?
	//ft_lstclear(&list_iter, ft_del);
	t_list *list_maping = NULL;
	t_list *list_cpy;
	ft_lstadd_back(&list_maping, ft_lstnew(ft_strdup("bonjour1")));
	//ft_lstadd_back(&list_cpy, ft_lstnew(ft_strdup("bonjour1")));
	//ft_lstadd_back(&list_cpy, ft_lstnew(ft_strdup("bonjour1")));
	//ft_lstadd_back(&list_cpy, ft_lstnew(ft_strdup("bonjour1")));
	ft_lstadd_back(&list_maping, ft_lstnew(ft_strdup("bonjour2")));
	ft_lstadd_back(&list_maping, ft_lstnew(ft_strdup("bonjour3")));
	ft_lstadd_back(&list_maping, ft_lstnew(ft_strdup("bonjour4")));
	ft_lstadd_back(&list_maping, ft_lstnew(ft_strdup("bonjour5")));
	ft_lstadd_back(&list_maping, ft_lstnew(ft_strdup("bonjour6")));
	ft_lstadd_back(&list_maping, ft_lstnew(ft_strdup("bonjour7")));
	/*while (list_maping != NULL)
	{
		printf("%p\n", list_maping->content);
		printf("final_maping == %s\n", list_maping->content);
		list_maping = list_maping->next;
	}*/
	/*while (list_cpy != NULL)
	{
		printf("%p\n", list_cpy->content);
		printf("final_cpy %s\n", list_cpy->content);
		list_cpy = list_cpy->next;
	}*/
	void *(*ft_map)(void *);
	ft_map = change_value2;
	list_cpy = ft_lstmap(list_maping, ft_map, del);
	while (list_cpy != NULL)
	{
		printf("%p\n", list_cpy->content);
		printf("final == %s\n", list_cpy->content);
		list_cpy = list_cpy->next;
	}
	return (0);
}
