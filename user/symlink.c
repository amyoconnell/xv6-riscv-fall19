#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/fcntl.h"
#include "kernel/fs.h"

struct symlink {
    char* target; // Existing file path 
    char* path; // Path to point to target

}

void
symlink(char* target, char* path) {
    // problem if target doesn't exist
    struct inode* target_inode = namei(target); // should give us inode struct associated with path


}


int
main()
{
    return -1;
}