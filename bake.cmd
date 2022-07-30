
gcc init.c -o init.o -c
ld -relocatable -o libwinsane.o init.o manifest.o
windres -o manifest.o manifest.rc
