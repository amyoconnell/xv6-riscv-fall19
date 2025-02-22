#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/fcntl.h"
#include "kernel/fs.h"

int
main(int argc, char *argv[])
{
    // Check that we were passed a target and a path
    if(argc < 3){
        fprintf(2, "Usage: symlink target path\n");
        exit(1);
    }

    // Call symlink syscall and make sure it returns without error
    if(symlink(argv[1], argv[2]) < 0){
        fprintf(2, "symlink: failed to create symbolic link from %s to %s\n", argv[2], argv[1]);
    }
    
    exit(0);
}