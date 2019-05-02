all: data.dat grafica.png

%.png: %.dat grafica.png
	python3 graficar.py
	
%.dat: a.out
	./a.out

a.out: JuanVelasquez_Ejercicio28.cpp
	g++ JuanVelasquez_Ejercicio28.cpp

clean:
	rm -rf *.x *.dat *.png