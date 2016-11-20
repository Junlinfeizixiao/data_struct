#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

/*
int main()
{
	int i = 10;
	int j = 20;
	
	int *p = &i;
	int *s = &j;

	const int * const * const m = (int * const *)&p; 


	//m = (const int **)&s;      //1



	//*m = &j;     //2
	**m = 1000;  //3

	printf("%d - %d\n",i,j);


	return 0;
}



int main()
{
	//        1000
	char ch[] = "AaXxYyZz";
	char *cp = ch;

	printf("%c\n", *++cp);
	printf("%c\n", *cp++);
	printf("%c\n", ++*cp);
	printf("%c\n", (*cp)++);
	printf("%c\n", ++*++cp);
	printf("%c\n", ++*cp++);

	return 0;
}


bool find_chr(char **strings, char ch)
{
	char *str;

	while(*strings != NULL)
	{
		str = *strings;
		while(*str != 0)
		{
			if (*str == ch)
			{
				return true;
			}
			str++;
		}
		strings++;
	}
	return false;
}

bool find_chr(char **strings, char ch)
{
	while(*strings != NULL)
	{	
		while(**strings != 0)
		{
			if (**strings == ch)
			{
				return true;
			}
			(*strings)++;
		}
		strings++;
	}
	return false;
}
//xg.exe
int main()
{
	char s1[] = "A string";
	char s2[] = "Another";
	char s3[] = "Third";
	char s4[] = "Last";

	char *string[] = {s1,s2,s3,s4,NULL};
	printf("%d\n",find_chr(string, 'e'));
	//char **strings = string;

	return 0;

}


#include <vld.h>

//xg.exe Hello worldint argc, char *argv[]
int main(int argc,char **argv)
{
	int *buff = (int *)malloc(sizeof(int) * 10);
	free(buff);

	return 0;
}


xg.exe "Hello     World" -U/L/P                   -D
                         大写 小写 不动        删空格

	
*/

void del_space(char *str)
{
	char *buff = (char *)malloc(strlen(str) + 1);
	assert(buff != NULL);
	char *s1 = str;
	char *s2 = buff;
	while(*str != 0)
	{
		if (*str != ' ')
		{
			*buff = *str;
			buff++;
		}
		str++;
	}
	*buff = 0;
	strcpy(s1, s2);
	free(s2);
}

//xg.exe -h

//xg.exe --help

//xg.exe "Hello   Wolrd"  -UD

//xg.exe "Hello  World" -U -D
int main(int argc,char **argv)
{
	if (argc < 2)
	{
		printf("参数个数不正确\n");
		exit(-1);
	}
	char *buff = (char *)malloc(strlen(*++argv) + 1);
	assert(buff != NULL);

	strcpy(buff, *argv);

	while(*++argv != NULL)
	{
		if (**argv == '-')
		{
			switch(*(*argv+1))
			{
			case 'D':
			case 'd':
				del_space(buff);
				break;
			case 'U':
			case 'u':
				strupr(buff);
				break;
			case 'L':
			case 'l':
				strlwr(buff);
				break;
			case 'P':
			case 'p':
			default:
				break;
			}

		}
	}
	printf("%s\n", buff);
	free(buff);

	return 0;
}


/*

//xg.exe "Hello  World" -U -D
int main(int argc,char **argv)
{
	//for (int i=0;i<argc;i++)
	//{
	//	printf("%s\n", argv[i]);//--->"xg.exe"  
	//}
	
	
	while(*++argv != NULL)
	{
		printf("%s\n", *argv);
	}

	if (argc < 2)
	{
		printf("参数个数不正确\n");
		exit(-1);
	}
	char *buff = (char *)malloc(strlen(argv[1]) + 1);
	assert(buff != NULL);

	strcpy(buff, argv[1]);


	if (argc == 3)
	{
		if(*argv[2] == '-')
		{
			switch(*(argv[2]+1))
			{
			case 'U':
			case 'u':
				strupr(buff);
				break;
			case 'L':
			case 'l':
				strlwr(buff);
				break;
			case 'P':
			case 'p':
			default:
				break;
			}
		}
	}
	else if(argc == 4)
	{

	}


	return 0;
}*/

8 数组和指针  效率  5  prog

  数组和数组指针
  （二维）


  二维数组和函数 5MIN



14 1、头文件
   2、宏定义
	宏函数
   3、条件编译指令


   7月14日
   星期四


   晚上XG1504-CP
	
   7月16日
   星期六


   晚上XG1504-CP



DS

大话数据结构