import pyautogui
import time

time.sleep(5)

for _ in range(100):
    pyautogui.write("STOP")
    pyautogui.press('enter')
