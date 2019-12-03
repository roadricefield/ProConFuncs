def str_rep(S, rep, n):
    Rep = S[:n] + rep + S[n+1:]
    return Rep

S = input()
rep = input()
n = int(input())

print(S)
print(str_rep(S,rep,n))

