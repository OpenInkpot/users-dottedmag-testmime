#include <Efreet_Mime.h>
#include <stdio.h>

int main(int argc, char** argv)
{
    efreet_mime_init();

    int i;
    for(i = 1; i < argc; ++i)
    {
        const char* m = efreet_mime_type_get(argv[i]);
        printf("%s: %s\n", argv[i], m ? m : "<NULL>");
    }

    efreet_mime_shutdown();
}
