omploop: omploop.cc
	g++ -fopenmp $< -o omploop -lpthread #    libomp.a

readjpeg: readjpeg.cc
	g++ -g readjpeg.cc -o readjpeg	 -Ljpeg-6b/ -ljpeg

clean:
	rm readjpeg.exe omploop.exe
