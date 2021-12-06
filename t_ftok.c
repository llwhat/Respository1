//================================
//
//	ftok("/root", 0x22)返回的唯一性标识符：
//		22+"/root"的设备编号低二位+"/root"的inode号低四位
//
//================================
#include <stdio.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <asm/stat.h>

int main( void )
{
    struct stat buf;
    int ret = stat("/root", &buf);
    if(ret){
        printf("stat error\n");
        exit(-1);
    }
    printf("ftok(\"/root\",0x22)=0x%x,st_info=0x%x,st_dev=0x%x\n",
            ftok("/root",0x22), buf.st_ino, buf.st_dev);
    return 0;
} 
