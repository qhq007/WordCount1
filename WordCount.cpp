#include<stdio.h>
int main(){
	FILE* p;
	p=fopen("C:\\txt\\test.txt","r");
	char ch;
	char input;
	int words=0;
	int count=0;
	if (!p){
		printf("��ȡ�ļ�ʧ��");
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
	   printf("������Ϊ��%d",words);
	if(input=='c')
	   printf("�ַ���Ϊ��%d",count);
	fclose(p);
	return 0;
}

