unsigned short int		ft_isspace(unsigned short int c)
{
	if (c == ' ' || c == '\r' || c == '\f' || c == '\v' || c == '\n' ||
		c == '\t')
		return (1);
	return (0);
}
