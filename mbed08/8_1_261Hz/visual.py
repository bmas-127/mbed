import matplotlib.pyplot as plt
import numpy as np
import serial
import time

t = np.arange(0, 500)
tilt = np.zeros((500))

serdev = '/dev/ttyACM0'
s = serial.Serial(serdev)


for i in range(0, 10) :
    line=s.readline() # Read an echo string from K66F terminated with '\n'
    print(int(line))

for i in range(0, 500):
    line=s.readline() # Read an echo string from K66F terminated with '\n'
    tilt[i] = (int(line))



plt.plot(t, tilt)
plt.show()


s.close()