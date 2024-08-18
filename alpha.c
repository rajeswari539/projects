//#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
//int main(){
//	char s[100]; int i,sum=0;
//	printf("Enter string:");gets(s);
//	for(i=0;s[i]!='\0';i++);{
//		if(s[i]>='0' && s[i]<='9'){
//			sum=sum+s[i];
//		}
//		
//		
//	}
//	printf("Sum=%d",sum);
//	return 0;
//}
	
	#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[100];
    int i, j, c;
    //int visited[256] = {0}; // Array to keep track of visited characters

    printf("Enter string: ");
    fgets(s, sizeof(s), stdin);

    // Remove newline character from the string if present
    //s[strcspn(s, "\n")] = '\0';

    for(i = 0; s[i] != '\0'; i++) {
        if (s[i]) {
            continue; // Skip already counted characters
        }
        c = 0;
        for(j = i; s[j] != '\0'; j++) {
            if(s[i] == s[j]) {
                c++;
            }
        }
        printf("%c%d", s[i], c);
        //visited[(unsigned char)s[i]] = 1; // Mark this character as visited
    }
    
    return 0;    
}

	
	
	
	
	
	
		
