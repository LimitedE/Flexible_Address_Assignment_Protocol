#include <stdio.h>
#include <base-struct.h>
#include "net/rpl/rpl.h"
//set 设置所在的bit位为1
void set(int a[],int i) {        
	a[i>>SHIFT] |=  (1<<(i & MASK)); 
}
//clr 初始化所有的bit位为0
void clr(int a[],int i) {        
	a[i>>SHIFT] &= ~(1<<(i & MASK)); 
}
//test 测试所在的bit为是否为1
int test(int a[],int i){ 
	return a[i>>SHIFT] &   (1<<(i & MASK)); 
}


// int main()
// {	int i;
// 	for (i = 0; i < N; i++)
// 		clr(conv_map,i);  
// 	while (scanf("%d", &i) != EOF)
// 		set(conv_map,i);
// 	for (i = 0; i < N; i++)
// 		if (test(conv_map,i))
// 			printf("%d\n", i);
// 	return 0;
// }