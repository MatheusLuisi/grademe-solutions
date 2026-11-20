const char	*skip_spaces(const char *s)
{
	int i = 0;
	while(s[i]){
		if (s[i] == '\t' || s[i] == ' ')
			i++;
		if((s[i] >= 33 && s[i] <= 126) || (s[i] == '\n'))
			return(s + i);
	}
	return(s + i);
}
