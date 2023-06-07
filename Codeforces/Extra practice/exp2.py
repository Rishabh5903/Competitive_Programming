# print(bin(513))
# print(bin(516))
# print(bin(517))
# print(bin(3111))
# print(3108^3109^3110^3111)
# print(6^6148^6145^3)
# print(10^11^12^13)
# print(19^22^20^17)
# print(0^1^2^3)
# print(3^20^17^6)
l=[122,130,116,125,142,122,141,132,122,151,133,157,144,128,135]
ans=0
for i in range(13):
    ans+=l[i]*l[i+1]*l[i+2]
print(ans)