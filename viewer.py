import sys
import time

GREEN = "\033[92m"
RED = "\033[91m"
YELLOW = "\033[93m"
BLUE = "\033[94m"
RESET = "\033[0m"

DELAY = 0.6

for line in sys.stdin:
    line = line.strip()
    if not line:
        continue

    parts = line.split(" ", 2)
    event = parts[0]
    depth = int(parts[1])
    value = parts[2]

    indent = "  " * depth

    if event == "choose":
        print(f"{indent}{GREEN}-> Choose {value}{RESET}")

    elif event == "backtrack":
        print(f"{indent}{RED}<- Backtrack {value}{RESET}")

    elif event == "output":
        print(f"{indent}{YELLOW}[OUT] {value}{RESET}")

    elif event == "skip":
        print(f"{indent}{BLUE}* Skip {value}{RESET}")

    time.sleep(DELAY)
