import numpy as np
import matplotlib.pyplot as plt
import os

os.system ("g++ JuanVelasquez_Ejercicio28.cpp")
os.system ("./a.out")

a = np.loadtxt("data.dat")

plt.figure(figsize = (20,15))
plt.subplot(1,2,1)
plt.plot(a[:,0],a[:,2],label = 'Tiempo inicial')
plt.plot(a[:,0],a[:,3],label = 'Tiempo final')
plt.xlabel("Indice X")
plt.ylabel("Temperatura")
plt.legend(loc = 0)

plt.subplot(1,2,2)
plt.imshow(a)
plt.savefig("grafica.png")

