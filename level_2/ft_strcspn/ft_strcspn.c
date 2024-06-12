size_t ft_strspn(const char *s,const char *reject)
{
	int i;
	i = 0;
	
	while(s[i] != '\0')
	{
	 	j = 0
	 	while(reject[j] != '\0')
	 	{
	 		if(s1[i] == reject[j])
	 		{
	 			return (i);
	 		}
	 		j++;
	 	}
	 	i++;
	}
	return (i);
}
