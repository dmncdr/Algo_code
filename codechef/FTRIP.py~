import math

def nCr(n,r):
	return fac[n]/(fac[r]* fac[n-r])	
    
if __name__ == '__main__':       
    fac=[]
    fac.append(1)
    for j in range(1,1000):
	fac.append(fac[j-1]*j)
    tc = int(input())    
    while tc:   
        tc -= 1   
        ans=0
        s,n,m,k=raw_input().split()
        s = int(s)     
        n = int(n)      
        m = int(m) 
        k = int(k) 
        c=nCr(s-1,n-1)*1.0
        for i in range(k,m):
           p=nCr(m-1,i)
           q=nCr(s-m,n-1-i)
           ans+=(p*q)
        print("%.8f" % (ans/float(nCr(s-1,n-1))))
