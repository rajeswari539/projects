#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char s[100],chr;int i,j,l;
	printf("Enter string : "); gets(s);
	printf("Enter the character you want to remove: "); scanf(" %c",&chr);
	l=strlen(s);
	for(i=0;i<l;i++){
		if(s[i]==chr){
			for(j=i;j<l-1;j++){
				s[j]=s[j+1];
			}
			
			j--;
			i--;
		}
		
	}
	printf("%s",s);
		return 0;
	}
