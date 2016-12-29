// 编译：gcc -o fcopy fcopy.c 
// 命令：fcopy f1.c f2.c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *sourceFp, *destFp;
	int ch;
	
	if (argc != 3)
	{
		fprintf(stderr, "usage: fcopy source dest\n");
		exit(EXIT_FAILURE);
	}

	// 采用 "rb" 和 "wb" 作为文件模式
    // 既可以复制文本文件，又可以复制二进制文件
    // 如果是用 "r" 和 "w" 来代替
    // 那么程序将无法复制二进制文件
    if ((sourceFp = fopen(argv[1], "rb")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", argv[1]);
        
        exit(EXIT_FAILURE);
    }

    if ((sourceFp = fopen(argv[2], "wb")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", argv[2]);
        fclose(sourceFp);
        exit(EXIT_FAILURE);
    }

    while((ch=getc(sourceFp)) != EOF)
    {
        putc(ch, destFp);
    }

    fclose(sourceFp);
    fclose(destFp);
    
    return 0;
}