
#여러개의 최소공배수 구하기
def lcm(arr): 
    def g(x, y): #최대공약수
        while y: x, y = y, x % y
        return x
    def l(x, y):#최소공배수
        return (x * y) // g(x, y)
    a = arr[0]
    for b in arr[1:]:
        a = l(a, b)
    return a


arr = []
for i in range(1,21):
    arr.append(i)
print(lcm(arr))

