# Correct the approach to handle integers and expressions uniformly
from sympy import sympify

# Redefine the functions as sympy expressions
functions = [sympify('1'), x, x**2, x**3, x**4, x**5]

# Reset the system of equations
equations = []

for f in functions:
    # Calculate the integral of f from -1 to 1
    integral_result = integrate(f, (x, -1, 1))
    # Set up the equation based on the given formula
    equation = integral_result - (c1 * f.subs(x, x1) + c2 * f.subs(x, x2) + c3 * f.subs(x, x3))
    equations.append(equation)

# Attempt to solve the system of equations again
solution = solve(equations, (c1, c2, c3, x1, x2, x3))

solution
