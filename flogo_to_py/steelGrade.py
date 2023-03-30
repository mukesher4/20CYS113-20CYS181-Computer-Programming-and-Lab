def gradeSteel(hard, carb, str):
    if hard > 50 and carb < 0.7 and str > 5600:
        grade = 10
    else:
        if hard > 50 and carb < 0.7:
            grade = 9
        else:
            if hard > 50 and str > 5600:
                grade = 7
            else:
                if str > 5600 and carb < 0.7:
                    grade = 8
                else:
                    if carb < 0.7:
                        grade = 6
                    else:
                        if str > 5600:
                            grade = 6
                        else:
                            if hard > 50:
                                grade = 6
                            else:
                                grade = 5
    
    return grade

# Main
print("How many steels do you want to Grade? ")
units = int(input())
steel = [0] * (units)

for i in range(0, units - 1 + 1, 1):
    cond = 0
    print("Entry data for " + str(i + 1) + " :")
    hard = float(input())
    carb = float(input())
    str = float(input())
    steel[i] = gradeSteel(hard, carb, str)
    print("Grade for steel " + str(i + 1) + " : " + str(steel[i]))
