def lcm(a,b):
    ans=max(a,b)
    if ans%a ==0 and ans%b==0:
        return ans
    else:
        ans+=ans
        return(lcm(min(a,b),ans))
