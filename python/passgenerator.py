import random
import PySimpleGUI as GUI

GUI.theme('BrownBlue')

def shuffle(string):
    templist = list(string)
    random.shuffle(templist)
    return ''.join(templist)

upperLetter1 = chr(random.randint(65, 90)) 
upperLetter2 = chr(random.randint(65,90))
lowerLetter1 = chr(random.randint(97,122))
lowerLetter2 = chr(random.randint(97,122))
digit1 = int(random.randint(48,57))
digit2 = int(random.randint(48,57))

password = upperLetter1 + upperLetter2 + lowerLetter1 + lowerLetter2
password += str(digit1) + str(digit2)
password = shuffle(password)

print("Your password is " + password)
    
event, values = GUI.Window('Login Window',
                  [[GUI.T('Password created: '), GUI.T(password)],
                  [GUI.B('OK')]]).read(close=True)