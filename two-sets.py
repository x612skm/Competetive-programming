n = int(input())



a = []

b = []



c = n*(n+1)//2



if c%2==1:

    print("NO")



else:



    print("YES")

    c //= 2



    while (n):

        if (c - n >= 0):

            a.append(n)

            c -=n

        

        else:

            b.append(n)

        

        n -=1

    

    print(len(a))

    print(*a)

    print(len(b))

    print(*b)