vowels=['A','E','I','O','U','a','e','i','o','u']
string=input()+'.'
letter_count=0
vowel=0
for i in range(len(string)):
    if string[i] == ' ':  
        print("\n")
    elif ((string[i] >= 'A' and string[i] <= 'Z') or (string[i] >= 'a' and string[i] <= 'z')):
        if string[i-1] == ' ' or i==0:
            print(string[i].upper(),end = "")
        else:
            print(string[i],end = "")
        if vowels.count(string[i]) > 0:
            vowel=vowel+1
        letter_count+=1
consonant=letter_count-vowel
print("\n"+str(vowel))
print(consonant)
