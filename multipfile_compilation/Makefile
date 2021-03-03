math: multifile_compilation.o multifile_compilation_utilis.o
	g++ multifile_compilation.o multifile_compilation_utilis.o -o math # math is output file

multifile_compilation.o : multifile_compilation.cpp
	g++ -c multifile_compilation.cpp

multifile_compilation_utilis.o : multifile_compilation_utilis.cpp
	g++ -c multifile_compilation_utilis.cpp

clean:
	rm *.o math # Remove all implementation file and ./math file

# NOTE: Makefile only run the command have the input files are changed,
