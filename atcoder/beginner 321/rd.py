N, M, P = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

main_prices = []
side_prices = []
total_price = 0

for i in range(N):
    main_prices.append(A[i])

for j in range(M):
    side_prices.append(B[j])

main_prices.sort()
side_prices.sort()

main_ptr = 0
side_ptr = 0

while main_ptr < N and side_ptr < M:
    set_meal_price = main_prices[main_ptr] + side_prices[side_ptr]
    total_price += min(set_meal_price, P)
    
    if set_meal_price <= P:
        main_ptr += 1
    else:
        side_ptr += 1

print(total_price)
