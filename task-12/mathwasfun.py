import sys,math
input=sys.stdin.readline
def binary(l,r,co,b,c):
    x=(l+r)*0.5
    valp=(2*x+b)*math.sin(x)
    valq=(x*x+b*x+c)*math.cos(x)
    x=(l+r)*0.5
    val=valp-valq
    if(abs(val)<.0000001 or co==150):
        return (l+r)*0.5
    if(val<0):
        return binary((l+r)*0.5,r,co+1,b,c)
    else:
        return binary(l,(l+r)*0.5,co+1,b,c)
t=int(input())
for _ in range(t):
    b,c=map(float,input().split())
    x=binary(.0000000001,22/14-.0000000001,0,b,c)
    val=(x*x+b*x+c)/math.sin(x)
    print(val)
