#에라토스테네스의 체
n=2000000
a = [False,False] + [True]*(n-1)
primes = 0

for i in range(2,n+1):
  if a[i]:
    primes += i
    for j in range(2*i, n+1, i):
        a[j] = False
print(primes)
