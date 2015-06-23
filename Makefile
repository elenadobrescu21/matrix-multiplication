build: inm

inm: inmult.cpp mat.in
	g++ inmult.cpp -o inm
run: inm
	./inm
clean:
	rm -rf inm