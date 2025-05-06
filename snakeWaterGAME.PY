import random as r
print("wWELCOME!!\nTo  snake water gun game:\n")
while True:
 rand=r.randint(1,4)
 choice=int(input("Enter 1 for snake,2 for water and 3 for gun and 4 for  TOOP and 5 for PATAKA:\n")) 
   #snake=1 ,water=2 ,and gun=3
 def check(choice ,rand): 
  if choice==1 and rand==2:
    print("you won.\n snake beat water.")
  if choice==2 and rand==3:
      print("you won.\n water beat gun.")
  if choice==3 and rand==1:
      print("you won.\n gun beat snake.")
  if choice==2 and rand==1:
    print("you lose.\n snake beat water.")
  if choice==1 and rand==3:
      print("you lose.\n gun beat snake.")
  if (choice==rand):
   print("you have draw the game:")     
  if choice==3 and rand==2:
      print("you lose3.\n water beat gun.")
  if choice==4 and rand==2 or rand==1 or rand==3:
      print("you won.\n TOOP IS TOOP.")
  if rand==4 and choice==2 or choice==1 or choice==3:
      print("you lose.\n TOOP IS TOOP.")
  if rand==4 and choice==5:
    print("you won.\n PATAKA WON TOOP.")
  if rand==5 and choice==4:
    print("you LOSE.\n PATAKA WON TOOP.")
  if rand==5 and choice==3 or choice==2 or choice==1:
    print("you won.\n.")
  if choice==5 and rand==3 or rand==2 or rand==1: 
    print("you lose.\n.")



 print("computer :",rand)
 print("you :",choice)
 check(choice,rand)
 print("\n")

 






