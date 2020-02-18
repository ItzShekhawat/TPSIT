#Create a code that calcolate the subnets of a given ip */


ip = input("Insert the IP : ")
ipV = ip.split(".")
for n in ipV : 
    ipV[n] = int(ipV[n])

if(len(ipV) == 4 and ipV[0]<=255 and ipV[0]>=0 and ipV[1]<=255 and ipV[1]>=0 and ipV[2]<=255 and ipV[2]>=0 and ipV[3]<=255 and ipV[3]>=0):
        break
    else:
        print("Invalid ip.")

 
    
while True:
    mask = int(input("Inserisic la maschera: "))
    if(mask<=32 and mask>=0):
        break
    else:
        print("Invalid mask. ")

for x in ipV:
        print(ipV[x])
    print("\n") 

hosts = pow(2,32-mask) - 2 #Numero di Host
subN = mask - 24  # Numero di sottoreti

ipV = [bin(i) for i in ipV]

inc3 = 0
inc2 = 0        
inc1 = 0
inc0 = 0



for i in range (0,pow(2,(subN))):
    print(f"|SUBNET {i}|")
    if inc3 + int_ip[3]<255:
        inc3 = inc3 + 1
    else:
        inc3 = 0
        int_ip[3] = 0
        if inc2 + int_ip[2] < 255:
            inc2 = inc2 + 1
        else:
            inc2 = 0
            int_ip[2] = 0
            if inc3 + int_ip[1] < 255:
                inc1 = inc1 + 1
            else:
                inc1 = 0
                int_ip[1] = 0
                if inc0 + int_ip[0] < 255:
                    inc0 = inc0 + 1
                else:
                    inc0 = 0
                    int_ip[0] = 0

    print(f"""network: {int_ip[0]+inc0}.{int_ip[1]+inc1}.{int_ip[2]+inc2}.{int_ip[3]+inc3}
host range:""")

    for k in range(1,hosts+1):
        if inc3 + int_ip[3]<255:
            inc3 = inc3 + 1
        else:
            inc3 = 0
            int_ip[3] = 0
            if inc2 + int_ip[2] < 255:
                inc2 = inc2 + 1
            else:
                inc2 = 0
                int_ip[2] = 0
                if inc3 + int_ip[1] < 255:
                    inc1 = inc1 + 1
                else:
                    inc1 = 0
                    int_ip[1] = 0
                    if inc0 + int_ip[0] < 255:
                        inc0 = inc0 + 1
                    else:
                        inc0 = 0
                        int_ip[0] = 0

        print(f"{int_ip[0]+inc0}.{int_ip[1]+inc1}.{int_ip[2]+inc2}.{int_ip[3]+inc3}")

    if inc3 + int_ip[3]<255:
        inc3 = inc3 + 1
    else:
        inc3 = 0
        int_ip[3] = 0
        if inc2 + int_ip[2] < 255:
            inc2 = inc2 + 1
        else:
            inc2 = 0
            int_ip[2] = 0
            if inc3 + int_ip[1] < 255:
                inc1 = inc1 + 1
            else:
                inc1 = 0
                int_ip[1] = 0
                if inc0 + int_ip[0] < 255:
                    inc0 = inc0 + 1
                else:
                    inc0 = 0
                    int_ip[0] = 0
    print(f"broadcast: {int_ip[0]+inc0}.{int_ip[1]+inc1}.{int_ip[2]+inc2}.{int_ip[3]+inc3}")



for n in (32) : 
    for x in ipV:
        print(ipV[x])
    print("\n")

    ipV[3] = ipV[3]+1

    print("Subnet number : " + subN)



#Mask
mask = input("Insert the mask for the subnets : ")
#mask = int(mask.partition("/"))


