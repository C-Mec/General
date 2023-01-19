# a = list(map(int, input("Enter thr prices: ").split()))
# amin = a[0]
# tot = a[0] + a[1] + a[2] + a[3]
# for i in range(1, 4):
#     if a[i] < amin:
#         amin = a[i]
# print(f"The total price is {tot - amin} dollars")

# n = int(input("Input N: "))
# print(f"Input {n} integer: ", end="")
# a = list(map(int, input().split()))
# b = False
# for i in range(n):
#     if a[i] % 2 == 0:
#         b = a[i]
#         break
# print("Output: ", end = "")
# if b:
#     print(b)
# else:
#     print("None")

a = ""
s = input("Input: ")
for i in range(len(s)):
    if (i == 0 or s[i-1] == ' ') and (s[i] >= "a" and s[i] <= "z"):
        a += chr(ord(s[i]) - 32)
    elif s[i] >= "A" and s[i] <= "Z":
        a += chr(ord(s[i]) + 32)
    else:
        a += s[i]
print("Output: " + a)