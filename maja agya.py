import random
trials=100000
favorable=0
for i in range(trials):
    n=random.randint(1,10000)
    if n%2==0:
        favorable+=1
prob=favorable/trials
print(prob)
