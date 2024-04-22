# program to display first 10 even numbers 

def main():
    j = 2
    i = 0
    while (i<10):
        print(j, end =" ")
        j = j + 2
        i = i + 1

    print("")
    
    for i in range(2,22,2):
        print(i, end = " ")


if __name__ == "__main__":
    main()