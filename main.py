import pandas as pd
import matplotlib.pyplot as plt

data = pd.read_csv('C:\\Users\\chris\\source\\repos\\dimensionalidad\\dimensionalidad\\distancias.txt', sep='\t', header=None)

distances = data[0]
plt.hist(distances, bins=20, edgecolor='black')
plt.xlabel('Distancias')
plt.ylabel('Frecuencia')
plt.title('Histograma de las distancias entre puntos con dimension 1000')
plt.grid(True)

plt.xlim(0)
plt.ylim(0)

plt.show()