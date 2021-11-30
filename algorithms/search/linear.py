element = 5
l = [2, 4, 6, 4, 6, 3, 7, 4, 8, 4, 2, 5, 6, 7, 8, 3, 6, 9, 4]

for i in l:
    if i == element:
        print(f"The element: {element} was found at {l.index(element)}")