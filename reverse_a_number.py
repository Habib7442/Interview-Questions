reverseNumber = 0
number = 345

while(number > 0):
    remainder = number % 10
    number = number//10
    reverseNumber = (reverseNumber * 10) + remainder

print(reverseNumber)
