cd ../src
rm -f *.o libSvl.a
gcc -c *.c -I../include
ar rcs libSvl.a *.o

cd ../test
rm -f test
gcc test.c -o test -I../include -L../src -lSvl
