void squeeze(char s[],int c){
	int i,j;
	for(i=j=0;s[i] != '\0';i++)
		if(s[i] != c)
			s[j++] = s[i];
	s[j] = '\0';
}
void squeeze_alternative(char s1[],char s2[]){
	int i,j,n,m;
	for(i = 0;s1[i] != '\0';i++)
		for(j = 0;s2[j] != '\0';j++)
			if(s1[i] == s2[j])
				s1[i] = "";
}