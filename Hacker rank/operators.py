li=list(input() for _ in range(3))
meal_cost, tip_percent, tax_percent=float(li[0]),int(li[1]),int(li[2])
def solve(meal_cost, tip_percent, tax_percent):
    # Write your code here
    # meal_cost=x
    # tip_percent=y
    # tax_percent=z
    if ((meal_cost)+(tip_percent)*(meal_cost)/100+(tax_percent)*(meal_cost)/100)<=int((meal_cost)+(tip_percent)*(meal_cost)/100+(tax_percent)*(meal_cost)/100)+0.5:
        print( int((meal_cost)+(tip_percent)*(meal_cost)/100+(tax_percent)*(meal_cost)/100))
    elif ((meal_cost)+(tip_percent)*(meal_cost)/100+(tax_percent)*(meal_cost)/100)>int((meal_cost)+(tip_percent)*(meal_cost)/100+(tax_percent)*(meal_cost)/100)+0.5:
        print( int((meal_cost)+(tip_percent)*(meal_cost)/100+(tax_percent)*(meal_cost)/100)+1)
    
solve(meal_cost, tip_percent, tax_percent)