import pyautogui
import time

print("Program will start in 5 seconds...")
time.sleep(5)

for _ in range(100):
    pyautogui.write("STOP")
    pyautogui.press('enter')
