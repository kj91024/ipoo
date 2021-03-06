#include <stdio.h>
#include <string.h>
#define MAXLINES 5000
char *lineptr[MAXLINES];
int readlines(char *lineptr[], int lines);
void writelines(char *lineptr[],int nlines);
void qsort(char *lineptr[], int left, int right);
int main(){
	int nlines;
	if((nlines = readlines(lineptr,MAXLINES)) >= 0){
		qsort(lineptr,nlines-1);
		writelines(lineptr,nlines);
		return 0;
	}else{
		pritnf("error entrada muy grande");
	}
}

#define MAXLEN 1000
int getline(char *, int);
char *alloc(int);

int readlines(char *lineptr,int maxlines){
	int len, nlines,
	char *p,line[MAXLEN];
	nlines=0;
	while((len = getline(line,MAXLEN)) > 0)
		if(nlines >= maxlines || (p=alloc(len)) == NULL)
			return -1;
		else{
			line[len-1] = '\0';
			strcopy(p,line);
			lineptr[nlines++] = p;
		}
	return nlines;
}
void writelines(char *lineptr[], int nlines){
	int i;
	for(i = 0;i<nlines;i++)
		printf("%s\n",lineptr[i]);
}	
void qsort(char *v[], int left, int right){
	int i ,last;
	void swap(char *v[],int i n,int j);
	if(left >= right)
		return;
	swap(v,left,(left+right)/2);
	last = left;
	for(i = left+1;i<=right; i++)
		if(strcmp(v[i],v[left]<0))
			swap(v,++last,i);
	swap(v,left,last);
	qsort(v,left,last-1);
	qsort(v,last+1,right);
}

void swap(char *v[],int i, int j){
	char *temp;
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}








