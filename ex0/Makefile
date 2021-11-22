CC=gcc
AR=ar
OBGECT_STATIC_LIB_LOOP= basicClassification.o advancedClassificationLoop.o
OBGECT_STATIC_LIB_RECURS= basicClassification.o advancedClassificationRecursion.o
OBGECT_DYNAMIC_LIB_LOOP= basicClassification.o advancedClassificationLoop.o
OBGECT_DYNAMIC_LIB_RECURS= basicClassification.o advancedClassificationRecursion.o
FLAGS= -Wall -g

all:loops recursives loopd recursived mains maindloop maindrec

loopd: libclassloops.so
loops: libclassloops.a
recursives: libclassrec.a
recursived: libclassrec.so
#creat libraries
libclassloops.a:$(OBGECT_STATIC_LIB_LOOP)
	$(AR) -rcs libclassloops.a $(OBGECT_STATIC_LIB_LOOP)
libclassrec.a:$(OBGECT_STATIC_LIB_RECURS)
	$(AR) -rcs libclassrec.a $(OBGECT_STATIC_LIB_RECURS)
libclassloops.so:$(OBGECT_DYNAMIC_LIB_LOOP)
	$(CC) -shared -o libclassloops.so $(OBGECT_DYNAMIC_LIB_LOOP)
libclassrec.so:$(OBGECT_DYNAMIC_LIB_RECURS)
	$(CC) -shared -o libclassrec.so $(OBGECT_DYNAMIC_LIB_RECURS)

basicClassification.o: basicClassification.c NumClass.h
	$(CC) $(FLAGS) -c basicClassification.c
advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationLoop.c
advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c

#creat main
mains: main.o libclassrec.a
	$(CC) $(FLAGS) -o mains main.o libclassrec.a
maindloop: main.o libclassloops.so
	$(CC) $(FLAGS) -o maindloop main.o ./libclassloops.so 
maindrec: main.o libclassrec.so
	$(CC) $(FLAGS) -o maindrec main.o ./libclassrec.so

main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c main.c

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maindloop maindrec