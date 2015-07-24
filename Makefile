all : release
	

debug : hello-fly-elephant-dbg
	

release: hello-fly-elephant
	

clean:
	rm -f *.o hello-fly-elephant

debugclean:
	rm -f *.o hello-fly-elephant-dbg

hello-fly-elephant : main.c
	gcc -O3 main.c -o hello-fly-elephant

hello-fly-elephant-dbg : main.c
	gcc -O0 -g main.c -o hello-fly-elephant-dbg
