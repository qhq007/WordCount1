#include<stdio.h>
int main(){
	FILE* p;
	p=fopen("C:\\txt\\test.txt","r");
	char ch;
	char input;
	int words=0;
	int count=0;
	if (!p){
		printf("读取文件失败");
		return 0;
	}
	while((ch=fgetc(p))!=EOF){
		if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
			words++;
		}
		count++;
	}
	words=count-words;
	scanf("%c",&input);
	if(input=='w')
	   printf("单词数为：%d",words);
	if(input=='c')
	   printf("字符数为：%d",count);
	fclose(p);
	return 0;
}

