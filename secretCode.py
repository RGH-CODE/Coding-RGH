st=input("Enter the string: ")
words=st.split()
d=input("Enter CODE DECODE OR QUIT:")

if d=="code" or d=="CODE":
   
    nwords=[]
    for word in words:
     if(len(word)>=3):
      r1="raj"
      r2="esh"
      new=r1+word[1:]+word[0]+r2
      nwords.append(new)
     else:
        nwords.append(word[::-1])
    print(" ".join(nwords)) 
                     
elif d=="decode" or d=="DECODE":
    nwords=[]
    for word in words:
     if(len(word)>=3):
        new=word[3:-3]
        new=new[-1]+new[:-1]
        nwords.append(new) 
     else:
            nwords.append(word[::-1])
    print(" ".join(nwords))  
     
else:
    print("Wrong instruction buddy.\n Please enter valid input")  
