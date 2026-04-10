# Simple Python program for Jenkins

def main():
    a = 10
    b = 20
    c = 30
    d = 40

    total = a + b + c + d

    print("Sum of four numbers =", total)

    # Extra output for logs
    for i in range(1, 6):
        print("Number:", i)

if __name__ == "__main__":
    main()
