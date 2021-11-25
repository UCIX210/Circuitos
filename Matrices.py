import numpy as np
M=np.array([
            [(25),(-10)],
            [(-20),(21)]]
           )
print(M)
R=np.linalg.inv(M)
V=[(-10),(-6)]
I=np.dot(R,V)
print(I)

