def count_occurrences(lst):
    counts = {}
    for elem in lst:
        if elem in counts:
            counts[elem] += 1
        else:
            counts[elem] = 1
    return counts

lst = input("Enter a list of elements (separated by spaces): ")
lst = lst.split()

counts = count_occurrences(lst)
print("Element counts:")
for elem, count in counts.items():
    print(f"{elem}: {count}")