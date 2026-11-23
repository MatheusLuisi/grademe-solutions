#include <stdlib.h>
#include <stddef.h>

int my_strlen(const char *s)
{
	int i = 0;
	while(s[i])
		i++;
	return i;
}

char *gm_strdup(const char *src)
{
	int i;
	char *dup;

	i = 0;
	dup = malloc((my_strlen(src) + 1) * sizeof(char));
	if(!dup)
		return NULL;
	while(src[i]){
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return dup;
}
