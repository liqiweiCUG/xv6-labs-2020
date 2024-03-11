#include "kernel/types.h"
#include "user/user.h"

int main(int argc, char const *argv[]){
    if(argc != 2){//参数错误
        fprintf(2, "请使用正确的参数");
        exit(1);
    }
    sleep(atoi(argv[1]));
    exit(0);
}