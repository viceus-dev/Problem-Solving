n1,n2 = input().split()

n1 = float(n1)
n2 = float(n2)

mean = (n1+n2)/2

if mean >= 7:
    print("Aprovado")
elif mean > 4:
    print("Recuperacao")
else:
    print("Reprovado")