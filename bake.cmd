
gcc init.c -o init.obj -c %1 -nostdlib
windres -o manifest.obj manifest.rc
ld -relocatable -o libwinsane.obj init.obj manifest.obj
