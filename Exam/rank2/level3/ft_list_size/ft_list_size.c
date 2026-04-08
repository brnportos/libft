int	ft_list_size(t_list *begin_list)
{
	t_list	*curr;
	int	size;


	if (!begin_list)
		return (0);
	curr = begin_list;
	size = 0;
	while (curr)
	{
		size++;
		curr = curr->next;
	}
	return (size);
}
