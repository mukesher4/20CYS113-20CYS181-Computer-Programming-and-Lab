def negerint(value):
    null = "Ok"
    while value < 0:
        errmsg = "Error" + chr(13) + "Negative input"
        print(errmsg)
        print("Try again")
        value = int(input())
    
    return null

def negerreal(value):
    null = "Ok"
    while value < 0:
        errmsg = "Error" + chr(13) + "Negative input"
        print(errmsg)
        print("Try again")
        value = float(input())
    
    return null

# Main
print("Welcome to Bank")
print("Enter balance amount in your account: ")
balance = float(input())
print(negerreal(balance))
while balance < 500:
    print("Minimum balance is not being maintained")
    print("Try again")
    balance = float(input())
print("You have $" + str(balance) + " in your account")
print("Select any one option:" + chr(13) + "(1)Withdraw" + chr(13) + "(2)Deposit" + chr(13) + "(3)Referring a friend")
choice = int(input())
print(negerint(choice))
if choice == 1:
    print("Withdraw")
    print("Enter amount to withdraw: ")
    withdraw = float(input())
    print(negerreal(withdraw))
    if balance > withdraw:
        if balance >= 500:
            balance = balance + withdraw
            print("You have withdrawn $" + str(withdraw) + " from your account")
            print("You have $" + str(balance) + " in your account")
        else:
            print("Error")
            print("Minimum balance of $500 is not being maintained")
    else:
        print("Error")
        print("Amount enetered is greater than the balance amount in your account")
else:
    if choice == 2:
        print("Deposit")
        print("Enter amount to deposit: ")
        deposit = float(input())
        print(negerreal(deposit))
        balance = balance + deposit
        print("You have deposited $" + str(deposit) + " into your account")
        print("You have $" + str(balance) + " in your account")
    else:
        if choice == 3:
            print("Referring a friend: ")
            print("Amount of $50 is credited to your account")
            balance = balance + 50
            print("You have $" + str(balance) + " in your account")
        else:
            print("Error")
            print("Enter proper option")
