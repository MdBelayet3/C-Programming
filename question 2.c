while True:
    M = int(input("Enter the first value (M): "))
    N = int(input("Enter the second value (N): "))

    if M <= 0 or N <= 0:
        break

    start = min(M, N)
    end = max(M, N)

    sequence = list(range(start, end + 1))
    sequence_sum = sum(sequence)

    print(f"The sequence from {start} to {end} is: {sequence}")
    print(f"The sum of the sequence is: {sequence_sum}\n")

