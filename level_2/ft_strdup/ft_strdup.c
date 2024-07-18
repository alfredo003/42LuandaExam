char    *ft_strdup(char *src)
{
	int i =0;
	int len = 0;
	
	while(src[len])
		len++;
	char *res = (char *)malloc(sizeof(char) * len+1);
	if(!res)
		return NULL;
	while(len > i)
	{
		res[i] = src[i];
		i++;
	}
	
	res[i] = '\0';
	return res;
}
