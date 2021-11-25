import numpy as np
R1=2052
R2=3170
R3=1141
R4=1458
R5=1550
Vol=1.93
I=270
M=np.array([
            [(1),(-Vol),(Vol),(0)],
            [(1/R1),(-((1/R1)+(1/R2)+(1/R3))),(1/R2),(0)],
            [(0),(1/R2),(-((1/R2)+(1/R5))),(1/R5)],
            [(0),(0),(1/R5),(-((1/R5)+(1/R4)))]
           ])
print(M)
print("---------------------------------------------")
R=np.linalg.inv(M)
V=[(0),(0),(-(I/1000)),(I/1000)]
print(V)
print("--------------------------------------")
print("")

I=np.dot(R,V)
print(I)
print("")
print("--------------------------------------")
print("")
VR1=I[0]-I[1]
print("VR1 =", VR1)
VR2=I[1]-I[2]
print("VR2 =", VR2)
VR3=I[1]
print("VR3 =", VR3)
VR4=I[3]
print("VR4 =", VR4)
VR5=I[2]-I[3]
print("VR5 =", VR5)
print("")
print("--------------------------------------")
print("")
PR1=(VR1*VR1)/R1
print("PR1 =", PR1)
PR2=(VR2*VR2)/R2
print("PR2 =", PR2)
PR3=(VR3*VR3)/R3
print("PR3 =", PR3)
PR4=(VR4*VR4)/R4
print("PR4 =", PR4)
PR5=(VR5*VR5)/R5
print("PR5 =", PR5)
PRT=PR1+PR2+PR3+PR4+PR5
print("PRT =", PRT)
