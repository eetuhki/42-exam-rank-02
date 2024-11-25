typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int	ft_list_size(t_list *begin_list)
{
	if (!begin_list)
		return (0);
	return (ft_list_size(begin_list->next) + 1);
}
