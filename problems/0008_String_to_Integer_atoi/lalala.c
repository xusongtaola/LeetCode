#include<stdio.h>
int atoi(const char *str){
		int INT_MAX=2147483647,INT_MIN=-INT_MAX;
		int sign = 1,base=0,i=0;
		while (str[i]==' '){i++;}
		if(str[i]=='-'||str[i]=='+'){
			sign=1-2*(str[i++]=='-');
		}
		while (str[i]>='0'&&str[i]<='9'){
			if(base>INT_MAX/10||(base==INT_MAX/10&&str[i]-'0'>7)){
				if(sign==1)return INT_MAX;
				else return INT_MIN;
			}
			base=10*base+(str[i++]-'0');
		}
		return base*sign;
		
} 
void main(void){
	int b;
	const char *a="     -345   abcdfjfj";
	//printf("请输入：");
	//scanf("%s",&a);
	printf("原字符串为%s",a);
	b=atoi(a);
	printf(" 数字为:%d ",b);
}
