import math
f = math.factorial
fact = [] 
for i in range (0,300000):
	fact.append(f(i))

def ncr(n,r):
	return fact[n]/(fact[n-r]*fact[r])

n,k=[int(x) for x in raw_input().split()]

if k==1:
	print(n**(n-2))
elif k==2:
	p = (n*k)//2
r = 1
result = 0
n = n*k
if n>2:
    while r <= p:
        if r%2 == 0:
            sign = -1
        else:
            sign = 1    
        result += sign*(2**(r-1))*ncr(p,r)*((n-r)**(n-r-2))

        r+=1
print(result%1000000007)
else:
	result = 0
r = 1
p = (n*k)//3
rem = (n*k)%3
n = n*k
if rem == 1 or rem == 0:
    if n>3:
        while r <= p:
            if r%2 == 0:
                sign = -1
            else:
                sign = 1
            result += sign*(3**r)*ncr(p,r)*((n-(2*r))**(n-2*r-2))
            r+=1

elif rem == 3:
    if n>3:
        while r <= p:
            if r%2 == 0:
                sign = -1
            else:
                sign = 1
            result += sign*(3**r)*ncr(p,r)*((n-(2*r))**(n-2*r-2))
            r+=1
    result = result/2   
print(result%1000000007) 

